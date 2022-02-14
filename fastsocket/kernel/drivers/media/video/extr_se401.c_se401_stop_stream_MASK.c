
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_se401 {TYPE_2__* scratch; TYPE_1__* sbuf; int ** urb; scalar_t__ streaming; int dev; } ;
struct TYPE_4__ {int * data; } ;
struct TYPE_3__ {int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,struct usb_se401*,int ,int ,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct usb_se401 *VAR_5)
{
 int VAR_6;

 if (!VAR_5->streaming || !VAR_5->dev)
  return 1;

 VAR_5->streaming = 0;

 FUNC_1(1, VAR_5, VAR_4, 0, ((void*)0), 0);

 FUNC_1(1, VAR_5, VAR_3, 0, ((void*)0), 0);
 FUNC_1(1, VAR_5, VAR_2, 0, ((void*)0), 0);

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  if (VAR_5->urb[VAR_6]) {
   FUNC_3(VAR_5->urb[VAR_6]);
   FUNC_2(VAR_5->urb[VAR_6]);
   VAR_5->urb[VAR_6] = ((void*)0);
   FUNC_0(VAR_5->sbuf[VAR_6].data);
  }
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  FUNC_0(VAR_5->scratch[VAR_6].data);
  VAR_5->scratch[VAR_6].data = ((void*)0);
 }

 return 0;
}
