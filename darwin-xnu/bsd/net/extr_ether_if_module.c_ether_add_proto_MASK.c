
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int32_t ;
struct ifnet_demux_desc {int dummy; } ;
typedef int protocol_family_t ;
typedef int ifnet_t ;


 int FUNC_0 (int ,int ,struct ifnet_demux_desc const*) ;
 int FUNC_1 (int ,int ) ;

int
FUNC_2(ifnet_t VAR_0, protocol_family_t VAR_1,
    const struct ifnet_demux_desc *VAR_2, u_int32_t VAR_3)
{
 int VAR_4 = 0;
 u_int32_t VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_4 = FUNC_0(VAR_0, VAR_1, &VAR_2[VAR_5]);
  if (VAR_4) {
   FUNC_1(VAR_0, VAR_1);
   break;
  }
 }

 return (VAR_4);
}
