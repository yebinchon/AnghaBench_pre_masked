
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ (* dmc_func ) (int *,int ) ;int dmc_data; } ;
typedef TYPE_1__ dtrace_match_cond_t ;
struct TYPE_9__ {int dten_ndesc; int dten_error; TYPE_3__* dten_current; TYPE_3__** dten_desc; } ;
typedef TYPE_2__ dtrace_enabling_t ;
struct TYPE_10__ {int dted_probegen; int dted_probe; } ;
typedef TYPE_3__ dtrace_ecbdesc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,void*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,TYPE_2__*,TYPE_3__*) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int *,int ) ;

__attribute__((used)) static int
FUNC_4(dtrace_enabling_t *VAR_6, int *VAR_7, dtrace_match_cond_t *VAR_8)
{
 int VAR_9 = 0;
 int VAR_10 = 0, VAR_11 = 0;

 FUNC_0(&VAR_3, VAR_2);
 FUNC_0(&VAR_4, VAR_2);

 for (VAR_9 = 0; VAR_9 < VAR_6->dten_ndesc; VAR_9++) {
  dtrace_ecbdesc_t *VAR_12 = VAR_6->dten_desc[VAR_9];

  VAR_6->dten_current = VAR_12;
  VAR_6->dten_error = 0;






  if (VAR_8 && (VAR_8->dmc_func(&VAR_12->dted_probe, VAR_8->dmc_data) == 0)) {
   continue;
  }




  if ((VAR_11 = FUNC_2(&VAR_12->dted_probe, VAR_6, VAR_12)) < 0)
   return (VAR_1);

  VAR_10 += VAR_11;

  if (VAR_6->dten_error != 0) {
   if (VAR_7 == ((void*)0)) {
    FUNC_1(VAR_0, "dtrace_enabling_match() "
        "error on %p: %d", (void *)VAR_12,
        VAR_6->dten_error);
   }

   return (VAR_6->dten_error);
  }

  VAR_12->dted_probegen = VAR_5;
 }

 if (VAR_7 != ((void*)0))
  *VAR_7 = VAR_10;

 return (0);
}
