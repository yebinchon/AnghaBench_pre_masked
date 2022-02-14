
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct usb_ss_ep_comp_descriptor {scalar_t__ bDescriptorType; int bMaxBurst; int bmAttributes; int wBytesPerInterval; scalar_t__ bLength; } ;
struct TYPE_7__ {int bEndpointAddress; int wMaxPacketSize; } ;
struct usb_host_endpoint {TYPE_2__ desc; TYPE_1__* ss_ep_comp; } ;
struct device {int dummy; } ;
struct TYPE_6__ {unsigned char* extra; int extralen; struct usb_ss_ep_comp_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,int,int ,char*) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (unsigned char*,int,int ,int ,int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct usb_ss_ep_comp_descriptor*,struct usb_ss_ep_comp_descriptor*,int ) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_4, int VAR_5,
  int VAR_6, int VAR_7, struct usb_host_endpoint *VAR_8,
  int VAR_9, unsigned char *VAR_10, int VAR_11)
{
 unsigned char *VAR_12 = VAR_10;
 struct usb_ss_ep_comp_descriptor *VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;

 VAR_13 = (struct usb_ss_ep_comp_descriptor *) VAR_10;
 if (VAR_13->bDescriptorType != VAR_2) {
  FUNC_2(VAR_4, "No SuperSpeed endpoint companion for config %d "
    " interface %d altsetting %d ep %d: "
    "using minimum values\n",
    VAR_5, VAR_6, VAR_7, VAR_8->desc.bEndpointAddress);





  return 0;
 }
 FUNC_5(&VAR_8->ss_ep_comp->desc, VAR_13, VAR_3);
 VAR_13 = &VAR_8->ss_ep_comp->desc;
 VAR_10 += VAR_13->bLength;
 VAR_11 -= VAR_13->bLength;


 VAR_8->ss_ep_comp->extra = VAR_10;
 VAR_17 = FUNC_3(VAR_10, VAR_11, VAR_0,
   VAR_1, &VAR_15);
 VAR_8->ss_ep_comp->extralen = VAR_17;
 VAR_10 += VAR_17;
 VAR_11 -= VAR_17;
 VAR_14 = VAR_10 - VAR_12;
 if (VAR_15 > 0)
  FUNC_1(VAR_4, "skipped %d descriptor%s after %s\n",
    VAR_15, FUNC_6(VAR_15),
    "SuperSpeed endpoint companion");


 if (FUNC_8(&VAR_8->desc) && VAR_13->bMaxBurst != 0) {
  FUNC_2(VAR_4, "Control endpoint with bMaxBurst = %d in "
    "config %d interface %d altsetting %d ep %d: "
    "setting to zero\n", VAR_13->bMaxBurst,
    VAR_5, VAR_6, VAR_7, VAR_8->desc.bEndpointAddress);
  VAR_13->bMaxBurst = 0;
 }
 if (VAR_13->bMaxBurst > 15) {
  FUNC_2(VAR_4, "Endpoint with bMaxBurst = %d in "
    "config %d interface %d altsetting %d ep %d: "
    "setting to 15\n", VAR_13->bMaxBurst,
    VAR_5, VAR_6, VAR_7, VAR_8->desc.bEndpointAddress);
  VAR_13->bMaxBurst = 15;
 }
 if ((FUNC_8(&VAR_8->desc) || FUNC_9(&VAR_8->desc))
   && VAR_13->bmAttributes != 0) {
  FUNC_2(VAR_4, "%s endpoint with bmAttributes = %d in "
    "config %d interface %d altsetting %d ep %d: "
    "setting to zero\n",
    FUNC_8(&VAR_8->desc) ? "Control" : "Bulk",
    VAR_13->bmAttributes,
    VAR_5, VAR_6, VAR_7, VAR_8->desc.bEndpointAddress);
  VAR_13->bmAttributes = 0;
 }
 if (FUNC_7(&VAR_8->desc) && VAR_13->bmAttributes > 16) {
  FUNC_2(VAR_4, "Bulk endpoint with more than 65536 streams in "
    "config %d interface %d altsetting %d ep %d: "
    "setting to max\n",
    VAR_5, VAR_6, VAR_7, VAR_8->desc.bEndpointAddress);
  VAR_13->bmAttributes = 16;
 }
 if (FUNC_10(&VAR_8->desc) && VAR_13->bmAttributes > 2) {
  FUNC_2(VAR_4, "Isoc endpoint has Mult of %d in "
    "config %d interface %d altsetting %d ep %d: "
    "setting to 3\n", VAR_13->bmAttributes + 1,
    VAR_5, VAR_6, VAR_7, VAR_8->desc.bEndpointAddress);
  VAR_13->bmAttributes = 2;
 }
 if (FUNC_10(&VAR_8->desc)) {
  VAR_16 = (VAR_13->bMaxBurst + 1) * (VAR_13->bmAttributes + 1) *
   FUNC_4(VAR_8->desc.wMaxPacketSize);
 } else if (FUNC_9(&VAR_8->desc)) {
  VAR_16 = FUNC_4(VAR_8->desc.wMaxPacketSize) *
   (VAR_13->bMaxBurst + 1);
 } else {
  goto valid;
 }
 if (FUNC_4(VAR_13->wBytesPerInterval) > VAR_16) {
  FUNC_2(VAR_4, "%s endpoint with wBytesPerInterval of %d in "
    "config %d interface %d altsetting %d ep %d: "
    "setting to %d\n",
    FUNC_10(&VAR_8->desc) ? "Isoc" : "Int",
    FUNC_4(VAR_13->wBytesPerInterval),
    VAR_5, VAR_6, VAR_7, VAR_8->desc.bEndpointAddress,
    VAR_16);
  VAR_13->wBytesPerInterval = FUNC_0(VAR_16);
 }
valid:
 return VAR_14;
}
