
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {char* name; } ;


 int FUNC_0 (char*,char*) ;

char *FUNC_1(struct tty_struct *VAR_0, char *VAR_1)
{
 if (!VAR_0)
  FUNC_0(VAR_1, "NULL tty");
 else
  FUNC_0(VAR_1, VAR_0->name);
 return VAR_1;
}
