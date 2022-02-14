
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct linux_binprm {char* buf; char* interp; struct file* file; int argc; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (char*,struct linux_binprm*) ;
 int FUNC_4 (int,char**,struct linux_binprm*) ;
 int FUNC_5 (struct file*) ;
 struct file* FUNC_6 (char*) ;
 int FUNC_7 (struct linux_binprm*) ;
 int FUNC_8 (struct linux_binprm*) ;
 int FUNC_9 (struct linux_binprm*,struct pt_regs*) ;
 char* FUNC_10 (char*,char) ;
 int FUNC_11 (char*,char*) ;

__attribute__((used)) static int FUNC_12(struct linux_binprm *VAR_2,struct pt_regs *VAR_3)
{
 char *VAR_4, *VAR_5, *VAR_6;
 struct file *VAR_7;
 char VAR_8[VAR_0];
 int VAR_9;

 if ((VAR_2->buf[0] != '#') || (VAR_2->buf[1] != '!'))
  return -VAR_1;





 FUNC_2(VAR_2->file);
 FUNC_5(VAR_2->file);
 VAR_2->file = ((void*)0);

 VAR_2->buf[VAR_0 - 1] = '\0';
 if ((VAR_4 = FUNC_10(VAR_2->buf, '\n')) == ((void*)0))
  VAR_4 = VAR_2->buf+VAR_0-1;
 *VAR_4 = '\0';
 while (VAR_4 > VAR_2->buf) {
  VAR_4--;
  if ((*VAR_4 == ' ') || (*VAR_4 == '\t'))
   *VAR_4 = '\0';
  else
   break;
 }
 for (VAR_4 = VAR_2->buf+2; (*VAR_4 == ' ') || (*VAR_4 == '\t'); VAR_4++);
 if (*VAR_4 == '\0')
  return -VAR_1;
 VAR_5 = VAR_4;
 VAR_6 = ((void*)0);
 for ( ; *VAR_4 && (*VAR_4 != ' ') && (*VAR_4 != '\t'); VAR_4++)
                ;
 while ((*VAR_4 == ' ') || (*VAR_4 == '\t'))
  *VAR_4++ = '\0';
 if (*VAR_4)
  VAR_6 = VAR_4;
 FUNC_11 (VAR_8, VAR_5);
 VAR_9 = FUNC_8(VAR_2);
 if (VAR_9)
  return VAR_9;
 VAR_9 = FUNC_4(1, &VAR_2->interp, VAR_2);
 if (VAR_9 < 0) return VAR_9;
 VAR_2->argc++;
 if (VAR_6) {
  VAR_9 = FUNC_4(1, &VAR_6, VAR_2);
  if (VAR_9 < 0) return VAR_9;
  VAR_2->argc++;
 }
 VAR_9 = FUNC_4(1, &VAR_5, VAR_2);
 if (VAR_9) return VAR_9;
 VAR_2->argc++;
 VAR_9 = FUNC_3(VAR_8, VAR_2);
 if (VAR_9 < 0)
  return VAR_9;




 VAR_7 = FUNC_6(VAR_8);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_2->file = VAR_7;
 VAR_9 = FUNC_7(VAR_2);
 if (VAR_9 < 0)
  return VAR_9;
 return FUNC_9(VAR_2,VAR_3);
}
