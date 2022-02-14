
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* work_interval_t ;
typedef int uint32_t ;
struct work_interval_create_params {int wicp_port; int wicp_create_flags; int wicp_id; } ;
typedef int create_params ;
struct TYPE_4__ {int wi_port; int create_flags; int work_interval_id; int thread_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,struct work_interval_create_params*,int) ;
 int VAR_3 ;
 TYPE_1__* FUNC_2 (int) ;

int
FUNC_3(work_interval_t *VAR_4, uint32_t VAR_5)
{
 int VAR_6;
 work_interval_t VAR_7;

 if (VAR_4 == ((void*)0)) {
  VAR_3 = VAR_0;
  return -1;
 }

 struct work_interval_create_params VAR_8 = {
  .wicp_create_flags = VAR_5,
 };

 VAR_6 = FUNC_1(VAR_2, 0,
                           &VAR_8, sizeof(VAR_8));
 if (VAR_6 == -1) {
  return VAR_6;
 }

 VAR_7 = FUNC_2(sizeof(*VAR_7));
 if (VAR_7 == ((void*)0)) {
  VAR_3 = VAR_1;
  return -1;
 }

 VAR_7->thread_id = FUNC_0();
 VAR_7->work_interval_id = VAR_8.wicp_id;
 VAR_7->create_flags = VAR_8.wicp_create_flags;
 VAR_7->wi_port = VAR_8.wicp_port;

 *VAR_4 = VAR_7;
 return 0;
}
