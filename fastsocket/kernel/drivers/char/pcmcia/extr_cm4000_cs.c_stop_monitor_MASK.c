
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cm4000_dev {int flags; scalar_t__ monitor_running; } ;


 int FUNC_0 (int,struct cm4000_dev*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct cm4000_dev*) ;

__attribute__((used)) static void FUNC_3(struct cm4000_dev *VAR_2)
{
 FUNC_0(3, VAR_2, "-> stop_monitor\n");
 if (VAR_2->monitor_running) {
  FUNC_0(5, VAR_2, "stopping monitor\n");
  FUNC_2(VAR_2);

  FUNC_1(VAR_1, &VAR_2->flags);
  FUNC_1(VAR_0, &VAR_2->flags);
 } else
  FUNC_0(5, VAR_2, "monitor already stopped\n");
 FUNC_0(3, VAR_2, "<- stop_monitor\n");
}
