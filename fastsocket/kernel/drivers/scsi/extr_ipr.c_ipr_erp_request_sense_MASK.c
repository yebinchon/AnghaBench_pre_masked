
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int ioasc; } ;
struct TYPE_7__ {TYPE_2__ hdr; } ;
struct TYPE_8__ {TYPE_3__ ioasa; } ;
struct ipr_cmd_pkt {int timeout; int flags_hi; int * cdb; int request_type; } ;
struct TYPE_5__ {struct ipr_cmd_pkt cmd_pkt; } ;
struct ipr_cmnd {int sense_buffer_dma; TYPE_4__ s; TYPE_1__ ioarcb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ipr_cmnd*,int (*) (struct ipr_cmnd*),int ,int) ;
 int FUNC_4 (struct ipr_cmnd*) ;
 int FUNC_5 (struct ipr_cmnd*,int ,int ,int ) ;
 int FUNC_6 (struct ipr_cmnd*) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_7(struct ipr_cmnd *VAR_9)
{
 struct ipr_cmd_pkt *VAR_10 = &VAR_9->ioarcb.cmd_pkt;
 u32 VAR_11 = FUNC_1(VAR_9->s.ioasa.hdr.ioasc);

 if (FUNC_0(VAR_11) > 0) {
  FUNC_4(VAR_9);
  return;
 }

 FUNC_6(VAR_9);

 VAR_10->request_type = VAR_5;
 VAR_10->cdb[0] = VAR_6;
 VAR_10->cdb[4] = VAR_7;
 VAR_10->flags_hi |= VAR_2;
 VAR_10->flags_hi |= VAR_1;
 VAR_10->timeout = FUNC_2(VAR_4 / VAR_0);

 FUNC_5(VAR_9, VAR_9->sense_buffer_dma,
         VAR_7, VAR_3);

 FUNC_3(VAR_9, FUNC_4, VAR_8,
     VAR_4 * 2);
}
