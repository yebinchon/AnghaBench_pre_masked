
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct il_priv {int lock; int status; int irq_tasklet; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct il_priv*,int ) ;
 int FUNC_3 (struct il_priv*,int ,int) ;
 int FUNC_4 (struct il_priv*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;

irqreturn_t
FUNC_10(int VAR_7, void *VAR_8)
{
 struct il_priv *VAR_9 = VAR_8;
 u32 VAR_10, VAR_11;
 u32 VAR_12;
 unsigned long VAR_13;
 if (!VAR_9)
  return VAR_5;

 FUNC_6(&VAR_9->lock, VAR_13);





 VAR_11 = FUNC_2(VAR_9, VAR_3);
 FUNC_3(VAR_9, VAR_3, 0x00000000);


 VAR_10 = FUNC_2(VAR_9, VAR_1);
 VAR_12 = FUNC_2(VAR_9, VAR_0);




 if (!VAR_10 && !VAR_12) {
  FUNC_0("Ignore interrupt, inta == 0, inta_fh == 0\n");
  goto none;
 }

 if (VAR_10 == 0xFFFFFFFF || (VAR_10 & 0xFFFFFFF0) == 0xa5a5a5a0) {


  FUNC_1("HARDWARE GONE?? INTA == 0x%08x\n", VAR_10);
  goto unplugged;
 }

 FUNC_0("ISR inta 0x%08x, enabled 0x%08x, fh 0x%08x\n", VAR_10, VAR_11,
       VAR_12);

 VAR_10 &= ~VAR_2;


 if (FUNC_5(VAR_10 || VAR_12))
  FUNC_8(&VAR_9->irq_tasklet);

unplugged:
 FUNC_7(&VAR_9->lock, VAR_13);
 return VAR_4;

none:


 if (FUNC_9(VAR_6, &VAR_9->status))
  FUNC_4(VAR_9);
 FUNC_7(&VAR_9->lock, VAR_13);
 return VAR_5;
}
