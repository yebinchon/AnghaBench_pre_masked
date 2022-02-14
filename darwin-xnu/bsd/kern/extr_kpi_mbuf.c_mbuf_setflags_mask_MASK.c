
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* mbuf_t ;
typedef int mbuf_flags_t ;
typedef int errno_t ;
struct TYPE_4__ {int m_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int VAR_2 ;
 int VAR_3 ;

errno_t
FUNC_1(mbuf_t VAR_4, mbuf_flags_t VAR_5, mbuf_flags_t VAR_6)
{
 errno_t VAR_7 = 0;

 if (VAR_6 & (~VAR_3 | VAR_2)) {
  VAR_7 = VAR_0;
 } else {
  mbuf_flags_t VAR_8 = VAR_4->m_flags;
  VAR_4->m_flags = (VAR_5 & VAR_6) | (VAR_4->m_flags & ~VAR_6);





  if ((VAR_8 ^ VAR_4->m_flags) & VAR_1) {
   VAR_4->m_flags ^= VAR_1;
   VAR_7 = FUNC_0(VAR_4,
       (VAR_4->m_flags & VAR_1) ? 0 : 1);
  }
 }

 return (VAR_7);
}
