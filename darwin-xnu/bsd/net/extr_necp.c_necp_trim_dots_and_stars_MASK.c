
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct substring {char* string; size_t length; } ;



__attribute__((used)) static struct substring
FUNC_0(char *VAR_0, size_t VAR_1)
{
 struct substring VAR_2;
 VAR_2.string = VAR_0;
 VAR_2.length = VAR_0 ? VAR_1 : 0;

 while (VAR_2.length && (VAR_2.string[0] == '.' || VAR_2.string[0] == '*')) {
  VAR_2.string++;
  VAR_2.length--;
 }

 while (VAR_2.length && (VAR_2.string[VAR_2.length - 1] == '.' || VAR_2.string[VAR_2.length - 1] == '*')) {
  VAR_2.length--;
 }

 return (VAR_2);
}
