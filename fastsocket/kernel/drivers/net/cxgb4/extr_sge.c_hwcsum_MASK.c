
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sk_buff {scalar_t__ csum_offset; } ;
struct ipv6hdr {scalar_t__ nexthdr; } ;
struct iphdr {int version; scalar_t__ protocol; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct iphdr* FUNC_5 (struct sk_buff const*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct sk_buff const*) ;
 scalar_t__ FUNC_8 (struct sk_buff const*) ;
 int FUNC_9 (struct sk_buff const*) ;

__attribute__((used)) static u64 FUNC_10(const struct sk_buff *VAR_8)
{
 int VAR_9;
 const struct iphdr *VAR_10 = FUNC_5(VAR_8);

 if (VAR_10->version == 4) {
  if (VAR_10->protocol == VAR_1)
   VAR_9 = VAR_4;
  else if (VAR_10->protocol == VAR_2)
   VAR_9 = VAR_6;
  else {
nocsum:



   return VAR_3;
  }
 } else {



  const struct ipv6hdr *VAR_11 = (const struct ipv6hdr *)VAR_10;

  if (VAR_11->nexthdr == VAR_1)
   VAR_9 = VAR_5;
  else if (VAR_11->nexthdr == VAR_2)
   VAR_9 = VAR_7;
  else
   goto nocsum;
 }

 if (FUNC_6(VAR_9 >= VAR_4))
  return FUNC_2(VAR_9) |
   FUNC_4(FUNC_7(VAR_8)) |
   FUNC_3(FUNC_8(VAR_8) - VAR_0);
 else {
  int VAR_12 = FUNC_9(VAR_8);

  return FUNC_2(VAR_9) | FUNC_1(VAR_12) |
   FUNC_0(VAR_12 + VAR_8->csum_offset);
 }
}
