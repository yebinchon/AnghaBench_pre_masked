
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void (* function ) (unsigned long) ;unsigned long data; scalar_t__ expires; } ;
struct line6_dump_request {TYPE_1__ timer; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;

void FUNC_1(struct line6_dump_request *VAR_2, int VAR_3,
      void (*VAR_4)(unsigned long), void *VAR_5)
{
 VAR_2->timer.expires = VAR_1 + VAR_3 * VAR_0;
 VAR_2->timer.function = VAR_4;
 VAR_2->timer.data = (unsigned long)VAR_5;
 FUNC_0(&VAR_2->timer);
}
