
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ocores_i2c {scalar_t__ state; int pos; scalar_t__ nmsgs; struct i2c_msg* msg; int wait; } ;
struct i2c_msg {int flags; int* buf; int len; int addr; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 void* FUNC_0 (struct ocores_i2c*,int ) ;
 int FUNC_1 (struct ocores_i2c*,int ,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ocores_i2c *VAR_18)
{
 struct i2c_msg *VAR_19 = VAR_18->msg;
 u8 VAR_20 = FUNC_0(VAR_18, VAR_10);

 if ((VAR_18->state == VAR_13) || (VAR_18->state == VAR_14)) {

  FUNC_1(VAR_18, VAR_2, VAR_3);
  FUNC_2(&VAR_18->wait);
  return;
 }


 if (VAR_20 & VAR_11) {
  VAR_18->state = VAR_14;
  FUNC_1(VAR_18, VAR_2, VAR_7);
  return;
 }

 if ((VAR_18->state == VAR_16) || (VAR_18->state == VAR_17)) {
  VAR_18->state =
   (VAR_19->flags & VAR_1) ? VAR_15 : VAR_17;

  if (VAR_20 & VAR_12) {
   VAR_18->state = VAR_14;
   FUNC_1(VAR_18, VAR_2, VAR_7);
   return;
  }
 } else
  VAR_19->buf[VAR_18->pos++] = FUNC_0(VAR_18, VAR_9);


 if (VAR_18->pos == VAR_19->len) {
  VAR_18->nmsgs--;
  VAR_18->msg++;
  VAR_18->pos = 0;
  VAR_19 = VAR_18->msg;

  if (VAR_18->nmsgs) {

   if (!(VAR_19->flags & VAR_0)) {
    u8 VAR_21 = (VAR_19->addr << 1);

    if (VAR_19->flags & VAR_1)
     VAR_21 |= 1;

    VAR_18->state = VAR_16;

    FUNC_1(VAR_18, VAR_9, VAR_21);
    FUNC_1(VAR_18, VAR_2, VAR_6);
    return;
   } else
    VAR_18->state = (VAR_19->flags & VAR_1)
     ? VAR_15 : VAR_17;
  } else {
   VAR_18->state = VAR_13;
   FUNC_1(VAR_18, VAR_2, VAR_7);
   return;
  }
 }

 if (VAR_18->state == VAR_15) {
  FUNC_1(VAR_18, VAR_2, VAR_18->pos == (VAR_19->len-1) ?
     VAR_5 : VAR_4);
 } else {
  FUNC_1(VAR_18, VAR_9, VAR_19->buf[VAR_18->pos++]);
  FUNC_1(VAR_18, VAR_2, VAR_8);
 }
}
