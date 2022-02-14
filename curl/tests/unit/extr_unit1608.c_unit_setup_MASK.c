
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct TYPE_2__* ai_next; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static CURLcode FUNC_0(void)
{
  int VAR_3;
  for(VAR_3 = 0; VAR_3 < VAR_1 - 1; VAR_3++) {
    VAR_2[VAR_3].ai_next = &VAR_2[VAR_3 + 1];
  }

  return VAR_0;
}
