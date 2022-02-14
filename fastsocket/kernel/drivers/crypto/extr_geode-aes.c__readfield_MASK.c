
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline void
FUNC_1(u32 VAR_1, void *VAR_2)
{
 int VAR_3;
 for(VAR_3 = 0; VAR_3 < 4; VAR_3++)
  ((u32 *) VAR_2)[VAR_3] = FUNC_0(VAR_0 + VAR_1 + (VAR_3 * 4));
}
