
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int FUNC_0 (int const*) ;

__attribute__((used)) static inline unsigned long FUNC_1(const unsigned long *VAR_0)
{
 const u16 *VAR_1 = (u16 *) VAR_0;
 u16 VAR_2 = FUNC_0(VAR_1);
 u16 VAR_3 = FUNC_0(VAR_1 + 1);

 return (VAR_3 << 16) | VAR_2;
}
