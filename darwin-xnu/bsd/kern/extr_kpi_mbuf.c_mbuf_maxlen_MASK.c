
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* mbuf_t ;
struct TYPE_5__ {size_t ext_size; } ;
struct TYPE_6__ {int m_flags; char* m_dat; TYPE_1__ m_ext; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__* const) ;

size_t
FUNC_1(const mbuf_t VAR_2)
{
 if (VAR_2->m_flags & VAR_1)
  return (VAR_2->m_ext.ext_size);
 return (&VAR_2->m_dat[VAR_0] - ((char *)FUNC_0(VAR_2)));
}
