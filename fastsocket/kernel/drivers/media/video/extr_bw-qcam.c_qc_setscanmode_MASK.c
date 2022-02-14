
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcam_device {int mode; int transfer_scale; int bpp; int port_mode; int status; } ;



 int VAR_0 ;

 int VAR_1 ;


__attribute__((used)) static int FUNC_0(struct qcam_device *VAR_2)
{
 int VAR_3 = VAR_2->mode;

 switch (VAR_2->transfer_scale)
 {
  case 1:
   VAR_2->mode = 0;
   break;
  case 2:
   VAR_2->mode = 4;
   break;
  case 4:
   VAR_2->mode = 8;
   break;
 }

 switch (VAR_2->bpp)
 {
  case 4:
   break;
  case 6:
   VAR_2->mode += 2;
   break;
 }

 switch (VAR_2->port_mode & VAR_0)
 {
  case 130:
   VAR_2->mode += 1;
   break;
  case 129:
  case 128:
   break;
 }

 if (VAR_2->mode != VAR_3)
  VAR_2->status |= VAR_1;

 return 0;
}
