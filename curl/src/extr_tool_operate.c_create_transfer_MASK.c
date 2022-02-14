
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct GlobalConfig {TYPE_1__* current; } ;
struct TYPE_2__ {struct TYPE_2__* next; } ;
typedef int CURLcode ;
typedef int CURLSH ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct GlobalConfig*,TYPE_1__*,int *,int*) ;

__attribute__((used)) static CURLcode FUNC_1(struct GlobalConfig *VAR_2,
                                CURLSH *VAR_3,
                                bool *VAR_4)
{
  CURLcode VAR_5 = VAR_0;
  *VAR_4 = VAR_1;
  while(VAR_2->current) {
    VAR_5 = FUNC_0(VAR_2, VAR_2->current, VAR_3, VAR_4);
    if(!VAR_5 && !*VAR_4) {

      VAR_2->current = VAR_2->current->next;
      continue;
    }
    break;
  }
  return VAR_5;
}
