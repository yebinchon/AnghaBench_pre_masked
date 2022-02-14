
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u8 ;
typedef scalar_t__ __u16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_1 (unsigned char *VAR_2, int VAR_3)
{
  int VAR_4;
  union
  {
    __u16 value;
    __u8 bytes[2];
  }
  VAR_5;

  VAR_5.value = VAR_1;

  for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4)
    VAR_5.value = FUNC_0 (VAR_5.value, *(VAR_2++));

  return (VAR_5.value == VAR_0);
}
