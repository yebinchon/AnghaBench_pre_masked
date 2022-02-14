
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ftdi {int kref; int respond_work; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct usb_ftdi *VAR_1)
{
        if (FUNC_0(&VAR_1->respond_work))
                FUNC_1(&VAR_1->kref, VAR_0);
}
