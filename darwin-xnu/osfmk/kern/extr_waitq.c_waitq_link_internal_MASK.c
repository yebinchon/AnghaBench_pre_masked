
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {scalar_t__ id; } ;
struct TYPE_3__ {scalar_t__ right_setid; scalar_t__ left_setid; } ;
struct waitq_link {TYPE_2__ wql_setid; TYPE_1__ wql_link; } ;
struct waitq {scalar_t__ waitq_set_id; } ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct waitq*) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ,struct waitq*,scalar_t__,int ,void*,int ) ;
 struct waitq_link* FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct waitq_link*) ;
 int FUNC_5 (struct waitq_link*) ;

__attribute__((used)) static kern_return_t FUNC_6(struct waitq *VAR_7,
      uint64_t VAR_8, struct waitq_link *VAR_9)
{
 struct waitq_link *VAR_10;
 kern_return_t VAR_11;

 FUNC_0(FUNC_1(VAR_7));
 FUNC_0(VAR_8 != 0);
 FUNC_0(VAR_8 != VAR_4);






 if (!VAR_7->waitq_set_id) {
  VAR_7->waitq_set_id = VAR_8;
  return VAR_1;
 }

 VAR_10 = FUNC_3(VAR_7->waitq_set_id);
 if (!VAR_10) {




  VAR_7->waitq_set_id = VAR_8;
  return VAR_1;
 }
 FUNC_5(VAR_10);






 VAR_11 = FUNC_2(VAR_2, VAR_7, VAR_7->waitq_set_id,
         VAR_3, (void *)&VAR_8, VAR_6);
 if (VAR_11 == VAR_5)
  return VAR_0;
 VAR_9->wql_link.left_setid = VAR_8;
 VAR_9->wql_link.right_setid = VAR_7->waitq_set_id;
 FUNC_4(VAR_9);

 VAR_7->waitq_set_id = VAR_9->wql_setid.id;

 return VAR_1;
}
