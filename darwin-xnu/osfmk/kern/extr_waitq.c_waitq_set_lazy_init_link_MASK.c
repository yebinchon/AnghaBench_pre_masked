
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct waitq_set {scalar_t__ wqset_id; } ;
struct TYPE_4__ {scalar_t__ id; } ;
struct TYPE_3__ {struct waitq_set* wql_set; } ;
struct waitq_link {TYPE_2__ wql_setid; TYPE_1__ wql_wqs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*,struct waitq_set*) ;
 int FUNC_4 (struct waitq_set*) ;
 scalar_t__ FUNC_5 (struct waitq_set*) ;
 int FUNC_6 (struct waitq_set*) ;
 scalar_t__ FUNC_7 (int ) ;
 struct waitq_link* FUNC_8 (int ) ;
 int FUNC_9 (struct waitq_link*) ;
 int FUNC_10 (struct waitq_link*) ;

void
FUNC_11(struct waitq_set *VAR_2)
{
 struct waitq_link *VAR_3;

 FUNC_0(FUNC_2() == 0 && FUNC_7(FUNC_1()));

 FUNC_4(VAR_2);
 if (!FUNC_5(VAR_2)){
  FUNC_6(VAR_2);
  return;
 }

 FUNC_0(VAR_2->wqset_id == VAR_1);
 FUNC_6(VAR_2);

 VAR_3 = FUNC_8(VAR_0);
 if (!VAR_3)
  FUNC_3("Can't allocate link object for waitq set: %p", VAR_2);

 VAR_3->wql_wqs.wql_set = VAR_2;

 FUNC_4(VAR_2);
 if (FUNC_5(VAR_2)) {
  FUNC_9(VAR_3);
  VAR_2->wqset_id = VAR_3->wql_setid.id;
 }

 FUNC_0(VAR_2->wqset_id != 0);
 FUNC_0(VAR_2->wqset_id != VAR_1);

 FUNC_6(VAR_2);

 FUNC_10(VAR_3);

 return;
}
