
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_line6 {TYPE_1__* line6midi; } ;
struct usb_interface {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int midi_mask_transmit; } ;


 int FUNC_0 (char const*,int *,int) ;
 struct usb_interface* FUNC_1 (struct device*) ;
 struct usb_line6* FUNC_2 (struct usb_interface*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
        struct device_attribute *VAR_1,
        const char *VAR_2, size_t VAR_3)
{
 struct usb_interface *VAR_4 = FUNC_1(VAR_0);
 struct usb_line6 *VAR_5 = FUNC_2(VAR_4);
 int VAR_6 = FUNC_0(VAR_2, ((void*)0), 10);
 VAR_5->line6midi->midi_mask_transmit = VAR_6;
 return VAR_3;
}
