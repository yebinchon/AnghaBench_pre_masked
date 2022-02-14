
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostname {char* name; } ;


 size_t FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(struct hostname *VAR_0)
{
  size_t VAR_1;
  if(!VAR_0 || !VAR_0->name)
    return;
  VAR_1 = FUNC_0(VAR_0->name);
  if(VAR_1 && (VAR_0->name[VAR_1-1] == '.'))
    VAR_0->name[VAR_1-1] = 0;
}
