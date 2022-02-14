
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ftdi {int kref; int status_work; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int *,unsigned int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct usb_ftdi *VAR_2, unsigned int VAR_3)
{
 if (!FUNC_1(VAR_1, &VAR_2->status_work, VAR_3))
  FUNC_0(&VAR_2->kref, VAR_0);
}
