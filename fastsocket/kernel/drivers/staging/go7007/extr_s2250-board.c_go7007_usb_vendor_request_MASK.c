
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct go7007_usb {int usbdev; } ;
struct go7007 {struct go7007_usb* hpi_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int,int ,int ,void*,int,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct go7007 *VAR_3, u16 VAR_4,
 u16 VAR_5, u16 VAR_6, void *VAR_7, int VAR_8, int VAR_9)
{
 struct go7007_usb *VAR_10 = VAR_3->hpi_context;
 int VAR_11 = 5000;

 if (VAR_9) {
  return FUNC_0(VAR_10->usbdev,
    FUNC_1(VAR_10->usbdev, 0), VAR_4,
    VAR_2 | VAR_1 | VAR_0,
    VAR_5, VAR_6, VAR_7, VAR_8, VAR_11);
 } else {
  return FUNC_0(VAR_10->usbdev,
    FUNC_2(VAR_10->usbdev, 0), VAR_4,
    VAR_2 | VAR_1,
    VAR_5, VAR_6, VAR_7, VAR_8, VAR_11);
 }
}
