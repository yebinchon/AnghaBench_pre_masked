
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lockf {scalar_t__ lf_id; scalar_t__ lf_type; int lf_end; int lf_start; struct lockf* lf_next; struct lockf** lf_head; } ;


 int FUNC_0 (struct lockf*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 struct lockf* VAR_2 ;
 int FUNC_2 (struct lockf*,struct lockf*) ;

__attribute__((used)) static void
FUNC_3(struct lockf *VAR_3)
{
 struct lockf **VAR_4 = VAR_3->lf_head;

 while (*VAR_4 != VAR_2) {

  if ((*VAR_4 == VAR_3) ||
      ((*VAR_4)->lf_id != VAR_3->lf_id) ||
      ((*VAR_4)->lf_type != VAR_3->lf_type)) {
   VAR_4 = &(*VAR_4)->lf_next;
   continue;
  }





  if ((*VAR_4)->lf_end != -1 &&
      ((*VAR_4)->lf_end + 1) == VAR_3->lf_start) {
   struct lockf *VAR_5 = *VAR_4;

   FUNC_1(VAR_0, "lf_coalesce_adjacent: coalesce adjacent previous\n");
   VAR_3->lf_start = (*VAR_4)->lf_start;
   *VAR_4 = VAR_3;
   VAR_4 = &(*VAR_4)->lf_next;

   FUNC_2(VAR_3, VAR_5);

   FUNC_0(VAR_5, VAR_1);
   continue;
  }

  if (VAR_3->lf_end != -1 &&
      (VAR_3->lf_end + 1) == (*VAR_4)->lf_start) {
   struct lockf *VAR_6 = *VAR_4;

   FUNC_1(VAR_0, "lf_coalesce_adjacent: coalesce adjacent following\n");
   VAR_3->lf_end = (*VAR_4)->lf_end;
   VAR_3->lf_next = (*VAR_4)->lf_next;
   VAR_4 = &VAR_3->lf_next;

   FUNC_2(VAR_3, VAR_6);

   FUNC_0(VAR_6, VAR_1);
   continue;
  }


  VAR_4 = &(*VAR_4)->lf_next;
 }
}
