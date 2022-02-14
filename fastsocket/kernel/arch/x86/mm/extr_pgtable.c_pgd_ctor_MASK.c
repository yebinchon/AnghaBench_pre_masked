
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pgd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int,int,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct mm_struct*) ;
 int * VAR_5 ;

__attribute__((used)) static void FUNC_5(struct mm_struct *VAR_6, pgd_t *VAR_7)
{



 if (VAR_2 == 2 ||
     (VAR_2 == 3 && VAR_4) ||
     VAR_2 == 4) {
  FUNC_1(VAR_7 + VAR_0,
    VAR_5 + VAR_0,
    VAR_1);
  FUNC_2(FUNC_0(VAR_7) >> VAR_3,
      FUNC_0(VAR_5) >> VAR_3,
      VAR_0,
      VAR_1);
 }


 if (!VAR_4) {
  FUNC_4(VAR_7, VAR_6);
  FUNC_3(VAR_7);
 }
}
