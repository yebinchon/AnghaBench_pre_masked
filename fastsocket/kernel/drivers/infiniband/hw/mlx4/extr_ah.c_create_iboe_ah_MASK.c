
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
typedef int u16 ;
struct mlx4_ib_dev {struct mlx4_dev* dev; } ;
struct ib_ah {int dummy; } ;
struct TYPE_12__ {int stat_rate; void* sl_tclass_flowlabel; int dgid; void* vlan; int gid_index; void* port_pd; int mac; } ;
struct TYPE_9__ {void* dlid; } ;
struct TYPE_13__ {TYPE_5__ eth; TYPE_2__ ib; } ;
struct mlx4_ib_ah {struct ib_ah ibah; TYPE_6__ av; } ;
struct TYPE_8__ {int stat_rate_support; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct ib_pd {int device; } ;
struct TYPE_10__ {int * raw; } ;
struct TYPE_11__ {TYPE_3__ dgid; int sgid_index; } ;
struct ib_ah_attr {int port_num; int sl; int static_rate; TYPE_4__ grh; } ;
struct TYPE_14__ {int pdn; } ;


 struct ib_ah* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ,int,int ,union ib_gid*) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (struct mlx4_ib_dev*,struct ib_ah_attr*,int *,int*,int) ;
 int FUNC_6 (union ib_gid*) ;
 struct mlx4_ib_dev* FUNC_7 (int ) ;
 TYPE_7__* FUNC_8 (struct ib_pd*) ;

__attribute__((used)) static struct ib_ah *FUNC_9(struct ib_pd *VAR_2, struct ib_ah_attr *VAR_3,
        struct mlx4_ib_ah *VAR_4)
{
 struct mlx4_ib_dev *VAR_5 = FUNC_7(VAR_2->device);
 struct mlx4_dev *VAR_6 = VAR_5->dev;
 union ib_gid VAR_7;
 u8 VAR_8[6];
 int VAR_9;
 int VAR_10;
 u16 VAR_11;

 VAR_9 = FUNC_5(VAR_5, VAR_3, VAR_8, &VAR_10, VAR_3->port_num);
 if (VAR_9)
  return FUNC_0(VAR_9);

 FUNC_4(VAR_4->av.eth.mac, VAR_8, 6);
 VAR_9 = FUNC_3(VAR_2->device, VAR_3->port_num, VAR_3->grh.sgid_index, &VAR_7);
 if (VAR_9)
  return FUNC_0(VAR_9);
 VAR_11 = FUNC_6(&VAR_7);
 if (VAR_11 < 0x1000)
  VAR_11 |= (VAR_3->sl & 7) << 13;
 VAR_4->av.eth.port_pd = FUNC_2(FUNC_8(VAR_2)->pdn | (VAR_3->port_num << 24));
 VAR_4->av.eth.gid_index = VAR_3->grh.sgid_index;
 VAR_4->av.eth.vlan = FUNC_1(VAR_11);
 if (VAR_3->static_rate) {
  VAR_4->av.eth.stat_rate = VAR_3->static_rate + VAR_1;
  while (VAR_4->av.eth.stat_rate > VAR_0 + VAR_1 &&
         !(1 << VAR_4->av.eth.stat_rate & VAR_6->caps.stat_rate_support))
   --VAR_4->av.eth.stat_rate;
 }




 if (VAR_10)
  VAR_4->av.ib.dlid = FUNC_1(0xc000);

 FUNC_4(VAR_4->av.eth.dgid, VAR_3->grh.dgid.raw, 16);
 VAR_4->av.eth.sl_tclass_flowlabel = FUNC_2(VAR_3->sl << 29);

 return &VAR_4->ibah;
}
