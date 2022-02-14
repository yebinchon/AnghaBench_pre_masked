
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef void* u16 ;
struct TYPE_6__ {int is_going_down; } ;
struct TYPE_5__ {void*** phys_pkey_cache; } ;
struct mlx4_ib_dev {TYPE_3__ sriov; int dev; TYPE_2__ pkeys; } ;
struct ib_smp {int * data; int attr_mod; } ;
struct ib_port_info {int neighbormtu_mastersmsl; int clientrereg_resv_subnetto; int sm_lid; int lid; } ;
struct TYPE_4__ {scalar_t__ mgmt_class; scalar_t__ method; int attr_id; } ;
struct ib_mad {TYPE_1__ mad_hdr; } ;
struct ib_device {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;



 int FUNC_0 (struct mlx4_ib_dev*,int ,int,int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mlx4_ib_dev*,int ) ;
 int FUNC_4 (struct mlx4_ib_dev*,int ) ;
 int FUNC_5 (struct mlx4_ib_dev*,int ,int ) ;
 int FUNC_6 (struct mlx4_ib_dev*,int,int ,int *) ;
 int FUNC_7 (struct mlx4_ib_dev*,int,int ,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,int ,int,...) ;
 struct mlx4_ib_dev* FUNC_11 (struct ib_device*) ;
 int FUNC_12 (struct mlx4_ib_dev*,int ,void*,int) ;

__attribute__((used)) static void FUNC_13(struct ib_device *VAR_5, u8 VAR_6, struct ib_mad *VAR_7,
        u16 VAR_8)
{
 struct ib_port_info *VAR_9;
 u16 VAR_10;
 __be16 *VAR_11;
 u32 VAR_12, VAR_13;
 int VAR_14;


 struct mlx4_ib_dev *VAR_15 = FUNC_11(VAR_5);
 if ((VAR_7->mad_hdr.mgmt_class == VAR_3 ||
      VAR_7->mad_hdr.mgmt_class == VAR_2) &&
     VAR_7->mad_hdr.method == VAR_4)
  switch (VAR_7->mad_hdr.attr_id) {
  case 128:
   VAR_9 = (struct ib_port_info *) ((struct ib_smp *) VAR_7)->data;
   VAR_10 = FUNC_1(VAR_9->lid);

   FUNC_12(VAR_15, VAR_6,
         FUNC_1(VAR_9->sm_lid),
         VAR_9->neighbormtu_mastersmsl & 0xf);

   if (VAR_9->clientrereg_resv_subnetto & 0x80)
    FUNC_3(VAR_15, VAR_6);

   if (VAR_8 != VAR_10)
    FUNC_4(VAR_15, VAR_6);
   break;

  case 129:
   if (!FUNC_9(VAR_15->dev)) {
    FUNC_5(VAR_15, VAR_6,
             VAR_1);
    break;
   }




   VAR_12 = FUNC_2(((struct ib_smp *)VAR_7)->attr_mod) & 0xFFFF;
   VAR_11 = (__be16 *) &(((struct ib_smp *)VAR_7)->data[0]);
   VAR_13 = 0;
   for (VAR_14 = 0; VAR_14 < 32; VAR_14++) {
    FUNC_10("PKEY[%d] = x%x\n",
      VAR_14 + VAR_12*32, FUNC_1(VAR_11[VAR_14]));
    if (FUNC_1(VAR_11[VAR_14]) !=
        VAR_15->pkeys.phys_pkey_cache[VAR_6 - 1][VAR_14 + VAR_12*32]) {
     VAR_13 |= (1 << VAR_14);
     VAR_15->pkeys.phys_pkey_cache[VAR_6 - 1][VAR_14 + VAR_12*32] =
      FUNC_1(VAR_11[VAR_14]);
    }
   }
   FUNC_10("PKEY Change event: port=%d, "
     "block=0x%x, change_bitmap=0x%x\n",
     VAR_6, VAR_12, VAR_13);

   if (VAR_13) {
    FUNC_5(VAR_15, VAR_6,
             VAR_1);
    if (!VAR_15->sriov.is_going_down)
     FUNC_0(VAR_15, VAR_6, VAR_12,
           VAR_13);
   }
   break;

  case 130:

   if (!FUNC_8(VAR_15->dev))
    FUNC_5(VAR_15, VAR_6,
             VAR_0);

   if (FUNC_8(VAR_15->dev) &&
       !VAR_15->sriov.is_going_down) {
    VAR_12 = FUNC_2(((struct ib_smp *)VAR_7)->attr_mod);
    FUNC_7(VAR_15, VAR_12, VAR_6,
            (u8 *)(&((struct ib_smp *)VAR_7)->data));
    FUNC_6(VAR_15, VAR_12, VAR_6,
             (u8 *)(&((struct ib_smp *)VAR_7)->data));
   }
   break;

  default:
   break;
  }
}
