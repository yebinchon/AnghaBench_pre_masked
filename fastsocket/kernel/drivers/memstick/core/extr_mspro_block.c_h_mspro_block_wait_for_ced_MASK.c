
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memstick_request {int* data; int error; } ;
struct memstick_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct memstick_dev*,int ) ;

__attribute__((used)) static int FUNC_2(struct memstick_dev *VAR_4,
          struct memstick_request **VAR_5)
{
 FUNC_0(&VAR_4->dev, "wait for ced: value %x\n", (*VAR_5)->data[0]);

 if (!(*VAR_5)->error) {
  if ((*VAR_5)->data[0] & (VAR_2 | VAR_3))
   (*VAR_5)->error = -VAR_0;
  else if (!((*VAR_5)->data[0] & VAR_1))
   return 0;
 }

 return FUNC_1(VAR_4, (*VAR_5)->error);
}
