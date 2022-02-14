
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_cdc_ncm_ndp16 {int wLength; int dwSignature; } ;
struct usb_cdc_ncm_dpe16 {int dummy; } ;
struct sk_buff {int len; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;

int FUNC_3(struct sk_buff *VAR_2, int VAR_3)
{
 struct usb_cdc_ncm_ndp16 *VAR_4;
 int VAR_5 = -VAR_0;

 if ((VAR_3 + sizeof(struct usb_cdc_ncm_ndp16)) > VAR_2->len) {
  FUNC_2("invalid NDP offset  <%u>\n", VAR_3);
  goto error;
 }
 VAR_4 = (struct usb_cdc_ncm_ndp16 *)(VAR_2->data + VAR_3);

 if (FUNC_0(VAR_4->wLength) < VAR_1) {
  FUNC_2("invalid DPT16 length <%u>\n",
     FUNC_1(VAR_4->dwSignature));
  goto error;
 }

 VAR_5 = ((FUNC_0(VAR_4->wLength) -
     sizeof(struct usb_cdc_ncm_ndp16)) /
     sizeof(struct usb_cdc_ncm_dpe16));
 VAR_5--;

 if ((sizeof(struct usb_cdc_ncm_ndp16) + VAR_5 * (sizeof(struct usb_cdc_ncm_dpe16))) >
        VAR_2->len) {
  FUNC_2("Invalid nframes = %d\n", VAR_5);
  VAR_5 = -VAR_0;
 }

error:
 return VAR_5;
}
