
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_3__ {scalar_t__ MonitoringAlertMode; } ;
typedef TYPE_1__ DAC960_Controller_T ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int FUNC_0 (struct seq_file*,unsigned char*) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_2, void *VAR_3)
{
  unsigned char *VAR_4 = "OK\n";
  int VAR_5;
  for (VAR_5 = 0;
       VAR_5 < VAR_0;
       VAR_5++)
    {
      DAC960_Controller_T *VAR_6 = VAR_1[VAR_5];
      if (VAR_6 == ((void*)0)) continue;
      if (VAR_6->MonitoringAlertMode)
 {
   VAR_4 = "ALERT\n";
   break;
 }
    }
  FUNC_0(VAR_2, VAR_4);
  return 0;
}
