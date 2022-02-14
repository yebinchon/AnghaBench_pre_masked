
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_2__* mbuf_t ;
typedef int mbuf_how_t ;
typedef int errno_t ;
struct TYPE_10__ {int len; } ;
struct TYPE_11__ {size_t m_len; int m_flags; TYPE_1__ m_pkthdr; struct TYPE_11__* m_next; int m_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (scalar_t__,size_t) ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char const*,char*,unsigned int) ;
 TYPE_2__* FUNC_2 (int ,int ) ;
 TYPE_2__* FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,int ,TYPE_2__**) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;

errno_t
FUNC_8(
 mbuf_t VAR_5,
 size_t VAR_6,
 size_t VAR_7,
 const void *VAR_8,
 mbuf_how_t VAR_9)
{
 size_t VAR_10;
 mbuf_t VAR_11 = VAR_5;
 mbuf_t VAR_12;
 int VAR_13 = 0;
 errno_t VAR_14 = 0;
 const char *VAR_15 = VAR_8;

 if (VAR_5 == ((void*)0) || VAR_7 == 0 || VAR_8 == ((void*)0))
  return (VAR_0);

 while (VAR_6 > (VAR_10 = VAR_5->m_len)) {
  VAR_6 -= VAR_10;
  VAR_13 += VAR_10;
  if (VAR_5->m_next == 0) {
   VAR_12 = FUNC_3(VAR_9, VAR_5->m_type);
   if (VAR_12 == 0) {
    VAR_14 = VAR_1;
    goto out;
   }
   VAR_12->m_len = FUNC_0(VAR_3, VAR_7 + VAR_6);
   VAR_5->m_next = VAR_12;
  }
  VAR_5 = VAR_5->m_next;
 }

 while (VAR_7 > 0) {
  VAR_10 = FUNC_0(VAR_5->m_len - VAR_6, VAR_7);
  if (VAR_10 < VAR_7 && VAR_5->m_next == ((void*)0) &&
      FUNC_7(VAR_5) > 0) {
   size_t VAR_16 = FUNC_0(FUNC_7(VAR_5), VAR_7 - VAR_10);
   VAR_10 += VAR_16;
   VAR_5->m_len += VAR_16;
  }
  FUNC_1(VAR_15, VAR_6 + (char *)FUNC_4(VAR_5), (unsigned)VAR_10);
  VAR_15 += VAR_10;
  VAR_7 -= VAR_10;
  VAR_10 += VAR_6;
  VAR_6 = 0;
  VAR_13 += VAR_10;
  if (VAR_7 == 0)
   break;
  if (VAR_5->m_next == 0) {
   VAR_12 = FUNC_2(VAR_9, VAR_5->m_type);
   if (VAR_12 == ((void*)0)) {
    VAR_14 = VAR_1;
    goto out;
   }
   if (VAR_7 > VAR_2) {




    FUNC_6(VAR_9, VAR_5->m_type, &VAR_12);
   }
   VAR_12->m_len = FUNC_0(FUNC_5(VAR_12), VAR_7);
   VAR_5->m_next = VAR_12;
  }
  VAR_5 = VAR_5->m_next;
 }

out:
 if ((VAR_11->m_flags & VAR_4) && (VAR_11->m_pkthdr.len < VAR_13))
  VAR_11->m_pkthdr.len = VAR_13;

 return (VAR_14);
}
