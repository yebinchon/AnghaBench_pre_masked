
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct mbuf {int m_len; } ;
typedef scalar_t__ mbuf_t ;
typedef int ipfilter_t ;
typedef int ipf_pktopts_t ;
typedef int errno_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (struct mbuf*) ;
 scalar_t__ FUNC_3 (struct mbuf*) ;
 struct mbuf* FUNC_4 (struct mbuf*,int) ;

errno_t
FUNC_5(
 mbuf_t VAR_1,
 ipfilter_t VAR_2,
 ipf_pktopts_t VAR_3)
{
 struct mbuf *VAR_4 = (struct mbuf *)VAR_1;
 u_int8_t VAR_5;
 errno_t VAR_6 = 0;


 if (VAR_4->m_len < 1) {
  VAR_4 = FUNC_4(VAR_4, 1);
  if (VAR_4 == ((void*)0))
   goto done;
 }

 VAR_5 = (*(u_int8_t *)FUNC_3(VAR_4)) >> 4;
 switch (VAR_5) {
  case 4:
   VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3);
   break;





  default:
   FUNC_2(VAR_4);
   VAR_6 = VAR_0;
   break;
 }

done:
 return (VAR_6);
}
