
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct FormInfo {int dummy; } ;
struct TYPE_5__ {char* value; char* contenttype; struct TYPE_5__* more; int flags; } ;
typedef TYPE_1__ FormInfo ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int) ;

__attribute__((used)) static FormInfo * FUNC_1(char *VAR_1,
                              char *VAR_2,
                              FormInfo *VAR_3)
{
  FormInfo *VAR_4;
  VAR_4 = FUNC_0(1, sizeof(struct FormInfo));
  if(VAR_4) {
    if(VAR_1)
      VAR_4->value = VAR_1;
    if(VAR_2)
      VAR_4->contenttype = VAR_2;
    VAR_4->flags = VAR_0;
  }
  else
    return ((void*)0);

  if(VAR_3) {

    VAR_4->more = VAR_3->more;


    VAR_3->more = VAR_4;
  }

  return VAR_4;
}
