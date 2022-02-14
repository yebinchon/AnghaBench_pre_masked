
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct mbuf {int dummy; } ;
struct ifnet_stat_increment_param {int packets_in; scalar_t__ bytes_in; } ;
typedef int ifnet_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct mbuf*,struct ifnet_stat_increment_param*) ;
 scalar_t__ FUNC_1 (struct mbuf*) ;

__attribute__((used)) static void
FUNC_2(ifnet_t VAR_1, struct mbuf * VAR_2)
{
 struct ifnet_stat_increment_param VAR_3 = {};

 VAR_3.packets_in = 1;
 VAR_3.bytes_in = (uint32_t)FUNC_1(VAR_2) + VAR_0;
 FUNC_0(VAR_1, VAR_2, &VAR_3);
}
