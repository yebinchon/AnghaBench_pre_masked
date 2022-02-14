
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* mbuf_t ;
typedef int errno_t ;
struct TYPE_6__ {size_t m_len; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 size_t FUNC_2 (TYPE_1__*) ;

errno_t
FUNC_3(mbuf_t VAR_1, int VAR_2)
{

 if (VAR_2 > 0) {
  int VAR_3 = (size_t)FUNC_0(VAR_1) - (size_t)FUNC_1(VAR_1) +
      VAR_1->m_len;

  if ((size_t)(VAR_2 + VAR_3) > FUNC_2(VAR_1))
   return (VAR_0);
 } else if (-VAR_2 > VAR_1->m_len) {
  return (VAR_0);
 }

 VAR_1->m_len += VAR_2;
 return (0);
}
