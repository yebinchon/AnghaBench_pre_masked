
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Cookie {scalar_t__ creationtime; scalar_t__ name; scalar_t__ domain; scalar_t__ path; } ;


 size_t FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
  struct Cookie *VAR_2 = *(struct Cookie **)VAR_0;
  struct Cookie *VAR_3 = *(struct Cookie **)VAR_1;
  size_t VAR_4, VAR_5;


  VAR_4 = VAR_2->path ? FUNC_0(VAR_2->path) : 0;
  VAR_5 = VAR_3->path ? FUNC_0(VAR_3->path) : 0;

  if(VAR_4 != VAR_5)
    return (VAR_5 > VAR_4) ? 1 : -1 ;


  VAR_4 = VAR_2->domain ? FUNC_0(VAR_2->domain) : 0;
  VAR_5 = VAR_3->domain ? FUNC_0(VAR_3->domain) : 0;

  if(VAR_4 != VAR_5)
    return (VAR_5 > VAR_4) ? 1 : -1 ;


  VAR_4 = VAR_2->name ? FUNC_0(VAR_2->name) : 0;
  VAR_5 = VAR_3->name ? FUNC_0(VAR_3->name) : 0;

  if(VAR_4 != VAR_5)
    return (VAR_5 > VAR_4) ? 1 : -1;


  return (VAR_3->creationtime > VAR_2->creationtime) ? 1 : -1;
}
