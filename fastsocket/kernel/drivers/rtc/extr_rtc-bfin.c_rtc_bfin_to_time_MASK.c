
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline unsigned long FUNC_0(u32 VAR_4)
{
 return (((VAR_4 >> VAR_3) & 0x003F)) +
        (((VAR_4 >> VAR_2) & 0x003F) * 60) +
        (((VAR_4 >> VAR_1) & 0x001F) * 60 * 60) +
        (((VAR_4 >> VAR_0) & 0x7FFF) * 60 * 60 * 24);
}
