
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct synthhid_protocol_request {int dummy; } ;
struct pipe_prt_msg {int dummy; } ;
struct TYPE_8__ {int approved; } ;
struct TYPE_6__ {int version; } ;
struct TYPE_5__ {int size; int type; } ;
struct TYPE_7__ {TYPE_2__ version_requested; TYPE_1__ header; } ;
struct mousevsc_prt_msg {int size; TYPE_4__ response; TYPE_3__ request; int type; } ;
struct mousevsc_dev {int dev_info_status; int wait_event; struct mousevsc_prt_msg protocol_resp; struct mousevsc_prt_msg protocol_req; } ;
struct hv_device {int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct mousevsc_dev* FUNC_0 (struct hv_device*) ;
 int FUNC_1 (struct mousevsc_prt_msg*,int ,int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,struct mousevsc_prt_msg*,int,unsigned long,int ,int ) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(struct hv_device *VAR_8)
{
 int VAR_9 = 0;
 int VAR_10;
 struct mousevsc_dev *VAR_11 = FUNC_0(VAR_8);
 struct mousevsc_prt_msg *VAR_12;
 struct mousevsc_prt_msg *VAR_13;

 VAR_12 = &VAR_11->protocol_req;
 FUNC_1(VAR_12, 0, sizeof(struct mousevsc_prt_msg));

 VAR_12->type = VAR_3;
 VAR_12->size = sizeof(struct synthhid_protocol_request);
 VAR_12->request.header.type = VAR_5;
 VAR_12->request.header.size = sizeof(unsigned int);
 VAR_12->request.version_requested.version = VAR_4;

 VAR_9 = FUNC_3(VAR_8->channel, VAR_12,
    sizeof(struct pipe_prt_msg) -
    sizeof(unsigned char) +
    sizeof(struct synthhid_protocol_request),
    (unsigned long)VAR_12,
    VAR_7,
    VAR_6);
 if (VAR_9)
  goto cleanup;

 VAR_10 = FUNC_4(&VAR_11->wait_event, 5*VAR_2);
 if (!VAR_10) {
  VAR_9 = -VAR_1;
  goto cleanup;
 }

 VAR_13 = &VAR_11->protocol_resp;

 if (!VAR_13->response.approved) {
  FUNC_2("synthhid protocol request failed (version %d)\n",
         VAR_4);
  VAR_9 = -VAR_0;
  goto cleanup;
 }

 VAR_10 = FUNC_4(&VAR_11->wait_event, 5*VAR_2);
 if (!VAR_10) {
  VAR_9 = -VAR_1;
  goto cleanup;
 }





 VAR_9 = VAR_11->dev_info_status;

cleanup:
 return VAR_9;
}
