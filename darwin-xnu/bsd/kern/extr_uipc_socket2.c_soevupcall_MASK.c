
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct socket {int (* so_event ) (struct socket*,int ,int ) ;int so_eventmask; int so_eventarg; } ;
typedef int caddr_t ;


 int FUNC_0 (struct socket*,int ,int ) ;

void
FUNC_1(struct socket *VAR_0, u_int32_t VAR_1)
{
 if (VAR_0->so_event != ((void*)0)) {
  caddr_t VAR_2 = VAR_0->so_eventarg;

  VAR_1 &= VAR_0->so_eventmask;
  if (VAR_1 != 0)
   VAR_0->so_event(VAR_0, VAR_2, VAR_1);
 }
}
