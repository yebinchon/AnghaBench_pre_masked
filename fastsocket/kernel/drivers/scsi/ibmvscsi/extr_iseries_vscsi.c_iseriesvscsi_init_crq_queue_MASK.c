
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvscsi_host_data {int dummy; } ;
struct crq_queue {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 struct ibmvscsi_host_data* VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct crq_queue *VAR_4,
           struct ibmvscsi_host_data *VAR_5,
           int VAR_6)
{
 int VAR_7;

 VAR_1 = VAR_5;
 VAR_7 = FUNC_3(VAR_3, VAR_2, VAR_6);
 if (VAR_7 < 0) {
  FUNC_0("viopath_open failed with rc %d in open_event_path\n",
         VAR_7);
  goto viopath_open_failed;
 }

 VAR_7 = FUNC_1(VAR_2, VAR_0);
 if (VAR_7 < 0) {
  FUNC_0("vio_setHandler failed with rc %d in open_event_path\n",
         VAR_7);
  goto vio_setHandler_failed;
 }
 return 0;

      vio_setHandler_failed:
 FUNC_2(VAR_3, VAR_2, VAR_6);
      viopath_open_failed:
 return -1;
}
