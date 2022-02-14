
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {struct file_line* files; } ;
struct file_line {struct file_line* next; } ;


 struct file_line* FUNC_0 (char const*,int) ;

__attribute__((used)) static int FUNC_1(struct message *VAR_0, const char *VAR_1,
      int VAR_2)
{
 int VAR_3 = -1;
 struct file_line *VAR_4 = FUNC_0(VAR_1, VAR_2);

 if (VAR_4 == ((void*)0))
  goto out;

 VAR_4->next = VAR_0->files;
 VAR_0->files = VAR_4;
 VAR_3 = 0;
out:
 return VAR_3;
}
