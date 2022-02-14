
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int dummy; } ;
struct atafb_par {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (void*,void*,int) ;
 int FUNC_2 (void*,void*,int) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(struct fb_info *VAR_3, unsigned int VAR_4, unsigned long VAR_5)
{
 switch (VAR_4) {

 case 129:
  if (FUNC_2((void *)VAR_5, (void *)&VAR_2,
     sizeof(struct atafb_par)))
   return -VAR_0;
  return 0;


 case 128:
  if (FUNC_1((void *)&VAR_2, (void *)VAR_5,
       sizeof(struct atafb_par)))
   return -VAR_0;
  FUNC_0(&VAR_2);
  return 0;

 }
 return -VAR_1;
}
