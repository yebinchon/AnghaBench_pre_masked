
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
FUNC_1(mbuf_t VAR_4, mbuf_flags_t VAR_5)
{
 errno_t VAR_6 = 0;
 mbuf_flags_t VAR_7 = VAR_4->m_flags;
 if ((VAR_5 ^ VAR_7) & VAR_2) {
  VAR_6 = VAR_0;
 } else if (VAR_5 & ~VAR_3) {
  VAR_6 = VAR_0;
 } else {
  VAR_4->m_flags = VAR_5 | (VAR_4->m_flags & ~VAR_3);





  if ((VAR_7 ^ VAR_4->m_flags) & VAR_1) {
   VAR_4->m_flags ^= VAR_1;
   VAR_6 = FUNC_0(VAR_4,
       (VAR_4->m_flags & VAR_1) ? 0 : 1);
  }
 }

 return (VAR_6);
}
