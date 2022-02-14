
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sockaddr {int dummy; } ;
struct mbuf {int dummy; } ;
struct m_tag {int dummy; } ;
struct cfil_tag {short cfil_so_options; int cfil_faddr; int cfil_so_state_change_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct m_tag* FUNC_0 (struct mbuf*,int ,int ,int *) ;
 int FUNC_1 (struct mbuf*,struct m_tag*) ;

struct m_tag *
FUNC_2(struct mbuf *VAR_2, uint32_t *VAR_3, short *VAR_4,
        struct sockaddr **VAR_5)
{
 struct m_tag *VAR_6 = ((void*)0);
 struct cfil_tag *VAR_7 = ((void*)0);

 VAR_6 = FUNC_0(VAR_2, VAR_0, VAR_1, ((void*)0));
 if (VAR_6) {
  VAR_7 = (struct cfil_tag *)(VAR_6 + 1);
  if (VAR_3)
   *VAR_3 = VAR_7->cfil_so_state_change_cnt;
  if (VAR_4)
   *VAR_4 = VAR_7->cfil_so_options;
  if (VAR_5)
   *VAR_5 = (struct sockaddr *) &VAR_7->cfil_faddr;





  FUNC_1(VAR_2, VAR_6);
  return VAR_6;
 }
 return ((void*)0);
}
