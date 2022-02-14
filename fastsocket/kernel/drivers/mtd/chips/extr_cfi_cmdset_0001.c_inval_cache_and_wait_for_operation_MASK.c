
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_info {struct cfi_private* fldrv_priv; } ;
struct flchip {int state; scalar_t__ write_suspended; scalar_t__ erase_suspended; int mutex; int wq; } ;
struct cfi_private {int dummy; } ;
typedef int map_word ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct map_info*,unsigned long,int) ;
 int VAR_5 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 () ;
 int VAR_6 ;
 int FUNC_5 (struct map_info*,unsigned long) ;
 scalar_t__ FUNC_6 (struct map_info*,int ,int ,int ) ;
 int FUNC_7 (struct map_info*,int ,unsigned long) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_15(
  struct map_info *VAR_8, struct flchip *VAR_9,
  unsigned long VAR_10, unsigned long VAR_11, int VAR_12,
  unsigned int VAR_13, unsigned int VAR_14)
{
 struct cfi_private *VAR_15 = VAR_8->fldrv_priv;
 map_word VAR_16, VAR_17 = FUNC_0(0x80);
 int VAR_18 = VAR_9->state;
 unsigned int VAR_19, VAR_20, VAR_21;

 FUNC_13(VAR_9->mutex);
 if (VAR_12)
  FUNC_2(VAR_8, VAR_11, VAR_12);
 FUNC_12(VAR_9->mutex);

 VAR_19 = VAR_14;
 if (!VAR_19)
  VAR_19 = 500000;
 VAR_21 = VAR_19;
 VAR_20 = VAR_13 / 2;

 for (;;) {
  VAR_16 = FUNC_5(VAR_8, VAR_10);
  if (FUNC_6(VAR_8, VAR_16, VAR_17, VAR_17))
   break;

  if (!VAR_19) {
   FUNC_7(VAR_8, FUNC_0(0x70), VAR_10);
   VAR_9->state = VAR_2;
   return -VAR_0;
  }


  FUNC_13(VAR_9->mutex);
  if (VAR_20 >= 1000000/VAR_4) {





   FUNC_8(VAR_20/1000);
   VAR_19 -= VAR_20;
   VAR_20 = 1000000/VAR_4;
  } else {
   FUNC_14(1);
   FUNC_4();
   VAR_19--;
  }
  FUNC_12(VAR_9->mutex);

  while (VAR_9->state != VAR_18) {

   FUNC_1(VAR_7, VAR_6);
   FUNC_11(VAR_5);
   FUNC_3(&VAR_9->wq, &VAR_7);
   FUNC_13(VAR_9->mutex);
   FUNC_10();
   FUNC_9(&VAR_9->wq, &VAR_7);
   FUNC_12(VAR_9->mutex);
  }
  if (VAR_9->erase_suspended && VAR_18 == VAR_1) {

   VAR_19 = VAR_21;
   VAR_9->erase_suspended = 0;
  }
  if (VAR_9->write_suspended && VAR_18 == VAR_3) {

   VAR_19 = VAR_21;
   VAR_9->write_suspended = 0;
  }
 }


  VAR_9->state = VAR_2;
 return 0;
}
