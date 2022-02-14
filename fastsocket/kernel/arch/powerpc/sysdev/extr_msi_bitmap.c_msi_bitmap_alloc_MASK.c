
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msi_bitmap {unsigned int irq_count; int of_node; int lock; int bitmap; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct device_node*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int ) ;

int FUNC_5(struct msi_bitmap *VAR_3, unsigned int VAR_4,
       struct device_node *VAR_5)
{
 int VAR_6;

 if (!VAR_4)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_4) * sizeof(long);
 FUNC_2("msi_bitmap: allocator bitmap size is 0x%x bytes\n", VAR_6);

 VAR_3->bitmap = FUNC_4(VAR_6, VAR_2);
 if (!VAR_3->bitmap) {
  FUNC_2("msi_bitmap: ENOMEM allocating allocator bitmap!\n");
  return -VAR_1;
 }


 FUNC_3(&VAR_3->lock);
 VAR_3->of_node = FUNC_1(VAR_5);
 VAR_3->irq_count = VAR_4;

 return 0;
}
