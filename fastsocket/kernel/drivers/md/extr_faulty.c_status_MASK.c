
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct mddev {struct faulty_conf* private; } ;
struct faulty_conf {int nfaults; int * counters; int * period; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct seq_file*,char*,...) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_6, struct mddev *VAR_7)
{
 struct faulty_conf *VAR_8 = VAR_7->private;
 int VAR_9;

 if ((VAR_9=FUNC_0(&VAR_8->counters[VAR_5])) != 0)
  FUNC_1(VAR_6, " WriteTransient=%d(%d)",
      VAR_9, VAR_8->period[VAR_5]);

 if ((VAR_9=FUNC_0(&VAR_8->counters[VAR_2])) != 0)
  FUNC_1(VAR_6, " ReadTransient=%d(%d)",
      VAR_9, VAR_8->period[VAR_2]);

 if ((VAR_9=FUNC_0(&VAR_8->counters[VAR_4])) != 0)
  FUNC_1(VAR_6, " WritePersistent=%d(%d)",
      VAR_9, VAR_8->period[VAR_4]);

 if ((VAR_9=FUNC_0(&VAR_8->counters[VAR_1])) != 0)
  FUNC_1(VAR_6, " ReadPersistent=%d(%d)",
      VAR_9, VAR_8->period[VAR_1]);


 if ((VAR_9=FUNC_0(&VAR_8->counters[VAR_0])) != 0)
  FUNC_1(VAR_6, " ReadFixable=%d(%d)",
      VAR_9, VAR_8->period[VAR_0]);

 if ((VAR_9=FUNC_0(&VAR_8->counters[VAR_3])) != 0)
  FUNC_1(VAR_6, " WriteAll");

 FUNC_1(VAR_6, " nfaults=%d", VAR_8->nfaults);
}
