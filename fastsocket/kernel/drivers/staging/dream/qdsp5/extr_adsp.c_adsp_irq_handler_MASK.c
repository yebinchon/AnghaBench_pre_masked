
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adsp_info {int event_backlog_max; int events_received; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct adsp_info*) ;
 struct adsp_info VAR_1 ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct adsp_info *VAR_4 = &VAR_1;
 int VAR_5 = 0;
 for (VAR_5 = 0; VAR_5 < 10; VAR_5++)
  if (FUNC_0(VAR_4) < 0)
   break;
 if (VAR_5 > VAR_4->event_backlog_max)
  VAR_4->event_backlog_max = VAR_5;
 VAR_4->events_received += VAR_5;
 if (VAR_5 == 10)
  FUNC_1("adsp: too many (%d) events for single irq!\n", VAR_5);
 return VAR_0;
}
