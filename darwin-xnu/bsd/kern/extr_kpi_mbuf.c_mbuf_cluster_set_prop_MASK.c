
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
typedef TYPE_1__* mbuf_t ;
typedef int errno_t ;
struct TYPE_4__ {int m_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,int ) ;

errno_t
FUNC_1(mbuf_t VAR_3, u_int32_t VAR_4, u_int32_t VAR_5)
{
 if (VAR_3 == ((void*)0) || !(VAR_3->m_flags & VAR_2))
  return (VAR_1);

 return (FUNC_0(VAR_3, VAR_4, VAR_5) ? 0 : VAR_0);
}
