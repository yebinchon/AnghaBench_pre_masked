
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcam_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (struct qcam_device*) ;

__attribute__((used)) static unsigned int FUNC_2(struct qcam_device *VAR_1, int VAR_2)
{
 unsigned int VAR_3;
 int VAR_4=0;

 do
 {
  VAR_3 = FUNC_1(VAR_1);







  if(VAR_4++>VAR_0)
  {
   FUNC_0(5);
  }
  if(VAR_4++>(VAR_0+1000))
   return 0;
 }
 while ((VAR_3 & 1) != VAR_2);

 return VAR_3;
}
