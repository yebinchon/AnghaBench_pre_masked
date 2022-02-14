
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,size_t) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (size_t,int ) ;
 int FUNC_4 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_5(struct seq_file *VAR_4)
{
 char *VAR_5;
 size_t VAR_6;
 int VAR_7;

 for (VAR_6 = VAR_1; VAR_6 < 16 * VAR_1; VAR_6 += VAR_1) {
  if (!(VAR_5 = FUNC_3(VAR_6, VAR_0)))
   break;
  VAR_7 = FUNC_1(FUNC_0(VAR_5), VAR_6);
  if (VAR_7 == VAR_3)
   FUNC_4(VAR_4, VAR_5);
  FUNC_2(VAR_5);
  if (VAR_7 == VAR_3 || VAR_7 == VAR_2)
   break;
 }
}
