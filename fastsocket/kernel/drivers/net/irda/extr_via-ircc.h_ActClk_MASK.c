
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u8 ;
typedef int __u16 ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static void FUNC_2(__u16 VAR_1, __u8 VAR_2)
{
 __u8 VAR_3;
 VAR_3 = FUNC_0(VAR_1, 0x34);
 if (VAR_2)
  FUNC_1(VAR_1, 0x34, VAR_3 | VAR_0);
 else
  FUNC_1(VAR_1, 0x34, VAR_3 & ~VAR_0);
}
