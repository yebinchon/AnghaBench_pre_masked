
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct urb {int transfer_buffer_length; int actual_length; int * transfer_buffer; scalar_t__ status; struct pd_dvb_adapter* context; } ;
struct dvb_demux {int dummy; } ;
struct pd_dvb_adapter {int is_streaming; struct dvb_demux demux; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dvb_demux*,int *,int) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (int *,char*,int) ;
 scalar_t__ FUNC_3 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_4(struct urb *VAR_2)
{
 struct pd_dvb_adapter *VAR_3 = VAR_2->context;
 int VAR_4 = VAR_2->transfer_buffer_length;
 struct dvb_demux *VAR_5 = &VAR_3->demux;
 s32 VAR_6;

 if (!VAR_3->is_streaming || VAR_2->status) {
  if (VAR_2->status == -VAR_0)
   goto resend;
  return;
 }

 if (VAR_2->actual_length == VAR_4)
  FUNC_0(VAR_5, VAR_2->transfer_buffer, VAR_4);
 else if (VAR_2->actual_length == VAR_4 - 4) {
  int VAR_7;
  u8 *VAR_8 = VAR_2->transfer_buffer;





  for (VAR_7 = 456; VAR_7 < VAR_4; VAR_7 += 512) {
   if (!FUNC_2(VAR_8 + VAR_7, "DVHS", 4)) {
    FUNC_0(VAR_5, VAR_8, VAR_7);
    if (VAR_4 > VAR_7 + 52 + 4) {

     VAR_8 += VAR_7 + 52;
     VAR_4 -= VAR_7 + 52 + 4;
     FUNC_0(VAR_5, VAR_8, VAR_4);
    }
    break;
   }
  }
 }

resend:
 VAR_6 = FUNC_3(VAR_2, VAR_1);
 if (VAR_6)
  FUNC_1(" usb_submit_urb failed: error %d", VAR_6);
}
