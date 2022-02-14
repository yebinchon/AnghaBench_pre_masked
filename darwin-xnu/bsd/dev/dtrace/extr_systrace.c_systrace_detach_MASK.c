
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dev_info_t ;
typedef int ddi_detach_cmd_t ;



 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_2(dev_info_t *VAR_5, ddi_detach_cmd_t VAR_6)
{
 switch (VAR_6) {
 case 129:
  break;
 case 128:
  return (VAR_1);
 default:
  return (VAR_0);
 }

 if (FUNC_1(VAR_2) != 0)
  return (VAR_0);

 FUNC_0(VAR_5, ((void*)0));
 VAR_3 = VAR_4;
 return (VAR_1);
}
