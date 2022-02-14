
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zd1201 {int rxlen; unsigned char* rxdata; TYPE_1__* usb; scalar_t__ rxdatas; int rxdataq; } ;
typedef int __le16 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned char VAR_6 ;
 int FUNC_0 (int *,char*,unsigned char,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*,unsigned char*,int) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct zd1201*,int ,int,int ,int) ;

__attribute__((used)) static int FUNC_5(struct zd1201 *VAR_7, int VAR_8, void *VAR_9,
 unsigned int VAR_10)
{
 int VAR_11;
 int VAR_12 = 0;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 unsigned char *VAR_16;

 VAR_7->rxdatas = 0;
 VAR_11 = FUNC_4(VAR_7, VAR_4, VAR_8, 0, 0);
 if (VAR_11)
  return VAR_11;

 FUNC_3(VAR_7->rxdataq, VAR_7->rxdatas);
 if (!VAR_7->rxlen)
  return -VAR_1;

 VAR_13 = FUNC_1(*(__le16*)(&VAR_7->rxdata[4]));
 VAR_14 = FUNC_1(*(__le16*)(&VAR_7->rxdata[6]));
 VAR_15 = FUNC_1(*(__le16*)(&VAR_7->rxdata[8]));
 if (VAR_15 > VAR_7->rxlen)
  VAR_15 = VAR_7->rxlen-6;


 if ((VAR_13 & VAR_3) != VAR_3 || VAR_14 != VAR_8 )
  return -VAR_0;


 if (VAR_10 != (VAR_15 - 4)) {
  FUNC_0(&VAR_7->usb->dev, "riddatalen mismatches, expected=%u, (packet=%u) length=%u, rid=0x%04X, rid_fid=0x%04X\n",
      VAR_10, VAR_7->rxlen, VAR_15, VAR_8, VAR_14);
  return -VAR_2;
 }

 VAR_7->rxdatas = 0;

 VAR_11 = FUNC_4(VAR_7, VAR_5, VAR_8, 0, VAR_15);
 if (VAR_11)
  return VAR_11;


 FUNC_3(VAR_7->rxdataq, VAR_7->rxdatas);
 if (!VAR_7->rxlen)
  return -VAR_1;

 if (VAR_7->rxdata[VAR_7->rxlen - 1] != VAR_6) {
  FUNC_0(&VAR_7->usb->dev, "Packet type mismatch: 0x%x not 0x3\n",
      VAR_7->rxdata[VAR_7->rxlen-1]);
  return -VAR_0;
 }


 VAR_16 = VAR_7->rxdata;
 VAR_15 = VAR_7->rxlen;

 do {
  int VAR_17;

  VAR_17 = (VAR_15 > 64) ? 64 : VAR_15;

  if (VAR_16[0] != 0x3) {
   FUNC_0(&VAR_7->usb->dev, "Rx Resource packet type error: %02X\n",
       VAR_16[0]);
   return -VAR_0;
  }

  if (VAR_17 != 64) {

   VAR_17--;
  }


  if (VAR_12 == 0) {
   VAR_16 += 8;
   VAR_17 -= 8;
  } else {
   VAR_16 += 4;
   VAR_17 -= 4;
  }

  FUNC_2(VAR_9, VAR_16, VAR_17);
  VAR_9 += VAR_17;
  VAR_16 += VAR_17;
  VAR_15 -= 64;
  VAR_12++;
 } while (VAR_15 > 0);

 return 0;
}
