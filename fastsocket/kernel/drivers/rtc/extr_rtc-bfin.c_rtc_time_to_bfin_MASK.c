
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline u32 FUNC_0(unsigned long VAR_4)
{
 u32 VAR_5 = (VAR_4 % 60);
 u32 VAR_6 = (VAR_4 % (60 * 60)) / 60;
 u32 VAR_7 = (VAR_4 % (60 * 60 * 24)) / (60 * 60);
 u32 VAR_8 = (VAR_4 / (60 * 60 * 24));
 return (VAR_5 << VAR_3) +
        (VAR_6 << VAR_2) +
        (VAR_7 << VAR_1) +
        (VAR_8 << VAR_0);
}
