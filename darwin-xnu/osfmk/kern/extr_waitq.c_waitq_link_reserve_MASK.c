
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int id; } ;
struct waitq_link {TYPE_1__ wql_setid; } ;
struct waitq {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 struct waitq_link* FUNC_4 (int ) ;
 int FUNC_5 () ;

uint64_t FUNC_6(struct waitq *VAR_1)
{
 struct waitq_link *VAR_2;
 uint64_t VAR_3 = 0;

 FUNC_0(FUNC_2() == 0 && FUNC_3(FUNC_1()));





 FUNC_5();

 (void)VAR_1;
 VAR_2 = FUNC_4(VAR_0);
 if (!VAR_2)
  return 0;

 VAR_3 = VAR_2->wql_setid.id;

 return VAR_3;
}
