
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u32 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(__u16 VAR_2, __u32 VAR_3)
{
 __u32 VAR_4, VAR_5;

 if ((VAR_3 & 0xf000) == 0) {
  VAR_4 = VAR_3 & 0x00ff;
  VAR_5 = (VAR_3 & 0x0f00) >> 8;
  FUNC_0(VAR_2, VAR_1, VAR_4);
  FUNC_0(VAR_2, VAR_0, VAR_5);
 }
}
