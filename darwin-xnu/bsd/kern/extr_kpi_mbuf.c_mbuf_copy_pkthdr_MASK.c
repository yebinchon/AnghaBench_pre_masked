
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* mbuf_t ;
typedef int errno_t ;
struct TYPE_6__ {int m_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__* const) ;

errno_t
FUNC_1(mbuf_t VAR_2, const mbuf_t VAR_3)
{
 if (((VAR_3)->m_flags & VAR_1) == 0)
  return (VAR_0);

 FUNC_0(VAR_2, VAR_3);

 return (0);
}
