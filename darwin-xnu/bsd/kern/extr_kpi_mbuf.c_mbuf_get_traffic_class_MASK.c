
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mbuf_traffic_class_t ;
typedef TYPE_1__* mbuf_t ;
struct TYPE_4__ {int m_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

mbuf_traffic_class_t
FUNC_1(mbuf_t VAR_2)
{
 if (VAR_2 == ((void*)0) || !(VAR_2->m_flags & VAR_1))
  return (VAR_0);

 return (FUNC_0(VAR_2));
}
