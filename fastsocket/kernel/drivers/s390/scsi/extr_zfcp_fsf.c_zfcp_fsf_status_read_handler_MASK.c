
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct zfcp_fsf_req {int status; struct fsf_status_read_buffer* data; struct zfcp_adapter* adapter; } ;
struct TYPE_6__ {int status_read_data; } ;
struct zfcp_adapter {int stat_work; int work_queue; int stat_miss; TYPE_3__ pool; int adapter_features; TYPE_1__* ccw_device; int dbf; } ;
struct TYPE_5__ {int * word; } ;
struct fsf_status_read_buffer {int status_type; int status_subtype; TYPE_2__ payload; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct fsf_status_read_buffer*,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,struct zfcp_fsf_req*) ;
 int FUNC_6 (char*,int ,struct fsf_status_read_buffer*) ;
 int FUNC_7 (struct zfcp_adapter*,char*,struct zfcp_fsf_req*) ;
 int FUNC_8 (struct zfcp_adapter*,int,char*,struct zfcp_fsf_req*) ;
 int FUNC_9 (struct zfcp_adapter*,char*,int *,int ,int ) ;
 int FUNC_10 (struct zfcp_adapter*) ;
 int FUNC_11 (struct zfcp_adapter*,int ,int ) ;
 int FUNC_12 (struct zfcp_fsf_req*) ;
 int FUNC_13 (struct zfcp_fsf_req*) ;
 int FUNC_14 (struct zfcp_fsf_req*) ;
 int FUNC_15 (struct zfcp_fsf_req*) ;

__attribute__((used)) static void FUNC_16(struct zfcp_fsf_req *VAR_9)
{
 struct zfcp_adapter *VAR_10 = VAR_9->adapter;
 struct fsf_status_read_buffer *VAR_11 = VAR_9->data;

 if (VAR_9->status & VAR_8) {
  FUNC_6("dism", VAR_10->dbf, VAR_11);
  FUNC_3(VAR_11, VAR_10->pool.status_read_data);
  FUNC_13(VAR_9);
  return;
 }

 FUNC_6("read", VAR_10->dbf, VAR_11);

 switch (VAR_11->status_type) {
 case 129:
  FUNC_15(VAR_9);
  break;
 case 133:
  FUNC_12(VAR_9);
  break;
 case 128:
  break;
 case 136:
  FUNC_2(&VAR_10->ccw_device->dev,
    "The error threshold for checksum statistics "
    "has been exceeded\n");
  FUNC_5(VAR_10->dbf, VAR_9);
  break;
 case 132:
  FUNC_14(VAR_9);
  FUNC_11(VAR_10, VAR_0, 0);
  break;
 case 131:
  FUNC_1(&VAR_10->ccw_device->dev,
    "The local link has been restored\n");

  FUNC_9(VAR_10, "fssrh_1", ((void*)0),
            VAR_7,
            VAR_4);
  FUNC_8(VAR_10,
     VAR_5 |
     VAR_6,
     "fssrh_2", VAR_9);
  FUNC_11(VAR_10, VAR_1, 0);

  break;
 case 130:
  if (VAR_11->status_subtype & VAR_2)
   FUNC_7(VAR_10, "fssrh_3",
       VAR_9);
  if (VAR_11->status_subtype & VAR_3)
   FUNC_10(VAR_10);
  break;
 case 135:
  FUNC_7(VAR_10, "fssrh_4", VAR_9);
  break;
 case 134:
  VAR_10->adapter_features = VAR_11->payload.word[0];
  break;
 }

 FUNC_3(VAR_11, VAR_10->pool.status_read_data);
 FUNC_13(VAR_9);

 FUNC_0(&VAR_10->stat_miss);
 FUNC_4(VAR_10->work_queue, &VAR_10->stat_work);
}
