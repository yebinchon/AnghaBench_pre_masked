
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct controller {int cmd_busy; int queue; } ;


 int FUNC_0 (struct controller*,char*) ;
 unsigned long FUNC_1 (unsigned int) ;
 int FUNC_2 (struct controller*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ,int,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct controller *VAR_1, int VAR_2)
{
 unsigned int VAR_3 = VAR_0 ? 2500 : 1000;
 unsigned long VAR_4 = FUNC_1(VAR_3);
 int VAR_5;

 if (VAR_2)
  VAR_5 = FUNC_2(VAR_1);
 else
  VAR_5 = FUNC_3(VAR_1->queue, !VAR_1->cmd_busy, VAR_4);
 if (!VAR_5)
  FUNC_0(VAR_1, "Command not completed in 1000 msec\n");
}
