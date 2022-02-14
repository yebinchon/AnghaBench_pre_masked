
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union c2wr {int dummy; } c2wr ;
struct TYPE_4__ {unsigned long context; } ;
struct c2wr_rnic_setconfig_req {int data; int option; int rnic_handle; TYPE_2__ hdr; } ;
struct c2wr_rnic_setconfig_rep {int dummy; } ;
struct c2_vq_req {scalar_t__ reply_msg; } ;
struct c2_netaddr {scalar_t__ mtu; void* netmask; void* ip_addr; } ;
struct TYPE_3__ {int msg_size; } ;
struct c2_dev {int adapter_handle; TYPE_1__ req_vq; } ;
typedef void* __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct c2wr_rnic_setconfig_rep*) ;
 int FUNC_1 (struct c2wr_rnic_setconfig_req*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct c2wr_rnic_setconfig_req*) ;
 struct c2wr_rnic_setconfig_req* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,struct c2_netaddr*,int) ;
 int FUNC_6 (struct c2_dev*,struct c2wr_rnic_setconfig_rep*) ;
 struct c2_vq_req* FUNC_7 (struct c2_dev*) ;
 int FUNC_8 (struct c2_dev*,struct c2_vq_req*) ;
 int FUNC_9 (struct c2_dev*,struct c2_vq_req*) ;
 int FUNC_10 (struct c2_dev*,struct c2_vq_req*) ;
 int FUNC_11 (struct c2_dev*,union c2wr*) ;
 int FUNC_12 (struct c2_dev*,struct c2_vq_req*) ;

int FUNC_13(struct c2_dev *VAR_4, __be32 VAR_5, __be32 VAR_6)
{
 struct c2_vq_req *VAR_7;
 struct c2wr_rnic_setconfig_req *VAR_8;
 struct c2wr_rnic_setconfig_rep *VAR_9;
 struct c2_netaddr VAR_10;
 int VAR_11, VAR_12;

 VAR_7 = FUNC_7(VAR_4);
 if (!VAR_7)
  return -VAR_2;

 VAR_12 = sizeof(struct c2_netaddr);
 VAR_8 = FUNC_4(VAR_4->req_vq.msg_size, VAR_3);
 if (!VAR_8) {
  VAR_11 = -VAR_2;
  goto bail0;
 }

 FUNC_1(VAR_8, VAR_1);
 VAR_8->hdr.context = (unsigned long) VAR_7;
 VAR_8->rnic_handle = VAR_4->adapter_handle;
 VAR_8->option = FUNC_2(VAR_0);

 VAR_10.ip_addr = VAR_5;
 VAR_10.netmask = VAR_6;
 VAR_10.mtu = 0;

 FUNC_5(VAR_8->data, &VAR_10, VAR_12);

 FUNC_9(VAR_4, VAR_7);

 VAR_11 = FUNC_11(VAR_4, (union c2wr *) VAR_8);
 if (VAR_11) {
  FUNC_10(VAR_4, VAR_7);
  goto bail1;
 }

 VAR_11 = FUNC_12(VAR_4, VAR_7);
 if (VAR_11)
  goto bail1;

 VAR_9 =
     (struct c2wr_rnic_setconfig_rep *) (unsigned long) (VAR_7->reply_msg);
 if (!VAR_9) {
  VAR_11 = -VAR_2;
  goto bail1;
 }

 VAR_11 = FUNC_0(VAR_9);
 FUNC_6(VAR_4, VAR_9);

      bail1:
 FUNC_3(VAR_8);
      bail0:
 FUNC_8(VAR_4, VAR_7);
 return VAR_11;
}
