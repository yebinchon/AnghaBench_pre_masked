
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct m_tag {int dummy; } ;
struct ipsec_tag {scalar_t__ history_count; scalar_t__ socket; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct m_tag* FUNC_0 (int ,int ,int ,int ,struct mbuf*) ;
 struct m_tag* FUNC_1 (struct mbuf*,int ,int ,int *) ;
 int FUNC_2 (struct mbuf*,struct m_tag*) ;

__attribute__((used)) static struct ipsec_tag *
FUNC_3(
 struct mbuf *VAR_4)
{
 struct m_tag *VAR_5;


 VAR_5 = FUNC_1(VAR_4, VAR_1, VAR_2, ((void*)0));

 if (VAR_5 == ((void*)0)) {
  struct ipsec_tag *VAR_6;


  VAR_5 = FUNC_0(VAR_1, VAR_2,
        VAR_0, VAR_3, VAR_4);

  if (VAR_5) {
   VAR_6 = (struct ipsec_tag*)(VAR_5 + 1);
   VAR_6->socket = 0;
   VAR_6->history_count = 0;

   FUNC_2(VAR_4, VAR_5);
  }
 }

 return VAR_5 ? (struct ipsec_tag*)(VAR_5 + 1) : ((void*)0);
}
