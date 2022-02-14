
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int16_t ;
typedef TYPE_2__* mbuf_t ;
typedef int errno_t ;
struct TYPE_5__ {int drv_flowid; } ;
struct TYPE_6__ {int m_flags; TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;

errno_t
FUNC_1(mbuf_t VAR_2, u_int16_t VAR_3)
{
 if (VAR_2 == ((void*)0) || !(VAR_2->m_flags & VAR_1))
  return (VAR_0);

 FUNC_0(VAR_2);

 VAR_2->m_pkthdr.drv_flowid = VAR_3;

 return (0);
}
