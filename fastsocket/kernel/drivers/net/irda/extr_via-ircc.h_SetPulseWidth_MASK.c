
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u8 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(__u16 VAR_2, __u8 VAR_3)
{
 __u8 VAR_4, VAR_5, VAR_6;

 VAR_4 = (FUNC_0(VAR_2, VAR_1) & 0x1f);
 VAR_5 = (FUNC_0(VAR_2, VAR_0) & 0xfc);
 VAR_6 = (VAR_3 & 0x07) << 5;
 VAR_4 |= VAR_6;
 VAR_6 = (VAR_3 & 0x18) >> 3;
 VAR_5 |= VAR_6;
 FUNC_1(VAR_2, VAR_1, VAR_4);
 FUNC_1(VAR_2, VAR_0, VAR_5);
}
