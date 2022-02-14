
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct ifnet {int (* if_output ) (struct ifnet*,struct mbuf*) ;} ;
typedef int errno_t ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;

errno_t
FUNC_1(struct ifnet *VAR_0, struct mbuf *VAR_1)
{
 return (VAR_0->if_output(VAR_0, VAR_1));
}
