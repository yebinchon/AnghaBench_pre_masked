
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ stsy_underlying; int stsy_return_type; } ;
typedef TYPE_1__ systrace_sysent_t ;
struct sysent {scalar_t__ sy_callc; int sy_return_type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sysent*) ;
 int FUNC_1 (struct sysent*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct sysent *VAR_6, systrace_sysent_t **VAR_7)
{

 systrace_sysent_t *VAR_8 = *VAR_7;

 unsigned int VAR_9;

 if (VAR_8 == ((void*)0)) {
  *VAR_7 = VAR_8 = FUNC_2(sizeof (systrace_sysent_t) *
      VAR_1, VAR_0);
 }

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  struct sysent *VAR_10 = &VAR_6[VAR_9];
  systrace_sysent_t *VAR_11 = &VAR_8[VAR_9];

  if (FUNC_0(VAR_10) && !FUNC_1(VAR_10))
   continue;

  if (VAR_10->sy_callc == VAR_5)
   continue;

  VAR_11->stsy_underlying = VAR_10->sy_callc;
  VAR_11->stsy_return_type = VAR_10->sy_return_type;
 }
 FUNC_3(&VAR_4, VAR_3, VAR_2);
}
