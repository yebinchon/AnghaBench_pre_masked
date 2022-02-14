
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8_t ;
typedef size_t u16_t ;
struct memp {struct memp* next; } ;
struct TYPE_4__ {TYPE_1__* memp; } ;
struct TYPE_3__ {scalar_t__ avail; scalar_t__ err; scalar_t__ max; scalar_t__ used; } ;


 int FUNC_0 (int *,int,int) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 size_t FUNC_2 (scalar_t__) ;
 TYPE_2__ VAR_1 ;
 int * VAR_2 ;
 scalar_t__* VAR_3 ;
 scalar_t__* VAR_4 ;
 struct memp** VAR_5 ;
 int VAR_6 ;

void
FUNC_3(void)
{
  struct memp *VAR_7, *VAR_8;
  u16_t VAR_9, VAR_10;
  u16_t VAR_11;
  VAR_8 = (struct memp *)&VAR_2[0];
  for(VAR_9 = 0; VAR_9 < VAR_0; ++VAR_9) {
    VAR_11 = FUNC_2(VAR_4[VAR_9] + sizeof(struct memp));
    if (VAR_3[VAR_9] > 0) {
      VAR_5[VAR_9] = VAR_8;
      VAR_7 = VAR_8;

      for(VAR_10 = 0; VAR_10 < VAR_3[VAR_9]; ++VAR_10) {
  VAR_7->next = (struct memp *)FUNC_1((u8_t *)VAR_7 + VAR_11);
  VAR_8 = VAR_7;
  VAR_7 = VAR_7->next;
      }
      VAR_8->next = ((void*)0);
      VAR_8 = VAR_7;
    } else {
      VAR_5[VAR_9] = ((void*)0);
    }
  }


  FUNC_0(&VAR_6,1,1);


}
