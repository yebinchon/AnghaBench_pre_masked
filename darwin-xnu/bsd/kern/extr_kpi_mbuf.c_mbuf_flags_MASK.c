
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* mbuf_t ;
typedef int mbuf_flags_t ;
struct TYPE_3__ {int m_flags; } ;


 int VAR_0 ;

mbuf_flags_t
FUNC_0(const mbuf_t VAR_1)
{
 return (VAR_1->m_flags & VAR_0);
}
