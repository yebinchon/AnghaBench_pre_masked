
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_cdc_ncm_nth16 {void* wNdpIndex; } ;
struct usb_cdc_ncm_ndp16 {scalar_t__ dwSignature; void* wLength; void* wNextNdpIndex; } ;
struct usb_cdc_ncm_dpe16 {int dummy; } ;
struct sk_buff {size_t len; scalar_t__ data; } ;
struct cdc_ncm_ctx {size_t tx_max; int tx_ndp_modulus; } ;
typedef scalar_t__ __le32 ;


 size_t VAR_0 ;
 int FUNC_0 (struct sk_buff*,int ,int ,size_t) ;
 void* FUNC_1 (int) ;
 size_t FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (int ,int ,size_t) ;
 int FUNC_4 (struct sk_buff*,size_t) ;

__attribute__((used)) static struct usb_cdc_ncm_ndp16 *FUNC_5(struct cdc_ncm_ctx *VAR_1, struct sk_buff *VAR_2, __le32 VAR_3, size_t VAR_4)
{
 struct usb_cdc_ncm_ndp16 *VAR_5 = ((void*)0);
 struct usb_cdc_ncm_nth16 *VAR_6 = (void *)VAR_2->data;
 size_t VAR_7 = FUNC_2(VAR_6->wNdpIndex);


 while (VAR_7) {
  VAR_5 = (struct usb_cdc_ncm_ndp16 *)(VAR_2->data + VAR_7);
  if (VAR_5->dwSignature == VAR_3)
   return VAR_5;
  VAR_7 = FUNC_2(VAR_5->wNextNdpIndex);
 }


 FUNC_0(VAR_2, VAR_1->tx_ndp_modulus, 0, VAR_1->tx_max);


 if ((VAR_1->tx_max - VAR_2->len - VAR_4) < VAR_0)
  return ((void*)0);


 if (VAR_5)
  VAR_5->wNextNdpIndex = FUNC_1(VAR_2->len);
 else
  VAR_6->wNdpIndex = FUNC_1(VAR_2->len);


 VAR_5 = (struct usb_cdc_ncm_ndp16 *)FUNC_3(FUNC_4(VAR_2, VAR_0), 0, VAR_0);
 VAR_5->dwSignature = VAR_3;
 VAR_5->wLength = FUNC_1(sizeof(struct usb_cdc_ncm_ndp16) + sizeof(struct usb_cdc_ncm_dpe16));
 return VAR_5;
}
