
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ob_mac_iocb_req {int flags1; int ip_hdr_len; int ip_hdr_off; } ;
struct iphdr {scalar_t__ protocol; int ihl; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct iphdr* FUNC_0 (struct sk_buff const*) ;
 int FUNC_1 (struct sk_buff const*) ;

__attribute__((used)) static void FUNC_2(const struct sk_buff *VAR_4,
        struct ob_mac_iocb_req *VAR_5)
{
 const struct iphdr *VAR_6 = FUNC_0(VAR_4);

 VAR_5->ip_hdr_off = FUNC_1(VAR_4);
 VAR_5->ip_hdr_len = VAR_6->ihl;

 if (VAR_6->protocol == VAR_0) {
  VAR_5->flags1 |= VAR_2 |
   VAR_1;
 } else {
  VAR_5->flags1 |= VAR_3 |
   VAR_1;
 }

}
