
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {unsigned int len; char* name; } ;



__attribute__((used)) static unsigned int FUNC_0(struct qstr *VAR_0)
{
 unsigned int VAR_1 = VAR_0->len;

 while (VAR_1 && VAR_0->name[VAR_1 - 1] == '.')
  VAR_1--;
 return VAR_1;
}
