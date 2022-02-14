
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct wb35_reg {int SyncIoPause; scalar_t__ EP0vm_state; } ;
struct TYPE_2__ {int udev; } ;
struct hw_data {int SurpriseRemove; TYPE_1__ WbUsb; struct wb35_reg reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct hw_data*) ;
 int FUNC_1 (struct hw_data*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,int,int,int,int ,int *,int,int) ;
 int FUNC_6 (int ,int ) ;

unsigned char
FUNC_7( struct hw_data * VAR_6, u16 VAR_7, u32 * VAR_8 )
{
 struct wb35_reg *VAR_9 = &VAR_6->reg;
 u32 * VAR_10 = VAR_8;
 int VAR_11 = -1;


 if (VAR_6->SurpriseRemove)
  return 0;



 VAR_9->SyncIoPause = 1;


 while (VAR_9->EP0vm_state != VAR_5)
  FUNC_3(10);

 VAR_9->EP0vm_state = VAR_4;
 VAR_11 = FUNC_5( VAR_6->WbUsb.udev,
          FUNC_6(VAR_6->WbUsb.udev, 0),
          0x01, VAR_3|VAR_2|VAR_1,
          0x0, VAR_7, VAR_10, 4, VAR_0*100 );

 *VAR_8 = FUNC_2(*VAR_10);

 VAR_9->EP0vm_state = VAR_5;

 FUNC_1( VAR_6, VAR_7, *VAR_8 );
 VAR_9->SyncIoPause = 0;

 FUNC_0( VAR_6 );

 if (VAR_11 < 0) {




  VAR_6->SurpriseRemove = 1;
  return 0;
 }

 return 1;
}
