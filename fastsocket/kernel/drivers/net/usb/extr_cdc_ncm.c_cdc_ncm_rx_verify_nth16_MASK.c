
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_cdc_ncm_nth16 {int wNdpIndex; int wSequence; int wBlockLength; int dwSignature; } ;
struct usb_cdc_ncm_ndp16 {int dummy; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct cdc_ncm_ctx {int rx_max; int rx_seq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;

int FUNC_3(struct cdc_ncm_ctx *VAR_2, struct sk_buff *VAR_3)
{
 struct usb_cdc_ncm_nth16 *VAR_4;
 int VAR_5;
 int VAR_6 = -VAR_0;

 if (VAR_2 == ((void*)0))
  goto error;

 if (VAR_3->len < (sizeof(struct usb_cdc_ncm_nth16) +
     sizeof(struct usb_cdc_ncm_ndp16))) {
  FUNC_2("frame too short\n");
  goto error;
 }

 VAR_4 = (struct usb_cdc_ncm_nth16 *)VAR_3->data;

 if (FUNC_1(VAR_4->dwSignature) != VAR_1) {
  FUNC_2("invalid NTH16 signature <%u>\n",
     FUNC_1(VAR_4->dwSignature));
  goto error;
 }

 VAR_5 = FUNC_0(VAR_4->wBlockLength);
 if (VAR_5 > VAR_2->rx_max) {
  FUNC_2("unsupported NTB block length %u/%u\n", VAR_5,
        VAR_2->rx_max);
  goto error;
 }

 if ((VAR_2->rx_seq + 1) != FUNC_0(VAR_4->wSequence) &&
  (VAR_2->rx_seq || FUNC_0(VAR_4->wSequence)) &&
  !((VAR_2->rx_seq == 0xffff) && !FUNC_0(VAR_4->wSequence))) {
  FUNC_2("sequence number glitch prev=%d curr=%d\n",
    VAR_2->rx_seq, FUNC_0(VAR_4->wSequence));
 }
 VAR_2->rx_seq = FUNC_0(VAR_4->wSequence);

 VAR_6 = FUNC_0(VAR_4->wNdpIndex);
error:
 return VAR_6;
}
