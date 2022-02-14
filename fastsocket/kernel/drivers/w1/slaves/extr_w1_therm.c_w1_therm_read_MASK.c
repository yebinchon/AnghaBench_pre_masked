
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct w1_slave {int* rom; TYPE_1__* family; struct w1_master* master; } ;
struct w1_master {int mutex; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int rom ;
struct TYPE_2__ {int fid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct w1_slave* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (int*,scalar_t__*,int) ;
 int FUNC_3 (scalar_t__*,int ,int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int,char*,int,...) ;
 scalar_t__ FUNC_8 (scalar_t__*,int) ;
 int FUNC_9 (scalar_t__*,int ) ;
 int FUNC_10 (struct w1_master*,unsigned int) ;
 int FUNC_11 (struct w1_master*,scalar_t__*,int) ;
 int FUNC_12 (struct w1_slave*) ;
 scalar_t__ VAR_3 ;
 int FUNC_13 (scalar_t__*) ;
 int FUNC_14 (struct w1_master*,int ) ;

__attribute__((used)) static ssize_t FUNC_15(struct device *VAR_4,
 struct device_attribute *VAR_5, char *VAR_6)
{
 struct w1_slave *VAR_7 = FUNC_0(VAR_4);
 struct w1_master *VAR_8 = VAR_7->master;
 u8 VAR_9[9], VAR_10, VAR_11;
 int VAR_12, VAR_13 = 10;
 ssize_t VAR_14 = VAR_0;

 FUNC_5(&VAR_8->mutex);

 FUNC_3(VAR_9, 0, sizeof(VAR_9));

 VAR_11 = 0;
 VAR_10 = 0;

 while (VAR_13--) {
  if (!FUNC_12(VAR_7)) {
   int VAR_15 = 0;
   unsigned int VAR_16 = 750;


   if (VAR_3)
    FUNC_10(VAR_8, VAR_16);
   FUNC_14(VAR_8, VAR_1);
   if (!VAR_3)
    FUNC_4(VAR_16);

   if (!FUNC_12(VAR_7)) {

    FUNC_14(VAR_8, VAR_2);
    if ((VAR_15 = FUNC_11(VAR_8, VAR_9, 9)) != 9) {
     FUNC_1(VAR_4, "w1_read_block() "
      "returned %u instead of 9.\n",
      VAR_15);
    }

    VAR_10 = FUNC_8(VAR_9, 8);

    if (VAR_9[8] == VAR_10)
     VAR_11 = 1;
   }
  }

  if (!FUNC_13(VAR_9))
   break;
 }

 for (VAR_12 = 0; VAR_12 < 9; ++VAR_12)
  VAR_14 -= FUNC_7(VAR_6 + VAR_0 - VAR_14, VAR_14, "%02x ", VAR_9[VAR_12]);
 VAR_14 -= FUNC_7(VAR_6 + VAR_0 - VAR_14, VAR_14, ": crc=%02x %s\n",
      VAR_10, (VAR_11) ? "YES" : "NO");
 if (VAR_11)
  FUNC_2(VAR_7->rom, VAR_9, sizeof(VAR_7->rom));
 else
  FUNC_1(VAR_4, "18S20 doesn't respond to CONVERT_TEMP.\n");

 for (VAR_12 = 0; VAR_12 < 9; ++VAR_12)
  VAR_14 -= FUNC_7(VAR_6 + VAR_0 - VAR_14, VAR_14, "%02x ", VAR_7->rom[VAR_12]);

 VAR_14 -= FUNC_7(VAR_6 + VAR_0 - VAR_14, VAR_14, "t=%d\n",
  FUNC_9(VAR_9, VAR_7->family->fid));
 FUNC_6(&VAR_8->mutex);

 return VAR_0 - VAR_14;
}
