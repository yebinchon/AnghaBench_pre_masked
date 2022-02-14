
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned int FUNC_0 (int *) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_1 (struct seq_file*,char*,unsigned long,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_6, void *VAR_7)
{
 unsigned long VAR_8;
 unsigned VAR_9[5], VAR_10;

 switch ((unsigned long) VAR_7) {
 case 1:
  FUNC_2(VAR_6, "JIFS  SECS  OBJ INST  OP RUNS   OBJ RUNS "
    " RETRV DLY RETRIEVLS\n");
  return 0;
 case 2:
  FUNC_2(VAR_6, "===== ===== ========= ========= ========="
    " ========= =========\n");
  return 0;
 default:
  VAR_8 = (unsigned long) VAR_7 - 3;
  VAR_9[0] = FUNC_0(&VAR_1[VAR_8]);
  VAR_9[1] = FUNC_0(&VAR_3[VAR_8]);
  VAR_9[2] = FUNC_0(&VAR_2[VAR_8]);
  VAR_9[3] = FUNC_0(&VAR_4[VAR_8]);
  VAR_9[4] = FUNC_0(&VAR_5[VAR_8]);
  if (!(VAR_9[0] | VAR_9[1] | VAR_9[2] | VAR_9[3] | VAR_9[4]))
   return 0;

  VAR_10 = (VAR_8 * 1000) / VAR_0;

  FUNC_1(VAR_6, "%4lu  0.%03u %9u %9u %9u %9u %9u\n",
      VAR_8, VAR_10, VAR_9[0], VAR_9[1], VAR_9[2], VAR_9[3], VAR_9[4]);
  return 0;
 }
}
