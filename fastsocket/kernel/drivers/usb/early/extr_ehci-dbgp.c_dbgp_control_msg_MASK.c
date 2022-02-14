
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct usb_ctrlrequest {int bRequestType; int bRequest; void* wLength; void* wIndex; void* wValue; } ;
typedef int req ;
struct TYPE_2__ {int pids; int address; int control; } ;


 int FUNC_0 (unsigned int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (unsigned int,int ,void*,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct usb_ctrlrequest*,int) ;
 int FUNC_6 (int ) ;
 TYPE_1__* VAR_6 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(unsigned VAR_7, int VAR_8,
 int VAR_9, int VAR_10, int VAR_11, void *VAR_12, int VAR_13)
{
 u32 VAR_14, VAR_15, VAR_16;
 struct usb_ctrlrequest VAR_17;
 int VAR_18;
 int VAR_19;

 VAR_18 = (VAR_8 & VAR_3) != 0;
 if (VAR_13 > (VAR_18 ? VAR_1:0))
  return -1;


 VAR_17.bRequestType = VAR_8;
 VAR_17.bRequest = VAR_9;
 VAR_17.wValue = FUNC_2(VAR_10);
 VAR_17.wIndex = FUNC_2(VAR_11);
 VAR_17.wLength = FUNC_2(VAR_13);

 VAR_14 = FUNC_1(VAR_4, VAR_5);
 VAR_15 = FUNC_0(VAR_7, 0);

 VAR_16 = FUNC_7(&VAR_6->control);
 VAR_16 = FUNC_4(VAR_16, sizeof(VAR_17));
 VAR_16 |= VAR_2;
 VAR_16 |= VAR_0;


 FUNC_5(&VAR_17, sizeof(VAR_17));
 FUNC_8(VAR_15, &VAR_6->address);
 FUNC_8(VAR_14, &VAR_6->pids);
 VAR_19 = FUNC_6(VAR_16);
 if (VAR_19 < 0)
  return VAR_19;


 return FUNC_3(VAR_7, 0, VAR_12, VAR_13);
}
