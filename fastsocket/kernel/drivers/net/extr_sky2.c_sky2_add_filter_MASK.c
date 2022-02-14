
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int ,int const*) ;

__attribute__((used)) static void inline FUNC_1(u8 VAR_1[8], const u8 *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_2) & 63;
 VAR_1[VAR_3 >> 3] |= 1 << (VAR_3 & 7);
}
