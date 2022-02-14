
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct mlx4_ib_dev {int ib_dev; int dev; } ;
struct ib_smp {int base_version; int class_version; int data; int attr_mod; int attr_id; int method; int mgmt_class; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ib_smp*) ;
 struct ib_smp* FUNC_2 (int,int ) ;
 int FUNC_3 (struct ib_smp*,int ,int) ;
 scalar_t__ FUNC_4 (struct mlx4_ib_dev*,int,int ,int *,int *,struct ib_smp*,struct ib_smp*) ;
 int FUNC_5 (struct mlx4_ib_dev*,int,int ,int *) ;
 int FUNC_6 (struct mlx4_ib_dev*,int,int ,int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct mlx4_ib_dev *VAR_6, u8 VAR_7,
          u32 VAR_8, u32 VAR_9)
{
 struct ib_smp *VAR_10 = ((void*)0);
 struct ib_smp *VAR_11 = ((void*)0);
 u16 VAR_12;

 if (!FUNC_9(VAR_6->dev) || !FUNC_8(VAR_6->dev))
  return;

 VAR_10 = FUNC_2(sizeof *VAR_10, VAR_0);
 VAR_11 = FUNC_2(sizeof *VAR_11, VAR_0);
 if (!VAR_10 || !VAR_11) {
  FUNC_7(&VAR_6->ib_dev, "failed to allocate memory for guid info mads\n");
  goto out;
 }

 VAR_8 *= 4;

 for (VAR_12 = 0; VAR_12 < 4; VAR_12++) {
  if (VAR_9 && (!((VAR_9 >> (8 * VAR_12)) & 0xff)))
   continue;
  FUNC_3(VAR_10, 0, sizeof *VAR_10);
  FUNC_3(VAR_11, 0, sizeof *VAR_11);

  VAR_10->base_version = 1;
  VAR_10->mgmt_class = VAR_1;
  VAR_10->class_version = 1;
  VAR_10->method = VAR_2;
  VAR_10->attr_id = VAR_3;
  VAR_10->attr_mod = FUNC_0(VAR_8 + VAR_12);

  if (FUNC_4(VAR_6,
     VAR_4 | VAR_5,
     VAR_7, ((void*)0), ((void*)0), VAR_10, VAR_11)) {
   FUNC_7(&VAR_6->ib_dev, "Failed in get GUID INFO MAD_IFC\n");
   goto out;
  }

  FUNC_6(VAR_6, VAR_8 + VAR_12,
          VAR_7,
          (u8 *)(&((struct ib_smp *)VAR_11)->data));
  FUNC_5(VAR_6, VAR_8 + VAR_12,
           VAR_7,
           (u8 *)(&((struct ib_smp *)VAR_11)->data));
 }

out:
 FUNC_1(VAR_10);
 FUNC_1(VAR_11);
 return;
}
