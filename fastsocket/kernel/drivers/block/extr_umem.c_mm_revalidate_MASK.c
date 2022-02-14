
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {struct cardinfo* private_data; } ;
struct cardinfo {int mm_size; } ;


 int FUNC_0 (struct gendisk*,int) ;

__attribute__((used)) static int FUNC_1(struct gendisk *VAR_0)
{
 struct cardinfo *VAR_1 = VAR_0->private_data;
 FUNC_0(VAR_0, VAR_1->mm_size << 1);
 return 0;
}
