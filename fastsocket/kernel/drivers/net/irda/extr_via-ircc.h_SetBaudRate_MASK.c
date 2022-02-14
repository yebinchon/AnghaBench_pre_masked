
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u8 ;
typedef int __u32 ;
typedef int __u16 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void FUNC_5(__u16 VAR_1, __u32 VAR_2)
{
 __u8 VAR_3 = 11, VAR_4;

 if (FUNC_2(VAR_1)) {
  switch (VAR_2) {
  case (__u32) (2400L):
   VAR_3 = 47;
   break;
  case (__u32) (9600L):
   VAR_3 = 11;
   break;
  case (__u32) (19200L):
   VAR_3 = 5;
   break;
  case (__u32) (38400L):
   VAR_3 = 2;
   break;
  case (__u32) (57600L):
   VAR_3 = 1;
   break;
  case (__u32) (115200L):
   VAR_3 = 0;
   break;
  default:
   break;
  };
 } else if (FUNC_1(VAR_1)) {
  VAR_3 = 0;
 } else if (FUNC_0(VAR_1)) {
  VAR_3 = 0;
 }
 VAR_4 = (FUNC_3(VAR_1, VAR_0) & 0x03);
 VAR_4 |= VAR_3 << 2;
 FUNC_4(VAR_1, VAR_0, VAR_4);
}
