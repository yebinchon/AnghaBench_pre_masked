
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union c2wr {int dummy; } c2wr ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_4__ {unsigned long context; } ;
struct c2wr_nsmr_pbl_req {int * paddrs; TYPE_2__ hdr; void* flags; void* addrs_length; int stag_index; int rnic_handle; } ;
struct c2wr_nsmr_pbl_rep {int dummy; } ;
struct c2_vq_req {scalar_t__ reply_msg; } ;
struct TYPE_3__ {int msg_size; } ;
struct c2_dev {int adapter_handle; TYPE_1__ req_vq; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;


 int FUNC_0 (struct c2wr_nsmr_pbl_rep*) ;
 int FUNC_1 (struct c2wr_nsmr_pbl_req*,int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct c2wr_nsmr_pbl_req*) ;
 struct c2wr_nsmr_pbl_req* FUNC_5 (int,int ) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (struct c2_dev*,struct c2wr_nsmr_pbl_rep*) ;
 int FUNC_8 (struct c2_dev*,struct c2_vq_req*) ;
 int FUNC_9 (struct c2_dev*,struct c2_vq_req*) ;
 int FUNC_10 (struct c2_dev*,union c2wr*) ;
 int FUNC_11 (struct c2_dev*,struct c2_vq_req*) ;

__attribute__((used)) static int
FUNC_12(struct c2_dev *VAR_6, __be32 VAR_7,
    unsigned long VAR_8, u32 VAR_9,
    struct c2_vq_req *VAR_10, int VAR_11)
{
 u32 VAR_12;
 u32 VAR_13;
 struct c2wr_nsmr_pbl_req *VAR_14;
 struct c2wr_nsmr_pbl_rep *VAR_15;
  int VAR_16, VAR_17, VAR_18, VAR_19;

 switch (VAR_11) {
 case 128:
  VAR_17 = 1;
  break;
 case 129:
  VAR_17 = 0;
  break;
 default:
  return -VAR_1;
  break;
 }

 VAR_12 = (VAR_6->req_vq.msg_size -
       sizeof(struct c2wr_nsmr_pbl_req)) / sizeof(u64);
 VAR_14 = FUNC_5(VAR_6->req_vq.msg_size, VAR_3);
 if (!VAR_14) {
  return -VAR_2;
 }
 FUNC_1(VAR_14, VAR_0);






 VAR_14->hdr.context = 0;
 VAR_14->rnic_handle = VAR_6->adapter_handle;
 VAR_14->stag_index = VAR_7;
 VAR_14->flags = 0;
 VAR_18 = 0;
 while (VAR_9) {
  VAR_13 = FUNC_6(VAR_12, VAR_9);
  VAR_14->addrs_length = FUNC_2(VAR_13);






  if (VAR_13 == VAR_9) {




   FUNC_8(VAR_6, VAR_10);
   VAR_14->flags = FUNC_2(VAR_4);






   VAR_14->hdr.context = (unsigned long) VAR_10;
  }
  for (VAR_19 = 0; VAR_19 < VAR_13; VAR_19++) {
   if (VAR_17) {
    VAR_8 += VAR_5;
   } else {
     VAR_14->paddrs[VAR_19] =
        FUNC_3(((u64 *)VAR_8)[VAR_18 + VAR_19]);
   }
  }




  VAR_16 = FUNC_10(VAR_6, (union c2wr *) VAR_14);
  if (VAR_16) {
   if (VAR_13 <= VAR_12) {
    FUNC_9(VAR_6, VAR_10);
   }
   goto bail0;
  }
  VAR_9 -= VAR_13;
  VAR_18 += VAR_13;
 }




 VAR_16 = FUNC_11(VAR_6, VAR_10);
 if (VAR_16) {
  goto bail0;
 }




 VAR_15 = (struct c2wr_nsmr_pbl_rep *) (unsigned long) VAR_10->reply_msg;
 if (!VAR_15) {
  VAR_16 = -VAR_2;
  goto bail0;
 }

 VAR_16 = FUNC_0(VAR_15);

 FUNC_7(VAR_6, VAR_15);
      bail0:
 FUNC_4(VAR_14);
 return VAR_16;
}
