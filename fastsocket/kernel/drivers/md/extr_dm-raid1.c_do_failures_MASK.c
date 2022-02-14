
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mirror_set {int rh; scalar_t__ in_sync; int log_failure; } ;
struct bio_list {int head; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio*,int ) ;
 struct bio* FUNC_1 (struct bio_list*) ;
 int FUNC_2 (int ,struct bio*) ;
 scalar_t__ FUNC_3 (struct mirror_set*) ;
 int FUNC_4 (struct mirror_set*) ;
 int FUNC_5 (struct mirror_set*,struct bio*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct mirror_set *VAR_1, struct bio_list *VAR_2)
{
 struct bio *VAR_3;

 if (FUNC_6(!VAR_2->head))
  return;
 while ((VAR_3 = FUNC_1(VAR_2))) {
  if (!VAR_1->log_failure) {
   VAR_1->in_sync = 0;
   FUNC_2(VAR_1->rh, VAR_3);
  }
  if (!FUNC_4(VAR_1))
   FUNC_0(VAR_3, -VAR_0);
  else if (FUNC_3(VAR_1))
   FUNC_5(VAR_1, VAR_3);
  else
   FUNC_0(VAR_3, 0);
 }
}
