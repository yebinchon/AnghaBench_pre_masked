
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uthread {int uu_flag; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void
FUNC_0(struct uthread *VAR_2, int VAR_3)
{
 if (VAR_3 == VAR_0) {
  VAR_2->uu_flag |= VAR_1;
 } else {
  VAR_2->uu_flag &= ~VAR_1;
 }
}
