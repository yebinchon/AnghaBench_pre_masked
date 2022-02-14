
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsm_shared {unsigned int state; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_7 ;
 int FUNC_2 () ;
 int FUNC_3 (char*,...) ;
 struct smsm_shared* FUNC_4 (int ,int) ;
 int VAR_8 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_9, void *VAR_10)
{
 unsigned long VAR_11;
 struct smsm_shared *VAR_12;

 FUNC_5(&VAR_8, VAR_11);
 VAR_12 = FUNC_4(VAR_0,
     2 * sizeof(struct smsm_shared));

 if (VAR_12 == 0) {
  FUNC_3("<SM NO STATE>\n");
 } else {
  unsigned VAR_13 = VAR_12[0].state;
  unsigned VAR_14 = VAR_12[1].state;

  if (VAR_7 & VAR_2)
   FUNC_3("<SM %08x %08x>\n", VAR_13, VAR_14);
  if (VAR_14 & VAR_4) {
   FUNC_1();
  } else {
   VAR_13 |= VAR_3;
   if (VAR_14 & VAR_6)
    VAR_13 |= VAR_6;
   if (VAR_14 & VAR_5)
    VAR_13 |= VAR_5;
  }

  if (VAR_12[0].state != VAR_13) {
   if (VAR_7 & VAR_2)
    FUNC_3("<SM %08x NOTIFY>\n", VAR_13);
   VAR_12[0].state = VAR_13;
   FUNC_0();
   FUNC_2();
  }
 }
 FUNC_6(&VAR_8, VAR_11);
 return VAR_1;
}
