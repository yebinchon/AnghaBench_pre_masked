
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int dev; } ;


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
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ) ;
 TYPE_1__ VAR_10 ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static int FUNC_6(u8 VAR_11)
{
 int VAR_12;
 int VAR_13 = 0;
 int VAR_14 = 0;

 FUNC_5("Transaction (pre)", VAR_11);


 if ((VAR_12 = FUNC_2(VAR_7)) & 0x1F) {
  FUNC_0(&VAR_10.dev, "SMBus busy (0x%02x). "
   "Resetting...\n", VAR_12);

  FUNC_4(VAR_12, VAR_7);
  if ((VAR_12 = FUNC_2(VAR_7)) & 0x1F) {
   FUNC_1(&VAR_10.dev, "SMBus reset failed! "
    "(0x%02x)\n", VAR_12);
   return -VAR_0;
  }
 }


 FUNC_4(0x40 | VAR_11, VAR_6);


 do {
  FUNC_3(1);
  VAR_12 = FUNC_2(VAR_7);
 } while ((VAR_12 & 0x01) && (VAR_14++ < VAR_4));


 if (VAR_14 >= VAR_4) {
  VAR_13 = -VAR_3;
  FUNC_1(&VAR_10.dev, "SMBus timeout!\n");
 }

 if (VAR_12 & 0x10) {
  VAR_13 = -VAR_1;
  FUNC_1(&VAR_10.dev, "Transaction failed (0x%02x)\n",
   VAR_11);
 }

 if (VAR_12 & 0x08) {
  VAR_13 = -VAR_1;
  FUNC_1(&VAR_10.dev, "SMBus collision!\n");
 }

 if (VAR_12 & 0x04) {
  int VAR_15 = FUNC_2(VAR_5) & 0x01;
  VAR_13 = -VAR_2;



  if (!((VAR_11 == VAR_9 && !VAR_15) ||
        (VAR_11 == VAR_8 && VAR_15)))
   FUNC_1(&VAR_10.dev, "Transaction error!\n");
 }


 if (VAR_12 & 0x1F)
  FUNC_4(VAR_12, VAR_7);

 FUNC_5("Transaction (post)", VAR_11);

 return VAR_13;
}
