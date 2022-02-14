
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msi_bitmap {int lock; int irq_count; int bitmap; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int,int,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct msi_bitmap *VAR_0, int VAR_1)
{
 unsigned long VAR_2;
 int VAR_3, VAR_4 = FUNC_1(VAR_1);

 FUNC_3(&VAR_0->lock, VAR_2);




 VAR_3 = FUNC_0(VAR_0->bitmap, VAR_0->irq_count, VAR_4);
 FUNC_4(&VAR_0->lock, VAR_2);

 FUNC_2("msi_bitmap: allocated 0x%x (2^%d) at offset 0x%x\n",
   VAR_1, VAR_4, VAR_3);

 return VAR_3;
}
