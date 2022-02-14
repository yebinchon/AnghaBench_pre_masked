
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_line {char const* file; int lineno; int * next; } ;


 struct file_line* FUNC_0 (int) ;

__attribute__((used)) static struct file_line *FUNC_1(const char *VAR_0, int VAR_1)
{
 struct file_line *VAR_2 = FUNC_0(sizeof(*VAR_2));

 if (VAR_2 == ((void*)0))
  goto out;

 VAR_2->file = VAR_0;
 VAR_2->lineno = VAR_1;
 VAR_2->next = ((void*)0);
out:
 return VAR_2;
}
