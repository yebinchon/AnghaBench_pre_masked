
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* mbuf_t ;
typedef int errno_t ;
struct TYPE_4__ {size_t m_len; struct TYPE_4__* m_next; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,void*,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;

errno_t
FUNC_2(const mbuf_t VAR_2, size_t VAR_3, size_t VAR_4, void *VAR_5)
{

 int VAR_6;
 mbuf_t VAR_7 = VAR_2;

 while (VAR_3 > 0) {
  if (VAR_7 == 0)
   return (VAR_0);
  if (VAR_3 < (size_t)VAR_7->m_len)
   break;
  VAR_3 -= VAR_7->m_len;
  VAR_7 = VAR_7->m_next;
 }
 while (VAR_4 > 0) {
  if (VAR_7 == 0)
   return (VAR_0);
  VAR_6 = VAR_7->m_len - VAR_3 > VAR_4 ? VAR_4 : VAR_7->m_len - VAR_3;
  FUNC_0(FUNC_1(VAR_7, VAR_1) + VAR_3, VAR_5, VAR_6);
  VAR_4 -= VAR_6;
  VAR_5 = ((char *)VAR_5) + VAR_6;
  VAR_3 = 0;
  VAR_7 = VAR_7->m_next;
 }

 return (0);
}
