
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct bfa_plog_s {scalar_t__ plog_enabled; size_t tail; scalar_t__ head; struct bfa_plog_rec_s* plog_recs; } ;
struct bfa_plog_rec_s {int tv; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct bfa_plog_rec_s*,struct bfa_plog_rec_s*,int) ;
 scalar_t__ FUNC_4 (struct bfa_plog_rec_s*) ;

__attribute__((used)) static void
FUNC_5(struct bfa_plog_s *VAR_0, struct bfa_plog_rec_s *VAR_1)
{
 u16 VAR_2;
 struct bfa_plog_rec_s *VAR_3;

 if (VAR_0->plog_enabled == 0)
  return;

 if (FUNC_4(VAR_1)) {
  FUNC_1(1);
  return;
 }

 VAR_2 = VAR_0->tail;

 VAR_3 = &(VAR_0->plog_recs[VAR_2]);

 FUNC_3(VAR_3, VAR_1, sizeof(struct bfa_plog_rec_s));

 VAR_3->tv = FUNC_2();
 FUNC_0(VAR_0->tail);

 if (VAR_0->head == VAR_0->tail)
  FUNC_0(VAR_0->head);
}
