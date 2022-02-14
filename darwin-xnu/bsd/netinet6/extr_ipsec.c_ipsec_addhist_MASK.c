
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct mbuf {int dummy; } ;
struct ipsec_tag {size_t history_count; struct ipsec_history* history; } ;
struct ipsec_history {int ih_proto; int ih_spi; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct ipsec_history*,int) ;
 struct ipsec_tag* FUNC_1 (struct mbuf*) ;

int
FUNC_2(
 struct mbuf *VAR_3,
 int VAR_4,
 u_int32_t VAR_5)
{
 struct ipsec_tag *VAR_6;
 struct ipsec_history *VAR_7;
 VAR_6 = FUNC_1(VAR_3);
 if (!VAR_6)
  return VAR_0;
 if (VAR_6->history_count == VAR_2)
  return VAR_1;

 VAR_7 = &VAR_6->history[VAR_6->history_count];
 VAR_6->history_count++;

 FUNC_0(VAR_7, sizeof(*VAR_7));
 VAR_7->ih_proto = VAR_4;
 VAR_7->ih_spi = VAR_5;

 return 0;
}
