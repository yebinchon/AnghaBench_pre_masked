
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Cookie {scalar_t__ creationtime; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
  struct Cookie *VAR_2 = *(struct Cookie **)VAR_0;
  struct Cookie *VAR_3 = *(struct Cookie **)VAR_1;

  return (VAR_3->creationtime > VAR_2->creationtime) ? 1 : -1;
}
