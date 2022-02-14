
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int right_setid; int left_setid; } ;
struct waitq_link {TYPE_1__ wql_link; } ;
struct waitq {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct waitq*,int ,struct waitq_link*,struct waitq_link*,struct waitq_link*) ;
 struct waitq_link* FUNC_1 (int ) ;
 int FUNC_2 (struct waitq_link*) ;
 int FUNC_3 (struct waitq_link*) ;
 scalar_t__ FUNC_4 (struct waitq_link*) ;

__attribute__((used)) static int FUNC_5(struct waitq *VAR_3, void *VAR_4,
      struct waitq_link *VAR_5)
{
 uint64_t VAR_6 = *((uint64_t *)VAR_4);
 struct waitq_link *VAR_7, *VAR_8;
 int VAR_9 = 0;

 if (FUNC_4(VAR_5) != VAR_0)
  return VAR_1;

 do {
  VAR_8 = FUNC_1(VAR_5->wql_link.left_setid);
  VAR_7 = FUNC_1(VAR_5->wql_link.right_setid);

  VAR_9 = FUNC_0(VAR_3, VAR_6, VAR_5, VAR_8, VAR_7);

  FUNC_3(VAR_8);
  FUNC_3(VAR_7);

  if (!FUNC_2(VAR_5))
   return VAR_2;

 } while (VAR_9 == VAR_2);

 return VAR_9;
}
