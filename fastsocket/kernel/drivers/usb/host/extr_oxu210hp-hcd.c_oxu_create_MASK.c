
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {unsigned long rsrc_start; unsigned long rsrc_len; int irq; int state; void* regs; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct oxu_hcd {int is_otg; } ;


 int VAR_0 ;
 struct usb_hcd* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct oxu_hcd* FUNC_1 (struct usb_hcd*) ;
 int VAR_9 ;
 int FUNC_2 (void*,int ,int) ;
 int FUNC_3 (struct usb_hcd*,int,int ) ;
 struct usb_hcd* FUNC_4 (int *,struct device*,char*) ;

__attribute__((used)) static struct usb_hcd *FUNC_5(struct platform_device *VAR_10,
    unsigned long VAR_11, unsigned long VAR_12,
    void *VAR_13, int VAR_14, int VAR_15)
{
 struct device *VAR_16 = &VAR_10->dev;

 struct usb_hcd *VAR_17;
 struct oxu_hcd *VAR_18;
 int VAR_19;


 FUNC_2(VAR_13 + (VAR_15 ? VAR_5 : VAR_6),
    VAR_7,
    VAR_3 | VAR_4 | VAR_8);

 VAR_17 = FUNC_4(&VAR_9, VAR_16,
    VAR_15 ? "oxu210hp_otg" : "oxu210hp_sph");
 if (!VAR_17)
  return FUNC_0(-VAR_0);

 VAR_17->rsrc_start = VAR_11;
 VAR_17->rsrc_len = VAR_12;
 VAR_17->regs = VAR_13;
 VAR_17->irq = VAR_14;
 VAR_17->state = VAR_1;

 VAR_18 = FUNC_1(VAR_17);
 VAR_18->is_otg = VAR_15;

 VAR_19 = FUNC_3(VAR_17, VAR_14, VAR_2);
 if (VAR_19 < 0)
  return FUNC_0(VAR_19);

 return VAR_17;
}
