
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct divert_info {scalar_t__ usage_cnt; struct divert_info* next; int info_start; } ;


 int VAR_0 ;
 struct divert_info* VAR_1 ;
 int VAR_2 ;
 struct divert_info* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct divert_info*) ;
 struct divert_info* FUNC_1 (scalar_t__,int ) ;
 int VAR_5 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (int *) ;

void
FUNC_7(char *VAR_6)
{
 struct divert_info *VAR_7;
 unsigned long VAR_8;

 if (VAR_4 <= 0)
  return;
 if (!VAR_6)
  return;
 if (!*VAR_6)
  return;
 if (!(VAR_7 = FUNC_1(sizeof(struct divert_info) + FUNC_5(VAR_6), VAR_0)))
   return;
 FUNC_4(VAR_7->info_start, VAR_6);
 VAR_7->next = ((void*)0);
 FUNC_2( &VAR_2, VAR_8 );
 VAR_7->usage_cnt = VAR_4;
 if (!VAR_1)
  VAR_1 = VAR_7;
 else
  VAR_3->next = VAR_7;
 VAR_3 = VAR_7;


 while (VAR_1->next) {
  if ((VAR_1->usage_cnt <= 0) &&
      (VAR_1->next->usage_cnt <= 0)) {
   VAR_7 = VAR_1;
   VAR_1 = VAR_1->next;
   FUNC_0(VAR_7);
  } else
   break;
 }
 FUNC_3( &VAR_2, VAR_8 );
 FUNC_6(&(VAR_5));
}
