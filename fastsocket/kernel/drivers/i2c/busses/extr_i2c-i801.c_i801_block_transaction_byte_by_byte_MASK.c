
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union i2c_smbus_data {int* block; } ;
struct i801_priv {TYPE_1__* pci_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct i801_priv*) ;
 int FUNC_1 (struct i801_priv*) ;
 int FUNC_2 (struct i801_priv*) ;
 int FUNC_3 (struct i801_priv*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (struct i801_priv*,int,int) ;
 int FUNC_6 (struct i801_priv*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int,int ) ;

__attribute__((used)) static int FUNC_11(struct i801_priv *VAR_15,
            union i2c_smbus_data *VAR_16,
            char VAR_17, int VAR_18,
            int VAR_19)
{
 int VAR_20, VAR_21;
 int VAR_22;
 int VAR_23;
 int VAR_24;
 int VAR_25;

 VAR_24 = FUNC_6(VAR_15);
 if (VAR_24 < 0)
  return VAR_24;

 VAR_21 = VAR_16->block[0];

 if (VAR_17 == VAR_5) {
  FUNC_10(VAR_21, FUNC_2(VAR_15));
  FUNC_10(VAR_16->block[1], FUNC_0(VAR_15));
 }

 for (VAR_20 = 1; VAR_20 <= VAR_21; VAR_20++) {
  if (VAR_20 == VAR_21 && VAR_17 == VAR_4) {
   if (VAR_18 == VAR_3)
    VAR_22 = VAR_9;
   else
    VAR_22 = VAR_7;
  } else {
   if (VAR_18 == VAR_3
    && VAR_17 == VAR_4)
    VAR_22 = VAR_8;
   else
    VAR_22 = VAR_6;
  }
  FUNC_10(VAR_22 | VAR_0, FUNC_1(VAR_15));

  if (VAR_20 == 1)
   FUNC_10(FUNC_7(FUNC_1(VAR_15)) | VAR_10,
          FUNC_1(VAR_15));


  VAR_25 = 0;
  do {
   FUNC_9(1);
   VAR_23 = FUNC_8(FUNC_3(VAR_15));
  } while ((!(VAR_23 & VAR_12))
    && (VAR_25++ < VAR_11));

  VAR_24 = FUNC_5(VAR_15, VAR_23, VAR_25 > VAR_11);
  if (VAR_24 < 0)
   return VAR_24;

  if (VAR_20 == 1 && VAR_17 == VAR_4
   && VAR_18 != VAR_3) {
   VAR_21 = FUNC_8(FUNC_2(VAR_15));
   if (VAR_21 < 1 || VAR_21 > VAR_2) {
    FUNC_4(&VAR_15->pci_dev->dev,
     "Illegal SMBus block read size %d\n",
     VAR_21);

    while (FUNC_8(FUNC_3(VAR_15)) &
           VAR_13)
     FUNC_10(VAR_12,
            FUNC_3(VAR_15));
    FUNC_10(VAR_14, FUNC_3(VAR_15));
    return -VAR_1;
   }
   VAR_16->block[0] = VAR_21;
  }


  if (VAR_17 == VAR_4)
   VAR_16->block[VAR_20] = FUNC_8(FUNC_0(VAR_15));
  if (VAR_17 == VAR_5 && VAR_20+1 <= VAR_21)
   FUNC_10(VAR_16->block[VAR_20+1], FUNC_0(VAR_15));


  FUNC_10(VAR_12 | VAR_14, FUNC_3(VAR_15));
 }

 return 0;
}
