
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lm90_data {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1(struct lm90_data *VAR_1, u8 VAR_2)
{
 if (VAR_1->flags & VAR_0)
  return (VAR_2 - 64) * 1000;
 else
  return FUNC_0(VAR_2);
}
