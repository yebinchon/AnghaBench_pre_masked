
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_hdr {int dummy; } ;
struct icmp6_hdr {int icmp6_type; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_0(struct ip6_hdr *VAR_5, int VAR_6)
{
 const struct icmp6_hdr *VAR_7;
 int VAR_8;

 VAR_7 = (struct icmp6_hdr *)((caddr_t)VAR_5 + VAR_6);
 VAR_8 = VAR_7->icmp6_type;

 if (VAR_8 == VAR_0 ||
     VAR_8 == VAR_2 ||
     VAR_8 == VAR_4 ||
     VAR_8 == VAR_1 ||
     VAR_8 == VAR_3)
  return(1);

 return(0);
}
