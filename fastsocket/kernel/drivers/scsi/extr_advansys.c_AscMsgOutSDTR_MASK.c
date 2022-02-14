
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uchar ;
struct TYPE_6__ {int max_sdtr_index; int iop_base; } ;
struct TYPE_5__ {int xfer_period; int req_ack_offset; int msg_req; int msg_len; int msg_type; } ;
typedef int PortAddr ;
typedef TYPE_1__ EXT_MSG ;
typedef TYPE_2__ ASC_DVC_VAR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int ,int ,int*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static uchar
FUNC_2(ASC_DVC_VAR *VAR_5, uchar VAR_6, uchar VAR_7)
{
 EXT_MSG VAR_8;
 uchar VAR_9;
 PortAddr VAR_10;

 VAR_10 = VAR_5->iop_base;
 VAR_8.msg_type = VAR_2;
 VAR_8.msg_len = VAR_4;
 VAR_8.msg_req = VAR_3;
 VAR_8.xfer_period = VAR_6;
 VAR_7 &= VAR_1;
 VAR_8.req_ack_offset = VAR_7;
 VAR_9 = FUNC_0(VAR_5, VAR_6);
 if (VAR_9 <= VAR_5->max_sdtr_index) {
  FUNC_1(VAR_10, VAR_0,
     (uchar *)&VAR_8,
     sizeof(EXT_MSG) >> 1);
  return ((VAR_9 << 4) | VAR_7);
 } else {
  VAR_8.req_ack_offset = 0;
  FUNC_1(VAR_10, VAR_0,
     (uchar *)&VAR_8,
     sizeof(EXT_MSG) >> 1);
  return 0;
 }
}
