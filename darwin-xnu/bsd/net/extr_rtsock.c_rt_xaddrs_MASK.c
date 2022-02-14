
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {scalar_t__ sa_len; } ;
struct rt_addrinfo {int rti_addrs; struct sockaddr** rti_info; } ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (scalar_t__,struct sockaddr*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sockaddr**,int) ;
 struct sockaddr VAR_2 ;

__attribute__((used)) static int
FUNC_2(caddr_t VAR_3, caddr_t VAR_4, struct rt_addrinfo *VAR_5)
{
 struct sockaddr *VAR_6;
 int VAR_7;

 FUNC_1(VAR_5->rti_info, sizeof (VAR_5->rti_info));
 for (VAR_7 = 0; (VAR_7 < VAR_1) && (VAR_3 < VAR_4); VAR_7++) {
  if ((VAR_5->rti_addrs & (1 << VAR_7)) == 0)
   continue;
  VAR_6 = (struct sockaddr *)VAR_3;



  if ((VAR_3 + VAR_6->sa_len) > VAR_4)
   return (VAR_0);







  if (VAR_6->sa_len == 0) {
   VAR_5->rti_info[VAR_7] = &VAR_2;
   return (0);
  }

  VAR_5->rti_info[VAR_7] = VAR_6;
  FUNC_0(VAR_3, VAR_6);
 }
 return (0);
}
