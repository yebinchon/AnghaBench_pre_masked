
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct_device {int variant; } ;


 int FUNC_0 () ;




__attribute__((used)) static inline int FUNC_1(const struct
        ni_gpct_device
        *VAR_0)
{
 switch (VAR_0->variant) {
 case 129:
  return 0;
  break;
 case 128:
 case 130:
  return 1;
  break;
 default:
  FUNC_0();
  break;
 }
 return 0;
}
