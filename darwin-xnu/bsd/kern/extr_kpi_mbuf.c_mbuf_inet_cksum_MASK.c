
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
typedef int u_int16_t ;
typedef TYPE_2__* mbuf_t ;
typedef int errno_t ;
struct TYPE_5__ {scalar_t__ len; } ;
struct TYPE_6__ {TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int,scalar_t__,scalar_t__) ;

errno_t
FUNC_1(mbuf_t VAR_1, int VAR_2, u_int32_t VAR_3, u_int32_t VAR_4,
    u_int16_t *VAR_5)
{
 if (VAR_1 == ((void*)0) || VAR_4 == 0 || VAR_5 == ((void*)0) ||
     (u_int32_t)VAR_1->m_pkthdr.len < (VAR_3 + VAR_4))
  return (VAR_0);

 *VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 return (0);
}
