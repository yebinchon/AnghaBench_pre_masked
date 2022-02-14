
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8_t ;
struct memp {struct memp* next; } ;
typedef size_t memp_t ;
struct TYPE_4__ {TYPE_1__* memp; } ;
struct TYPE_3__ {int used; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 TYPE_2__ VAR_0 ;
 int FUNC_6 () ;
 struct memp** VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_7(memp_t VAR_4, void *VAR_5)
{
  struct memp *VAR_6;




  if (VAR_5 == ((void*)0)) {
    return;
  }
  VAR_6 = (struct memp *)((u8_t *)VAR_5 - sizeof(struct memp));




  FUNC_2(VAR_2);






  VAR_6->next = VAR_1[VAR_4];
  VAR_1[VAR_4] = VAR_6;
    FUNC_1(VAR_2);

}
