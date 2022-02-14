
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s1d13xxxfb_regval {scalar_t__ addr; scalar_t__ value; } ;
struct s1d13xxxfb_par {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct s1d13xxxfb_par*,scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_2(struct s1d13xxxfb_par *VAR_2,
   const struct s1d13xxxfb_regval *VAR_3,
   const unsigned int VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
         if ((VAR_3[VAR_5].addr == VAR_0) ||
    (VAR_3[VAR_5].addr == VAR_1))
   FUNC_0((int)VAR_3[VAR_5].value);
         else {
   FUNC_1(VAR_2, VAR_3[VAR_5].addr, VAR_3[VAR_5].value);
  }
        }


 FUNC_0(1);
}
