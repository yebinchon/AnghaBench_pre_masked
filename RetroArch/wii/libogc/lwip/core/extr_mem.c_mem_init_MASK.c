
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mem {size_t next; size_t prev; int used; } ;
struct TYPE_3__ {size_t avail; } ;
struct TYPE_4__ {TYPE_1__ mem; } ;


 int FUNC_0 (int *,int,int) ;
 size_t VAR_0 ;
 struct mem* VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,size_t) ;
 int * VAR_4 ;
 struct mem* VAR_5 ;

void
FUNC_2(void)
{
  struct mem *VAR_6;

  FUNC_1(VAR_4, 0, VAR_0);
  VAR_6 = (struct mem *)VAR_4;
  VAR_6->next = VAR_0;
  VAR_6->prev = 0;
  VAR_6->used = 0;
  VAR_5 = (struct mem *)&VAR_4[VAR_0];
  VAR_5->used = 1;
  VAR_5->next = VAR_0;
  VAR_5->prev = VAR_0;

  FUNC_0(&VAR_3,1,1);

  VAR_1 = (struct mem *)VAR_4;




}
