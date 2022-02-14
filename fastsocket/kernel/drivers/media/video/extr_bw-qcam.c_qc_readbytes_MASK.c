
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcam_device {int port_mode; unsigned int saved_bits; int bpp; } ;



 int VAR_0 ;

 int FUNC_0 (struct qcam_device*,int) ;
 int FUNC_1 (struct qcam_device*,int) ;
 int FUNC_2 (struct qcam_device*) ;
 int FUNC_3 (struct qcam_device*,int) ;

__attribute__((used)) static inline int FUNC_4(struct qcam_device *VAR_1, char VAR_2[])
{
 int VAR_3=1;
 unsigned int VAR_4, VAR_5;
 unsigned int VAR_6, VAR_7;
 static int VAR_8;

 if (VAR_2 == ((void*)0))
 {
  VAR_8 = 0;
  return 0;
 }

 switch (VAR_1->port_mode & VAR_0)
 {
  case 129:
   FUNC_3(VAR_1, 0x26);
   VAR_5 = (FUNC_1(VAR_1, 1) >> 1);
   VAR_4 = (FUNC_2(VAR_1) >> 3) & 0x1f;
   FUNC_3(VAR_1, 0x2e);
   VAR_7 = (FUNC_1(VAR_1, 0) >> 1);
   VAR_6 = (FUNC_2(VAR_1) >> 3) & 0x1f;
   switch (VAR_1->bpp)
   {
    case 4:
     VAR_2[0] = VAR_5 & 0xf;
     VAR_2[1] = ((VAR_5 & 0x70) >> 4) | ((VAR_4 & 1) << 3);
     VAR_2[2] = (VAR_4 & 0x1e) >> 1;
     VAR_2[3] = VAR_7 & 0xf;
     VAR_2[4] = ((VAR_7 & 0x70) >> 4) | ((VAR_6 & 1) << 3);
     VAR_2[5] = (VAR_6 & 0x1e) >> 1;
     VAR_3 = 6;
     break;
    case 6:
     VAR_2[0] = VAR_5 & 0x3f;
     VAR_2[1] = ((VAR_5 & 0x40) >> 6) | (VAR_4 << 1);
     VAR_2[2] = VAR_7 & 0x3f;
     VAR_2[3] = ((VAR_7 & 0x40) >> 6) | (VAR_6 << 1);
     VAR_3 = 4;
     break;
   }
   break;

  case 128:
   FUNC_3(VAR_1, 6);
   VAR_5 = (FUNC_0(VAR_1, 1) & 0xf0) >> 4;
   FUNC_3(VAR_1, 0xe);
   VAR_4 = (FUNC_0(VAR_1, 0) & 0xf0) >> 4;

   switch (VAR_1->bpp)
   {
    case 4:
     VAR_2[0] = VAR_5;
     VAR_2[1] = VAR_4;
     VAR_3 = 2;
     break;
    case 6:
     switch (VAR_8)
     {
      case 0:
       VAR_2[0] = (VAR_5 << 2) | ((VAR_4 & 0xc) >> 2);
       VAR_1->saved_bits = (VAR_4 & 3) << 4;
       VAR_8 = 1;
       VAR_3 = 1;
       break;
      case 1:
       VAR_2[0] = VAR_5 | VAR_1->saved_bits;
       VAR_1->saved_bits = VAR_4 << 2;
       VAR_8 = 2;
       VAR_3 = 1;
       break;
      case 2:
       VAR_2[0] = ((VAR_5 & 0xc) >> 2) | VAR_1->saved_bits;
       VAR_2[1] = ((VAR_5 & 3) << 4) | VAR_4;
       VAR_8 = 0;
       VAR_3 = 2;
       break;
     }
     break;
   }
   break;
 }
 return VAR_3;
}
