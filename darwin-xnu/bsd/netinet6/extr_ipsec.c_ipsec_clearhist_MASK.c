
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct ipsec_tag {scalar_t__ history_count; } ;


 struct ipsec_tag* FUNC_0 (struct mbuf*) ;
 int FUNC_1 (struct mbuf*,struct ipsec_tag*) ;

void
FUNC_2(
 struct mbuf *VAR_0)
{
 struct ipsec_tag *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1) {
  VAR_1->history_count = 0;
 }
 FUNC_1(VAR_0, VAR_1);
}
