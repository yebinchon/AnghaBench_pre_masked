
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpa_event {int event_size; } ;
struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,char) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct tcpa_event *VAR_2 = VAR_1;
 char *VAR_3 = VAR_1;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < sizeof(struct tcpa_event) + VAR_2->event_size; VAR_4++)
  FUNC_0(VAR_0, VAR_3[VAR_4]);

 return 0;
}
