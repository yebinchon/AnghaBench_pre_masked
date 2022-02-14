
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int16_t ;
struct inpcb {TYPE_1__* inp_socket; struct ifnet* inp_last_outifp; } ;
struct ifnet {int dummy; } ;
struct TYPE_2__ {int so_flags1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ifnet*) ;

__attribute__((used)) static u_int16_t
FUNC_1(
 const struct inpcb *VAR_4)
{
 u_int16_t VAR_5 = 0;

 if ((VAR_4 != ((void*)0) ) && (VAR_4->inp_last_outifp != ((void*)0)))
 {
  struct ifnet *VAR_6 = VAR_4->inp_last_outifp;
  VAR_5 = FUNC_0(VAR_6);

  if (VAR_5 & VAR_0)
  {
   if (VAR_4->inp_socket != ((void*)0) &&
       (VAR_4->inp_socket->so_flags1 & VAR_3))
    VAR_5 |= VAR_2;
  }
 }
 else
 {
  VAR_5 = VAR_1;
 }

 return VAR_5;
}
