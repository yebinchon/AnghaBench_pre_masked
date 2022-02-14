
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct cx231xx {int state; int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct cx231xx*,int,int,int,int,int,char*,int,int ) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(struct cx231xx *VAR_13, u8 VAR_14, u16 VAR_15, char *VAR_16,
      int VAR_17)
{
 u8 VAR_18 = 0;
 int VAR_19;
 int VAR_20 = FUNC_2(VAR_13->udev, 0);

 if (VAR_13->state & VAR_0)
  return -VAR_6;

 if ((VAR_17 < 1) || (VAR_17 > VAR_8))
  return -VAR_1;

 switch (VAR_17) {
 case 1:
  VAR_18 = VAR_3;
  break;
 case 2:
  VAR_18 = VAR_5;
  break;
 case 3:
  VAR_18 = VAR_4;
  break;
 case 4:
  VAR_18 = VAR_2;
  break;
 default:
  VAR_18 = 0xFF;
 }

 if (VAR_18 == 0xFF)
  return -VAR_1;

 if (VAR_12) {
  int VAR_21;

  FUNC_1("(pipe 0x%08x): "
   "OUT: %02x %02x %02x %02x %02x %02x %02x %02x >>>",
   VAR_20,
   VAR_9 | VAR_11 | VAR_10,
   VAR_14, 0, VAR_18, VAR_15 & 0xff,
   VAR_15 >> 8, VAR_17 & 0xff, VAR_17 >> 8);

  for (VAR_21 = 0; VAR_21 < VAR_17; VAR_21++)
   FUNC_1(" %02x", (unsigned char)VAR_16[VAR_21]);
  FUNC_1("\n");
 }

 VAR_19 = FUNC_0(VAR_13, VAR_20, VAR_14,
         VAR_9 | VAR_11 | VAR_10,
         VAR_18, VAR_15, VAR_16, VAR_17, VAR_7);

 return VAR_19;
}
