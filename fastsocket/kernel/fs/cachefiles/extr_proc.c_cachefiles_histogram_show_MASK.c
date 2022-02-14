
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
 int FUNC_1 (struct seq_file*,char*,unsigned long,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_4, void *VAR_5)
{
 unsigned long VAR_6;
 unsigned VAR_7, VAR_8, VAR_9, VAR_10;

 switch ((unsigned long) VAR_5) {
 case 1:
  FUNC_2(VAR_4, "JIFS  SECS  LOOKUPS   MKDIRS    CREATES\n");
  return 0;
 case 2:
  FUNC_2(VAR_4, "===== ===== ========= ========= =========\n");
  return 0;
 default:
  VAR_6 = (unsigned long) VAR_5 - 3;
  VAR_7 = FUNC_0(&VAR_2[VAR_6]);
  VAR_8 = FUNC_0(&VAR_3[VAR_6]);
  VAR_9 = FUNC_0(&VAR_1[VAR_6]);
  if (VAR_7 == 0 && VAR_8 == 0 && VAR_9 == 0)
   return 0;

  VAR_10 = (VAR_6 * 1000) / VAR_0;

  FUNC_1(VAR_4, "%4lu  0.%03u %9u %9u %9u\n", VAR_6, VAR_10, VAR_7, VAR_8, VAR_9);
  return 0;
 }
}
