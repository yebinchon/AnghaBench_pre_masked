
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct pg_state {void* current_address; } ;
typedef int st ;
typedef int pgprotval_t ;
typedef int pgd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (struct pg_state*,int ,int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct seq_file*,struct pg_state*,int ,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int * VAR_4 ;
 int FUNC_8 (struct seq_file*,struct pg_state*,int ,int) ;

__attribute__((used)) static void FUNC_9(struct seq_file *VAR_5)
{



 pgd_t *VAR_6 = VAR_4;

 int VAR_7;
 struct pg_state VAR_8;

 FUNC_1(&VAR_8, 0, sizeof(VAR_8));

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_8.current_address = FUNC_2(VAR_7 * VAR_0);
  if (!FUNC_5(*VAR_6)) {
   pgprotval_t VAR_9 = FUNC_7(*VAR_6) & VAR_1;

   if (FUNC_4(*VAR_6) || !FUNC_6(*VAR_6))
    FUNC_3(VAR_5, &VAR_8, FUNC_0(VAR_9), 1);
   else
    FUNC_8(VAR_5, &VAR_8, *VAR_6,
            VAR_7 * VAR_0);
  } else
   FUNC_3(VAR_5, &VAR_8, FUNC_0(0), 1);

  VAR_6++;
 }


 VAR_8.current_address = FUNC_2(VAR_2*VAR_0);
 FUNC_3(VAR_5, &VAR_8, FUNC_0(0), 0);
}
