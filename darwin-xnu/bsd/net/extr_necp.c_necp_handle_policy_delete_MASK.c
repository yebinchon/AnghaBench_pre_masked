
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct necp_session_policy {scalar_t__ pending_deletion; } ;
struct necp_session {int dummy; } ;
typedef int policy_id ;
typedef int necp_policy_id ;
typedef int mbuf_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int *,int ,int,int ,int,int*,int *) ;
 struct necp_session_policy* FUNC_2 (struct necp_session*,int) ;
 int FUNC_3 (struct necp_session*,struct necp_session_policy*) ;
 int FUNC_4 (struct necp_session*,int ,int ,int ) ;
 int FUNC_5 (struct necp_session*,int ,int ) ;

__attribute__((used)) static void
FUNC_6(struct necp_session *VAR_6, u_int32_t VAR_7, mbuf_t VAR_8, int VAR_9)
{
 int VAR_10;
 u_int32_t VAR_11 = VAR_1;
 necp_policy_id VAR_12 = 0;

 struct necp_session_policy *VAR_13 = ((void*)0);


 VAR_10 = FUNC_1(VAR_8, ((void*)0), 0, VAR_9, VAR_5, sizeof(VAR_12), &VAR_12, ((void*)0));
 if (VAR_10) {
  FUNC_0(VAR_0, "Failed to get policy id: %d", VAR_10);
  VAR_11 = VAR_2;
  goto fail;
 }

 VAR_13 = FUNC_2(VAR_6, VAR_12);
 if (VAR_13 == ((void*)0) || VAR_13->pending_deletion) {
  FUNC_0(VAR_0, "Failed to find policy with id %d", VAR_12);
  VAR_11 = VAR_3;
  goto fail;
 }

 FUNC_3(VAR_6, VAR_13);

 FUNC_5(VAR_6, VAR_4, VAR_7);
 return;

fail:
 FUNC_4(VAR_6, VAR_4, VAR_7, VAR_11);
}
