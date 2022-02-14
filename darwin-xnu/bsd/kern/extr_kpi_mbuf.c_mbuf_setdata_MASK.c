
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* mbuf_t ;
typedef int errno_t ;
struct TYPE_5__ {size_t m_len; void* m_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 size_t FUNC_1 (TYPE_1__*) ;

errno_t
FUNC_2(mbuf_t VAR_1, void *VAR_2, size_t VAR_3)
{
 size_t VAR_4 = (size_t)((char *)FUNC_0(VAR_1));
 size_t VAR_5 = FUNC_1(VAR_1);

 if ((size_t)VAR_2 < VAR_4 || ((size_t)VAR_2) + VAR_3 > VAR_4 + VAR_5)
  return (VAR_0);
 VAR_1->m_data = VAR_2;
 VAR_1->m_len = VAR_3;

 return (0);
}
