
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ftdi {int kref; int respond_work; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int *,unsigned int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct usb_ftdi *VAR_1, unsigned int VAR_2)
{
 if (FUNC_1(VAR_0, &VAR_1->respond_work, VAR_2))
  FUNC_0(&VAR_1->kref);
}
