
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;


 unsigned long FUNC_0 (unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (struct mm_struct*,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct mm_struct *VAR_3,
     unsigned long VAR_4, unsigned long VAR_5)
{
 int VAR_6 = ((VAR_5 - VAR_4) >> VAR_1);

 if (VAR_6 >= 64 || ((VAR_4 ^ (VAR_5 - 1)) & VAR_2)) {
  FUNC_1();
 } else {

  VAR_4 &= VAR_0;
  VAR_5 = FUNC_0(VAR_5);
  FUNC_2(VAR_3, VAR_4, VAR_5);
 }
}
