
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wusbhc {int dummy; } ;
struct wusb_port {int change; int status; struct wusb_dev* wusb_dev; } ;
struct wusb_dev {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct wusbhc*,struct wusb_dev*) ;
 struct wusb_port* FUNC_1 (struct wusbhc*,int ) ;

__attribute__((used)) static int FUNC_2(struct wusbhc *VAR_6, u8 VAR_7)
{
 int VAR_8 = 0;
 struct wusb_port *VAR_9 = FUNC_1(VAR_6, VAR_7);
 struct wusb_dev *VAR_10 = VAR_9->wusb_dev;

 if (VAR_10 == ((void*)0))
  return -VAR_0;

 VAR_9->status |= VAR_4;
 VAR_9->change |= VAR_2;

 if (VAR_10->addr & VAR_5)
  VAR_8 = 0;
 else
  VAR_8 = FUNC_0(VAR_6, VAR_10);

 VAR_9->status &= ~VAR_4;
 VAR_9->status |= VAR_3;
 VAR_9->change |= VAR_2 | VAR_1;

 return VAR_8;
}
