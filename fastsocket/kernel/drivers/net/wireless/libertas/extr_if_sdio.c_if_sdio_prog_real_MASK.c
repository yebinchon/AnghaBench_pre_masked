
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct if_sdio_card {TYPE_1__* func; int ioport; int firmware; } ;
struct firmware {int* data; size_t size; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct if_sdio_card*,int*) ;
 unsigned long VAR_11 ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int*,int const*,scalar_t__) ;
 scalar_t__ FUNC_9 (size_t,size_t) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct firmware const*) ;
 int FUNC_12 (struct firmware const**,int ,int *) ;
 int FUNC_13 (scalar_t__,int) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*,scalar_t__,int*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*,int) ;
 int FUNC_18 (TYPE_1__*,int ,int*,int ) ;
 scalar_t__ FUNC_19 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_20(struct if_sdio_card *VAR_12)
{
 int VAR_13;
 u8 VAR_14;
 const struct firmware *VAR_15;
 unsigned long VAR_16;
 u8 *VAR_17;
 u32 VAR_18;
 const u8 *VAR_19;
 size_t VAR_20, VAR_21;

 FUNC_3(VAR_10);

 VAR_13 = FUNC_12(&VAR_15, VAR_12->firmware, &VAR_12->func->dev);
 if (VAR_13) {
  FUNC_6("can't load firmware\n");
  goto out;
 }

 VAR_17 = FUNC_2(512, VAR_3);
 if (!VAR_17) {
  VAR_13 = -VAR_1;
  goto release_fw;
 }

 FUNC_14(VAR_12->func);

 VAR_13 = FUNC_17(VAR_12->func, 32);
 if (VAR_13)
  goto release;

 VAR_19 = VAR_15->data;
 VAR_20 = VAR_15->size;

 while (VAR_20) {
  VAR_16 = VAR_11 + VAR_4;
  while (1) {
   VAR_14 = FUNC_15(VAR_12->func, VAR_9, &VAR_13);
   if (VAR_13)
    goto release;
   if ((VAR_14 & VAR_7) &&
     (VAR_14 & VAR_5))
    break;
   if (FUNC_19(VAR_11, VAR_16)) {
    VAR_13 = -VAR_2;
    goto release;
   }
   FUNC_7(1);
  }

  VAR_21 = FUNC_15(VAR_12->func, VAR_8, &VAR_13);
  if (VAR_13)
   goto release;

  VAR_21 |= FUNC_15(VAR_12->func, VAR_8 + 1, &VAR_13) << 8;
  if (VAR_13)
   goto release;



  if (VAR_21 == 0) {
   FUNC_5("firmware helper gave up early\n");
   VAR_13 = -VAR_0;
   goto release;
  }

  if (VAR_21 & 0x01) {
   FUNC_5("firmware helper signalled error\n");
   VAR_13 = -VAR_0;
   goto release;
  }

  if (VAR_21 > VAR_20)
   VAR_21 = VAR_20;

  while (VAR_21) {
   VAR_18 = FUNC_9(VAR_21, (size_t)512);

   FUNC_8(VAR_17, VAR_19, VAR_18);




   VAR_13 = FUNC_18(VAR_12->func, VAR_12->ioport,
    VAR_17, FUNC_13(VAR_18, 32));
   if (VAR_13)
    goto release;

   VAR_19 += VAR_18;
   VAR_20 -= VAR_18;
   VAR_21 -= VAR_18;
  }
 }

 VAR_13 = 0;

 FUNC_5("waiting for firmware to boot...\n");


 VAR_16 = VAR_11 + VAR_4;
 while (1) {
  u16 VAR_22;

  VAR_22 = FUNC_0(VAR_12, &VAR_13);
  if (VAR_13)
   goto release;

  if (VAR_22 == VAR_6)
   break;

  if (FUNC_19(VAR_11, VAR_16)) {
   VAR_13 = -VAR_2;
   goto release;
  }

  FUNC_10(10);
 }

 VAR_13 = 0;

release:
 FUNC_16(VAR_12->func);
 FUNC_1(VAR_17);
release_fw:
 FUNC_11(VAR_15);

out:
 if (VAR_13)
  FUNC_6("failed to load firmware\n");

 FUNC_4(VAR_10, "ret %d", VAR_13);

 return VAR_13;
}
