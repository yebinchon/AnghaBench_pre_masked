
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int8_t ;
struct TYPE_6__ {int lro_elapsed; } ;
struct mbuf {TYPE_3__ m_pkthdr; } ;
struct lro_flow {int lr_len; int lr_timestamp; TYPE_2__* lr_mhead; } ;
struct TYPE_4__ {int lro_npkts; } ;
struct TYPE_5__ {TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct lro_flow* VAR_1 ;
 int FUNC_3 (struct mbuf*) ;
 int FUNC_4 (struct mbuf*) ;
 int VAR_2 ;
 int FUNC_5 (char*,int,int,int,int) ;
 struct mbuf* FUNC_6 (int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_7(void)
{
 int VAR_5 = 0;
 struct mbuf *VAR_6;
 struct lro_flow *VAR_7;
 int VAR_8 = 0;

 FUNC_1(&VAR_3);

 while (VAR_5 < VAR_0) {
  VAR_7 = &VAR_1[VAR_5];
  if (VAR_7->lr_mhead != ((void*)0)) {

   if (!VAR_8) {
    FUNC_0();
    VAR_8 = 1;
   }

   if (VAR_2 >= 2)
    FUNC_5("tcp_lro_flush_flows: len =%d n_pkts = %d %d %d \n",
     VAR_7->lr_len,
     VAR_7->lr_mhead->m_pkthdr.lro_npkts,
     VAR_7->lr_timestamp, VAR_4);

   u_int8_t VAR_9 = VAR_4 - VAR_7->lr_timestamp;

   VAR_6 = FUNC_6(VAR_5);

   if (VAR_6) {
    VAR_6->m_pkthdr.lro_elapsed = VAR_9;
    FUNC_2(&VAR_3);
    FUNC_4(VAR_6);
    FUNC_3(VAR_6);
    FUNC_1(&VAR_3);
   }
  }
  VAR_5++;
 }
 FUNC_2(&VAR_3);
}
