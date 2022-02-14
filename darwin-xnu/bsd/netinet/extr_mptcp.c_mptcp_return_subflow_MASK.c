
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mptsub {int mpts_socket; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static struct mptsub *
FUNC_1(struct mptsub *VAR_0)
{
 if (VAR_0 && FUNC_0(VAR_0->mpts_socket) <= 0)
  return (((void*)0));

 return (VAR_0);
}
