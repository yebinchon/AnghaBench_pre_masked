
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct manager {int options; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int
FUNC_2(struct manager *VAR_3, void *VAR_4)
{

 int *VAR_5 = (int *)VAR_4;
 int VAR_6 = 0;

 switch (VAR_5[0]) {
 case 129:
  if (VAR_5[1])
   FUNC_1(VAR_2, &VAR_3->options);
  else
   FUNC_0(VAR_2, &VAR_3->options);
  break;
 case 128:
  if (VAR_5[1])
   FUNC_1(VAR_1, &VAR_3->options);
  else
   FUNC_0(VAR_1, &VAR_3->options);
  break;
 default:
  VAR_6 = -VAR_0;
 }
 return VAR_6;
}
