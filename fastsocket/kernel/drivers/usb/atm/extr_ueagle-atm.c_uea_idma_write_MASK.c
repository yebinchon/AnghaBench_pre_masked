
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct uea_softc {int usb_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct uea_softc*) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (void const*,int,int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,int ,int *,int,int*,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct uea_softc *VAR_5, const void *VAR_6, u32 VAR_7)
{
 int VAR_8 = -VAR_2;
 u8 *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(VAR_6, VAR_7, VAR_3);
 if (!VAR_9) {
  FUNC_3(FUNC_0(VAR_5), "can't allocate xfer_buff\n");
  return VAR_8;
 }

 VAR_8 = FUNC_4(VAR_5->usb_dev,
    FUNC_5(VAR_5->usb_dev, VAR_4),
    VAR_9, VAR_7, &VAR_10, VAR_0);

 FUNC_1(VAR_9);
 if (VAR_8 < 0)
  return VAR_8;
 if (VAR_7 != VAR_10) {
  FUNC_3(FUNC_0(VAR_5), "size != bytes_read %d %d\n", VAR_7,
         VAR_10);
  return -VAR_1;
 }

 return 0;
}
