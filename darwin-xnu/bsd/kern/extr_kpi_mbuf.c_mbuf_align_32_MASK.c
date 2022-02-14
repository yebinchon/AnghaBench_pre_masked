
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int32_t ;
typedef TYPE_1__* mbuf_t ;
typedef int errno_t ;
struct TYPE_6__ {int m_flags; size_t m_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 size_t FUNC_1 (TYPE_1__*) ;
 size_t FUNC_2 (TYPE_1__*) ;

errno_t
FUNC_3(mbuf_t VAR_2, size_t VAR_3)
{
 if ((VAR_2->m_flags & VAR_1) != 0 && FUNC_0(VAR_2))
  return (VAR_0);
 VAR_2->m_data = FUNC_1(VAR_2);
 VAR_2->m_data +=
     ((FUNC_2(VAR_2) - VAR_3) &~ (sizeof(u_int32_t) - 1));

 return (0);
}
