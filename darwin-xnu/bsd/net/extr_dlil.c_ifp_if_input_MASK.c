
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct mbuf {int dummy; } ;
struct ifnet_stat_increment_param {int dummy; } ;
struct ifnet {int dummy; } ;
typedef int errno_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (struct mbuf*) ;

__attribute__((used)) static errno_t
FUNC_1(struct ifnet *VAR_1, struct mbuf *VAR_2,
    struct mbuf *VAR_3, const struct ifnet_stat_increment_param *VAR_4,
    boolean_t VAR_5, struct thread *VAR_6)
{
#pragma unused(ifp, m_tail, s, poll, tp)
 FUNC_0(VAR_2);
 return (VAR_0);
}
