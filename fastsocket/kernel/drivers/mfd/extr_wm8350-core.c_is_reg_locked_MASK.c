
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct wm8350 {scalar_t__* reg_cache; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static inline int FUNC_0(struct wm8350 *VAR_6, u8 VAR_7)
{
 if (VAR_7 == VAR_4 ||
     VAR_6->reg_cache[VAR_4] == VAR_5)
  return 0;

 if ((VAR_7 >= VAR_2 &&
      VAR_7 <= VAR_3) ||
     (VAR_7 >= VAR_0 &&
      VAR_7 <= VAR_1))
  return 1;
 return 0;
}
