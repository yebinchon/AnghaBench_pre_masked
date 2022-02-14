
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int wql_set; } ;
struct waitq_link {TYPE_1__ wql_wqs; } ;
struct waitq {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct waitq_link*) ;

__attribute__((used)) static int FUNC_2(struct waitq *VAR_2, void *VAR_3,
        struct waitq_link *VAR_4)
{
 uint32_t *VAR_5 = (uint32_t *)VAR_3;
 (void)VAR_2;






 if (FUNC_1(VAR_4) == VAR_0) {




  if (FUNC_0(VAR_4->wql_wqs.wql_set))
   *VAR_5 += 2;
 }
 return VAR_1;
}
