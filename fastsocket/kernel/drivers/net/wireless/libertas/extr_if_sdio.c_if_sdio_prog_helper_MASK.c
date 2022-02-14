
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct if_sdio_card {TYPE_1__* func; int ioport; int helper; } ;
struct firmware {int* data; size_t size; } ;
typedef int __le32 ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 unsigned long VAR_9 ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int*,int const*,scalar_t__) ;
 int FUNC_9 (int*,int ,int) ;
 scalar_t__ FUNC_10 (size_t,size_t) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct firmware const*) ;
 int FUNC_13 (struct firmware const**,int ,int *) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*,scalar_t__,int*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*,int) ;
 int FUNC_18 (TYPE_1__*,int ,int*,int) ;
 scalar_t__ FUNC_19 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_20(struct if_sdio_card *VAR_10)
{
 int VAR_11;
 u8 VAR_12;
 const struct firmware *VAR_13;
 unsigned long VAR_14;
 u8 *VAR_15;
 u32 VAR_16;
 const u8 *VAR_17;
 size_t VAR_18;

 FUNC_3(VAR_8);

 VAR_11 = FUNC_13(&VAR_13, VAR_10->helper, &VAR_10->func->dev);
 if (VAR_11) {
  FUNC_6("can't load helper firmware\n");
  goto out;
 }

 VAR_15 = FUNC_2(64, VAR_2);
 if (!VAR_15) {
  VAR_11 = -VAR_0;
  goto release_fw;
 }

 FUNC_14(VAR_10->func);

 VAR_11 = FUNC_17(VAR_10->func, 32);
 if (VAR_11)
  goto release;

 VAR_17 = VAR_13->data;
 VAR_18 = VAR_13->size;

 while (VAR_18) {
  VAR_14 = VAR_9 + VAR_3;
  while (1) {
   VAR_12 = FUNC_15(VAR_10->func, VAR_7, &VAR_11);
   if (VAR_11)
    goto release;
   if ((VAR_12 & VAR_5) &&
     (VAR_12 & VAR_4))
    break;
   if (FUNC_19(VAR_9, VAR_14)) {
    VAR_11 = -VAR_1;
    goto release;
   }
   FUNC_7(1);
  }

  VAR_16 = FUNC_10(VAR_18, (size_t)60);

  *((__le32*)VAR_15) = FUNC_0(VAR_16);
  FUNC_8(VAR_15 + 4, VAR_17, VAR_16);



  VAR_11 = FUNC_18(VAR_10->func, VAR_10->ioport,
    VAR_15, 64);
  if (VAR_11)
   goto release;

  VAR_17 += VAR_16;
  VAR_18 -= VAR_16;
 }


 FUNC_9(VAR_15, 0, 4);
 VAR_11 = FUNC_18(VAR_10->func, VAR_10->ioport, VAR_15, 64);
 if (VAR_11)
  goto release;

 FUNC_5("waiting for helper to boot...\n");


 VAR_14 = VAR_9 + VAR_3;
 while (1) {
  u16 VAR_19;

  VAR_19 = FUNC_15(VAR_10->func, VAR_6, &VAR_11);
  if (VAR_11)
   goto release;

  VAR_19 |= FUNC_15(VAR_10->func, VAR_6 + 1, &VAR_11) << 8;
  if (VAR_11)
   goto release;

  if (VAR_19 != 0)
   break;

  if (FUNC_19(VAR_9, VAR_14)) {
   VAR_11 = -VAR_1;
   goto release;
  }

  FUNC_11(10);
 }

 VAR_11 = 0;

release:
 FUNC_16(VAR_10->func);
 FUNC_1(VAR_15);
release_fw:
 FUNC_12(VAR_13);

out:
 if (VAR_11)
  FUNC_6("failed to load helper firmware\n");

 FUNC_4(VAR_8, "ret %d", VAR_11);

 return VAR_11;
}
