
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kaweth_device {scalar_t__ packet_filter_bitmap; int scratch; int dev; } ;
typedef scalar_t__ __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct kaweth_device*,int ,int ,int,scalar_t__,int ,void*,int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct kaweth_device *VAR_5)
{
 int VAR_6;
 __u16 VAR_7 = VAR_5->packet_filter_bitmap;

 VAR_5->packet_filter_bitmap = 0;
 if (VAR_7 == 0)
  return;

 if (FUNC_2())
  return;

 VAR_6 = FUNC_3(VAR_5,
    FUNC_4(VAR_5->dev, 0),
    VAR_0,
    VAR_4 | VAR_2 | VAR_3,
    VAR_7,
    0,
    (void *)&VAR_5->scratch,
    0,
    VAR_1);

 if(VAR_6 < 0) {
  FUNC_1("Failed to set Rx mode: %d", VAR_6);
 }
 else {
  FUNC_0("Set Rx mode to %d", VAR_7);
 }
}
