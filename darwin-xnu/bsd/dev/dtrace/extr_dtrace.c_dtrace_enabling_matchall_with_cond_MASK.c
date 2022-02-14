
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int dtrace_match_cond_t ;
struct TYPE_4__ {struct TYPE_4__* dten_next; } ;
typedef TYPE_1__ dtrace_enabling_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,int *) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(dtrace_match_cond_t *VAR_3)
{
 dtrace_enabling_t *VAR_4;

 FUNC_1(&VAR_0);
 FUNC_1(&VAR_1);
 for (VAR_4 = VAR_2; VAR_4 != ((void*)0); VAR_4 = VAR_4->dten_next) {
  (void) FUNC_0(VAR_4, ((void*)0), VAR_3);
 }

 FUNC_2(&VAR_1);
 FUNC_2(&VAR_0);

}
