
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_4__ {int distributed_transaction_number; int database_id; int process_id; int usesysid; int client_port; void* backend_type; void* query; void* backend_xmin; void* backend_xid; void* state; void* wait_event; void* wait_event_type; void* state_change; void* query_start; void* xact_start; void* backend_start; void* client_hostname; int client_addr; void* application_name; void* usename; void* databaese_name; void* distributed_transaction_stamp; } ;
typedef int PGresult ;
typedef TYPE_1__ CitusDistStat ;


 scalar_t__ FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int ,int) ;
 void* FUNC_3 (int *,int ,int) ;
 void* FUNC_4 (int *,int ,int) ;
 void* FUNC_5 (int *,int ,int) ;
 void* FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int,TYPE_1__*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static CitusDistStat *
FUNC_9(PGresult *VAR_0, int64 VAR_1)
{
 CitusDistStat *VAR_2 = (CitusDistStat *) FUNC_8(sizeof(CitusDistStat));
 int VAR_3 = 0;


 VAR_3 =
  FUNC_0(VAR_0, VAR_1, 0) ? -1 : FUNC_2(VAR_0, VAR_1, 0);

 FUNC_7(VAR_3, VAR_2);

 VAR_2->distributed_transaction_number = FUNC_2(VAR_0, VAR_1, 1);
 VAR_2->distributed_transaction_stamp =
  FUNC_5(VAR_0, VAR_1, 2);


 VAR_2->database_id = FUNC_2(VAR_0, VAR_1, 3);
 VAR_2->databaese_name = FUNC_3(VAR_0, VAR_1, 4);
 VAR_2->process_id = FUNC_2(VAR_0, VAR_1, 5);
 VAR_2->usesysid = FUNC_2(VAR_0, VAR_1, 6);
 VAR_2->usename = FUNC_3(VAR_0, VAR_1, 7);
 VAR_2->application_name = FUNC_4(VAR_0, VAR_1, 8);
 VAR_2->client_addr = FUNC_1(VAR_0, VAR_1, 9);
 VAR_2->client_hostname = FUNC_4(VAR_0, VAR_1, 10);
 VAR_2->client_port = FUNC_2(VAR_0, VAR_1, 11);
 VAR_2->backend_start = FUNC_5(VAR_0, VAR_1, 12);
 VAR_2->xact_start = FUNC_5(VAR_0, VAR_1, 13);
 VAR_2->query_start = FUNC_5(VAR_0, VAR_1, 14);
 VAR_2->state_change = FUNC_5(VAR_0, VAR_1, 15);
 VAR_2->wait_event_type = FUNC_4(VAR_0, VAR_1, 16);
 VAR_2->wait_event = FUNC_4(VAR_0, VAR_1, 17);
 VAR_2->state = FUNC_4(VAR_0, VAR_1, 18);
 VAR_2->backend_xid = FUNC_6(VAR_0, VAR_1, 19);
 VAR_2->backend_xmin = FUNC_6(VAR_0, VAR_1, 20);
 VAR_2->query = FUNC_4(VAR_0, VAR_1, 21);
 VAR_2->backend_type = FUNC_4(VAR_0, VAR_1, 22);

 return VAR_2;
}
