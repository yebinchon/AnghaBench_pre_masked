
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sadb_msghdr {int* extlen; int * extoff; int ** ext; int * msg; } ;
struct sadb_msg {int dummy; } ;
struct TYPE_2__ {scalar_t__ len; } ;
struct mbuf {int m_len; int m_flags; TYPE_1__ m_pkthdr; struct mbuf* m_next; } ;


 int FUNC_0 (struct mbuf*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct mbuf* FUNC_2 (int) ;
 int FUNC_3 (struct mbuf*,struct mbuf*) ;
 int FUNC_4 (struct mbuf*,int ,int,int ) ;
 struct mbuf* FUNC_5 (struct mbuf*,int ,int,int ) ;
 int FUNC_6 (struct mbuf*) ;
 int FUNC_7 (struct mbuf*,int ) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static struct mbuf *
FUNC_9(struct mbuf *VAR_6, const struct sadb_msghdr *VAR_7,
    int VAR_8, int VAR_9, int *VAR_10)
{
 int VAR_11;
 int VAR_12;
 struct mbuf *VAR_13 = ((void*)0), *VAR_14;
 int VAR_15;

 if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0))
  FUNC_8("null pointer passed to key_gather");

 for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
  VAR_11 = VAR_10[VAR_12];
  if (VAR_11 < 0 || VAR_11 > VAR_3)
   goto fail;

  if (VAR_11 == VAR_4 && VAR_7->msg == ((void*)0))
   continue;
  if (VAR_11 != VAR_4 &&
      (VAR_7->ext[VAR_11] == ((void*)0) || VAR_7->extlen[VAR_11] == 0))
   continue;

  if (VAR_11 == VAR_4) {
   VAR_15 = FUNC_1(sizeof(struct sadb_msg));
   FUNC_0(VAR_14, VAR_2, VAR_0);
   if (!VAR_14)
    goto fail;
   VAR_14->m_len = VAR_15;
   VAR_14->m_next = ((void*)0);
   FUNC_4(VAR_6, 0, sizeof(struct sadb_msg),
        FUNC_7(VAR_14, VAR_5));
  } else if (VAR_12 < VAR_8) {
   VAR_15 = VAR_7->extlen[VAR_11];
   VAR_14 = FUNC_2(VAR_15);
   if (!VAR_14 || VAR_14->m_next) {
    if (VAR_14)
     FUNC_6(VAR_14);
    goto fail;
   }
   FUNC_4(VAR_6, VAR_7->extoff[VAR_11], VAR_7->extlen[VAR_11],
        FUNC_7(VAR_14, VAR_5));
  } else {
   VAR_14 = FUNC_5(VAR_6, VAR_7->extoff[VAR_11], VAR_7->extlen[VAR_11],
      VAR_2);
  }
  if (VAR_14 == ((void*)0))
   goto fail;

  if (VAR_13)
   FUNC_3(VAR_13, VAR_14);
  else
   VAR_13 = VAR_14;
 }

 if ((VAR_13->m_flags & VAR_1) != 0) {
  VAR_13->m_pkthdr.len = 0;
  for (VAR_14 = VAR_13; VAR_14; VAR_14 = VAR_14->m_next)
   VAR_13->m_pkthdr.len += VAR_14->m_len;
 }

 return VAR_13;

fail:
 FUNC_6(VAR_13);
 return ((void*)0);
}
