
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_int16_t ;
struct tcphdr {void* th_sum; } ;
struct ip {int ip_v; int ip_hl; int ip_p; int ip_len; void* ip_sum; } ;
typedef int mbuf_t ;
typedef scalar_t__ errno_t ;






 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int const,int,int,void**) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(mbuf_t VAR_0)
{
 u_int16_t VAR_1;
 u_int16_t VAR_2;
 struct tcphdr *VAR_3;
 errno_t VAR_4;

 unsigned char *VAR_5 = (unsigned char *)FUNC_1(VAR_0);
 struct ip *VAR_6 = (struct ip *)(void *)VAR_5;
 if (VAR_6->ip_v != 4) {
  return;
 }

 VAR_6->ip_sum = 0;
 VAR_4 = FUNC_2(VAR_0, 0, 0, VAR_6->ip_hl << 2, &VAR_1);
 if (VAR_4 == 0)
  VAR_6->ip_sum = VAR_1;
 switch (VAR_6->ip_p) {
  case 129:
   VAR_3 = (struct tcphdr *)(void *)(VAR_5 + (VAR_6->ip_hl << 2));
   VAR_3->th_sum = 0;
   VAR_4 = FUNC_2(VAR_0, 129, VAR_6->ip_hl << 2,
       FUNC_3(VAR_6->ip_len) - (VAR_6->ip_hl << 2), &VAR_2);
   if (VAR_4 == 0)
    VAR_3->th_sum = VAR_2;
   break;
  case 128:

   break;
  case 131:
   break;
  case 130:
   break;
  default:
   break;
 }

 FUNC_0(VAR_0);
 return;
}
