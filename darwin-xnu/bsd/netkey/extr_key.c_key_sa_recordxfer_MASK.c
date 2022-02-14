
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {int tv_sec; } ;
struct secasvar {TYPE_2__* lft_c; } ;
struct TYPE_3__ {scalar_t__ len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct TYPE_4__ {int sadb_lifetime_usetime; int sadb_lifetime_allocations; int sadb_lifetime_bytes; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct timeval*) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;

void
FUNC_4(
      struct secasvar *VAR_1,
      struct mbuf *VAR_2)
{


 if (!VAR_1)
  FUNC_3("key_sa_recordxfer called with sav == NULL");
 if (!VAR_2)
  FUNC_3("key_sa_recordxfer called with m == NULL");
 if (!VAR_1->lft_c)
  return;

 FUNC_0(VAR_0);




 VAR_1->lft_c->sadb_lifetime_bytes += VAR_2->m_pkthdr.len;







 VAR_1->lft_c->sadb_lifetime_allocations++;
    {
  struct timeval VAR_3;
  FUNC_2(&VAR_3);
  VAR_1->lft_c->sadb_lifetime_usetime = VAR_3.tv_sec;

    }
 FUNC_1(VAR_0);

 return;
}
