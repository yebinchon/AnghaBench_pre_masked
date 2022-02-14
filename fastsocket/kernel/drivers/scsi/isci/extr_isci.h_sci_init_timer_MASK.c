
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void (* function ) (unsigned long) ;unsigned long data; } ;
struct sci_timer {TYPE_1__ timer; scalar_t__ cancel; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline
void FUNC_1(struct sci_timer *VAR_0, void (*VAR_1)(unsigned long))
{
 VAR_0->timer.function = VAR_1;
 VAR_0->timer.data = (unsigned long) VAR_0;
 VAR_0->cancel = 0;
 FUNC_0(&VAR_0->timer);
}
