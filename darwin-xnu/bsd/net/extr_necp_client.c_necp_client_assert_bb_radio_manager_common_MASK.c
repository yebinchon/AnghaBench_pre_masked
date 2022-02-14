
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
typedef int uint8_t ;
struct necp_client {int agent_handle; int proc_pid; int client_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct necp_client*,int ) ;
 int FUNC_2 (struct necp_client*,int ) ;
 int FUNC_3 (struct necp_client*,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct necp_client *VAR_6, bool VAR_7)
{
 uuid_t VAR_8;
 uint8_t VAR_9;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_6, VAR_8);
 if (VAR_10) {
  FUNC_0(VAR_2, "BB radio manager agent not found");
  return VAR_10;
 }


 if (VAR_7 == VAR_1) {
  VAR_9 = VAR_4;

  if (!FUNC_3(VAR_6, VAR_8)) {
   return VAR_0;
  }
 } else {
  VAR_9 = VAR_3;
 }

 VAR_10 = FUNC_4(VAR_8, VAR_6->client_id, VAR_6->proc_pid, VAR_6->agent_handle, VAR_9);
 if (VAR_10) {
  FUNC_0(VAR_2, "netagent_client_message failed");
  return VAR_10;
 }


 if (VAR_7 == VAR_5) {
  FUNC_1(VAR_6, VAR_8);
 }

 return 0;
}
