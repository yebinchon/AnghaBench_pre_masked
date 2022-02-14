
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct netagent_session {int dummy; } ;
typedef int mbuf_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct netagent_session*,int ,int ,int ) ;
 int FUNC_2 (struct netagent_session*,int ,int ) ;
 int FUNC_3 (struct netagent_session*) ;

__attribute__((used)) static void
FUNC_4(struct netagent_session *VAR_3, u_int32_t VAR_4,
           u_int32_t VAR_5, mbuf_t VAR_6, int VAR_7)
{
#pragma unused(payload_length, packet, offset)
 u_int32_t VAR_8 = VAR_1;

 if (VAR_3 == ((void*)0)) {
  FUNC_0(VAR_0, "Failed to find session");
  VAR_8 = VAR_1;
  goto fail;
 }

 FUNC_3(VAR_3);

 FUNC_2(VAR_3, VAR_2, VAR_4);
 return;
fail:
 FUNC_1(VAR_3, VAR_2, VAR_4, VAR_8);
}
