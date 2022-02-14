
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct necp_session {int proc_locked; } ;
typedef int mbuf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct necp_session*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct necp_session *VAR_2, u_int32_t VAR_3, mbuf_t VAR_4, int VAR_5)
{
#pragma unused(packet, offset)

 VAR_2->proc_locked = VAR_1;
 FUNC_0(VAR_2, VAR_0, VAR_3);
}
