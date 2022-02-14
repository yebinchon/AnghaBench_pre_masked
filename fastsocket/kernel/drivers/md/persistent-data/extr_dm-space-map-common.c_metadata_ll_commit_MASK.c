
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ll_disk {int tm; int bitmap_root; int mi_le; } ;
struct dm_block {int dummy; } ;


 int FUNC_0 (struct dm_block*) ;
 int FUNC_1 (struct dm_block*) ;
 int FUNC_2 (int ,int ,int *,struct dm_block**,int*) ;
 int FUNC_3 (int ,struct dm_block*) ;
 int VAR_0 ;
 int FUNC_4 (int ,int *,int) ;

__attribute__((used)) static int FUNC_5(struct ll_disk *VAR_1)
{
 int VAR_2, VAR_3;
 struct dm_block *VAR_4;

 VAR_2 = FUNC_2(VAR_1->tm, VAR_1->bitmap_root, &VAR_0, &VAR_4, &VAR_3);
 if (VAR_2)
  return VAR_2;

 FUNC_4(FUNC_0(VAR_4), &VAR_1->mi_le, sizeof(VAR_1->mi_le));
 VAR_1->bitmap_root = FUNC_1(VAR_4);

 return FUNC_3(VAR_1->tm, VAR_4);
}
