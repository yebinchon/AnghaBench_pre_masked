
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int64_t ;
struct mbuf {struct mbuf* m_nextpkt; } ;
struct dn_pkt_tag {scalar_t__ dn_output_time; } ;
struct dn_pipe {struct mbuf* head; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct dn_pkt_tag* FUNC_3 (struct mbuf*) ;
 int VAR_3 ;
 int FUNC_4 (int *,scalar_t__,struct dn_pipe*) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_5(struct dn_pipe *VAR_5, struct mbuf **VAR_6, struct mbuf **VAR_7)
{
 struct mbuf *VAR_8 ;
 struct dn_pkt_tag *VAR_9 = ((void*)0);
 u_int64_t VAR_10;

 FUNC_2(VAR_2, VAR_0);
        FUNC_0(VAR_4 >= 0);
 if (VAR_4 == 0) {
  while ((VAR_8 = VAR_5->head) != ((void*)0)) {
   VAR_9 = FUNC_3(VAR_8);
   if (!FUNC_1(VAR_9->dn_output_time, VAR_1))
    break;

   VAR_5->head = VAR_8->m_nextpkt;
   if (*VAR_7 != ((void*)0))
    (*VAR_7)->m_nextpkt = VAR_8;
   else
    *VAR_6 = VAR_8;
   *VAR_7 = VAR_8;
  }

  if (*VAR_7 != ((void*)0))
   (*VAR_7)->m_nextpkt = ((void*)0);
 }

 VAR_10 = VAR_9 == ((void*)0) || FUNC_1(VAR_9->dn_output_time, VAR_1) ?
  VAR_1 + 1 : VAR_9->dn_output_time;


 if ((VAR_8 = VAR_5->head) != ((void*)0)) {
  VAR_9 = FUNC_3(VAR_8);



  FUNC_4(&VAR_3, VAR_10, VAR_5);
 }
}
