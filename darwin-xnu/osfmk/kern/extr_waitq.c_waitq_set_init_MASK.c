
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_6__ {int waitq_prepost; int waitq_type; } ;
struct waitq_set {int wqset_id; void* wqset_prepost_hook; TYPE_3__ wqset_q; scalar_t__ wqset_prepost_id; } ;
struct TYPE_5__ {int id; } ;
struct TYPE_4__ {struct waitq_set* wql_set; } ;
struct waitq_link {TYPE_2__ wql_setid; TYPE_1__ wql_wqs; } ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct waitq_set*,int ,int) ;
 int FUNC_2 (char*,struct waitq_set*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int) ;
 struct waitq_link* FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (struct waitq_link*) ;
 int FUNC_6 (struct waitq_link*) ;

kern_return_t FUNC_7(struct waitq_set *VAR_5,
        int VAR_6, uint64_t *VAR_7,
        void *VAR_8)
{
 struct waitq_link *VAR_9;
 kern_return_t VAR_10;

 FUNC_1(VAR_5, 0, sizeof(*VAR_5));

 VAR_10 = FUNC_3(&VAR_5->wqset_q, VAR_6);
 if (VAR_10 != VAR_0)
  return VAR_10;

 VAR_5->wqset_q.waitq_type = VAR_4;
 if (VAR_6 & VAR_1) {
  VAR_5->wqset_q.waitq_prepost = 1;
  VAR_5->wqset_prepost_id = 0;
  FUNC_0(VAR_8 == ((void*)0));
 } else {
  VAR_5->wqset_q.waitq_prepost = 0;
  VAR_5->wqset_prepost_hook = VAR_8;
 }

 if (VAR_7 && *VAR_7 != 0) {
  VAR_9 = FUNC_4(*VAR_7, VAR_2);

  if (!VAR_9)
   FUNC_2("Can't allocate link object for waitq set: %p", VAR_5);


  *VAR_7 = 0;

  VAR_9->wql_wqs.wql_set = VAR_5;
  FUNC_5(VAR_9);

  VAR_5->wqset_id = VAR_9->wql_setid.id;
  FUNC_6(VAR_9);

 } else {



  VAR_5->wqset_id = VAR_3;
 }

 return VAR_0;
}
