
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_arp_entrytype {scalar_t__ ip; } ;
typedef scalar_t__ __u16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_0(struct qeth_arp_entrytype *VAR_4, __u16 VAR_5)
{
 return (VAR_4->ip == VAR_0 && VAR_5 == VAR_2) ||
  (VAR_4->ip == VAR_1 && VAR_5 == VAR_3);
}
