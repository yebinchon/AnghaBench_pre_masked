
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcam_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct qcam_device*) ;

__attribute__((used)) static int FUNC_2(struct qcam_device *VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4=0;

 if (VAR_2)
 {
  while (!((VAR_3 = FUNC_1(VAR_1)) & 8))
  {







   if(VAR_4++>VAR_0)
   {
    FUNC_0(5);
   }
   if(VAR_4>(VAR_0+1000))
    return -1;
  }
 }
 else
 {
  while (((VAR_3 = FUNC_1(VAR_1)) & 8))
  {







   if(VAR_4++>VAR_0)
   {
    FUNC_0(5);
   }
   if(VAR_4++>(VAR_0+1000))
    return -1;
  }
 }

 return VAR_3;
}
