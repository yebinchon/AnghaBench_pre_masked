
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int req_lim_delta; unsigned char status; int* data; scalar_t__ sense_data_len; int flags; scalar_t__ resp_data_len; scalar_t__ data_out_res_cnt; scalar_t__ data_in_res_cnt; int tag; int opcode; } ;
struct TYPE_4__ {TYPE_1__ rsp; } ;
union viosrp_iu {TYPE_2__ srp; } ;
typedef int uint8_t ;
typedef int uint64_t ;
struct srp_rsp {int dummy; } ;
struct scsi_cmnd {int sense_buffer; } ;
struct iu_entry {int flags; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int*,int ,scalar_t__) ;
 int FUNC_1 (union viosrp_iu*,int ,int) ;
 int FUNC_2 (struct iu_entry*,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 union viosrp_iu* FUNC_4 (struct iu_entry*) ;

__attribute__((used)) static int FUNC_5(struct iu_entry *VAR_11, struct scsi_cmnd *VAR_12,
      unsigned char VAR_13, unsigned char VAR_14)
{
 union viosrp_iu *VAR_15 = FUNC_4(VAR_11);
 uint64_t VAR_16 = VAR_15->srp.rsp.tag;


 if (FUNC_3(VAR_10, &VAR_11->flags) && (VAR_13 == VAR_0))
  VAR_13 = 0x10;

 FUNC_1(VAR_15, 0, sizeof(struct srp_rsp));
 VAR_15->srp.rsp.opcode = VAR_3;
 VAR_15->srp.rsp.req_lim_delta = 1;
 VAR_15->srp.rsp.tag = VAR_16;

 if (FUNC_3(VAR_9, &VAR_11->flags))
  VAR_15->srp.rsp.flags |= VAR_4;

 VAR_15->srp.rsp.data_in_res_cnt = 0;
 VAR_15->srp.rsp.data_out_res_cnt = 0;

 VAR_15->srp.rsp.flags &= ~VAR_5;

 VAR_15->srp.rsp.resp_data_len = 0;
 VAR_15->srp.rsp.status = VAR_13;
 if (VAR_13) {
  uint8_t *VAR_17 = VAR_15->srp.rsp.data;

  if (VAR_12) {
   VAR_15->srp.rsp.flags |= VAR_6;
   VAR_15->srp.rsp.sense_data_len = VAR_2;
   FUNC_0(VAR_17, VAR_12->sense_buffer, VAR_2);
  } else {
   VAR_15->srp.rsp.status = VAR_1;
   VAR_15->srp.rsp.flags |= VAR_6;
   VAR_15->srp.rsp.sense_data_len = VAR_7;


   VAR_17[0] = (0x1 << 7 | 0x70);

   VAR_17[2] = VAR_13;

   VAR_17[7] = 0xa;

   VAR_17[12] = VAR_14;
  }
 }

 FUNC_2(VAR_11, sizeof(VAR_15->srp.rsp) + VAR_7,
  VAR_8);

 return 0;
}
