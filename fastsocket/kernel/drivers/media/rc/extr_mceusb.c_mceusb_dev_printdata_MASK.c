
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ microsoft_gen1; } ;
struct mceusb_dev {int rem; int learning_enabled; TYPE_1__ flags; struct device* dev; } ;
struct device {int dummy; } ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (char*,int,char*,char) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static void FUNC_3(struct mceusb_dev *VAR_5, char *VAR_6,
     int VAR_7, int VAR_8, bool VAR_9)
{
 char VAR_10[VAR_3 * 3 + 1];
 char VAR_11[9];
 u8 VAR_12, VAR_13, VAR_14, VAR_15;
 struct device *VAR_16 = VAR_5->dev;
 int VAR_17, VAR_18, VAR_19 = 0;

 if (!VAR_4)
  return;


 if (VAR_5->flags.microsoft_gen1 && !VAR_9 && !VAR_7)
  VAR_19 = 2;

 if (VAR_8 <= VAR_19)
  return;

 for (VAR_17 = 0; VAR_17 < VAR_8 && VAR_17 < VAR_3; VAR_17++)
  FUNC_1(VAR_10 + VAR_17 * 3, 4, "%02x ", VAR_6[VAR_17 + VAR_7] & 0xff);

 FUNC_0(VAR_16, "%sx data: %s(length=%d)\n",
   (VAR_9 ? "t" : "r"), VAR_10, VAR_8);

 if (VAR_9)
  FUNC_2(VAR_11, "Request\0");
 else
  FUNC_2(VAR_11, "Got\0");

 VAR_18 = VAR_7 + VAR_19;
 VAR_12 = VAR_6[VAR_18] & 0xff;
 VAR_13 = VAR_6[VAR_18 + 1] & 0xff;
 VAR_14 = VAR_6[VAR_18 + 2] & 0xff;
 VAR_15 = VAR_6[VAR_18 + 3] & 0xff;

 switch (VAR_12) {
 case 130:
  if ((VAR_13 == 129) &&
      (VAR_14 == 149))
   FUNC_0(VAR_16, "Device reset requested\n");
  else
   FUNC_0(VAR_16, "Unknown command 0x%02x 0x%02x\n",
     VAR_12, VAR_13);
  break;
 case 129:
  switch (VAR_13) {
  case 147:
   if (VAR_8 == 2)
    FUNC_0(VAR_16, "Get hw/sw rev?\n");
   else
    FUNC_0(VAR_16, "hw/sw rev 0x%02x 0x%02x "
      "0x%02x 0x%02x\n", VAR_14, VAR_15,
      VAR_6[VAR_18 + 4], VAR_6[VAR_18 + 5]);
   break;
  case 149:
   FUNC_0(VAR_16, "Device reset requested\n");
   break;
  case 128:
   FUNC_0(VAR_16, "Previous command not supported\n");
   break;
  case 133:
  case 132:
  default:
   FUNC_0(VAR_16, "Unknown command 0x%02x 0x%02x\n",
     VAR_12, VAR_13);
   break;
  }
  break;
 case 131:
  switch (VAR_13) {
  case 142:
   FUNC_0(VAR_16, "End of signal\n");
   break;
  case 143:
   FUNC_0(VAR_16, "Ping\n");
   break;
  case 137:
   FUNC_0(VAR_16, "Resp to 9f 05 of 0x%02x 0x%02x\n",
     VAR_14, VAR_15);
   break;
  case 141:
   FUNC_0(VAR_16, "%s carrier mode and freq of "
     "0x%02x 0x%02x\n", VAR_11, VAR_14, VAR_15);
   break;
  case 148:
   FUNC_0(VAR_16, "Get carrier mode and freq\n");
   break;
  case 138:
   FUNC_0(VAR_16, "%s transmit blaster mask of 0x%02x\n",
     VAR_11, VAR_14);
   break;
  case 139:

   FUNC_0(VAR_16, "%s receive timeout of %d ms\n",
     VAR_11, ((VAR_14 << 8) | VAR_15) / 2);
   break;
  case 145:
   FUNC_0(VAR_16, "Get receive timeout\n");
   break;
  case 144:
   FUNC_0(VAR_16, "Get transmit blaster mask\n");
   break;
  case 140:
   FUNC_0(VAR_16, "%s %s-range receive sensor in use\n",
     VAR_11, VAR_14 == 0x02 ? "short" : "long");
   break;
  case 146:

   if (VAR_9)
    FUNC_0(VAR_16, "Get receive sensor\n");
   else if (VAR_5->learning_enabled)
    FUNC_0(VAR_16, "RX pulse count: %d\n",
      ((VAR_14 << 8) | VAR_15));
   break;
  case 128:
   FUNC_0(VAR_16, "Error! Hardware is likely wedged...\n");
   break;
  case 136:
  case 135:
  case 134:
  default:
   FUNC_0(VAR_16, "Unknown command 0x%02x 0x%02x\n",
     VAR_12, VAR_13);
   break;
  }
  break;
 default:
  break;
 }

 if (VAR_12 == VAR_2)
  FUNC_0(VAR_16, "End of raw IR data\n");
 else if ((VAR_12 != 131) &&
   ((VAR_12 & VAR_1) == VAR_0))
  FUNC_0(VAR_16, "Raw IR data, %d pulse/space samples\n", VAR_5->rem);
}
