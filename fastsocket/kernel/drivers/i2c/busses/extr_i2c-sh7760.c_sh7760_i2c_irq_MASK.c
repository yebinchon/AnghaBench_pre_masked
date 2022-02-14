
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {char* buf; unsigned long len; } ;
struct cami2c {int status; int flags; int xfer_done; struct i2c_msg* msg; } ;
typedef int irqreturn_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (struct cami2c*,int ) ;
 int VAR_24 ;
 unsigned long VAR_25 ;
 unsigned long VAR_26 ;
 unsigned long VAR_27 ;
 unsigned long VAR_28 ;
 unsigned long VAR_29 ;
 unsigned long VAR_30 ;
 unsigned long VAR_31 ;
 int FUNC_1 (struct cami2c*,int ,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_32, void *VAR_33)
{
 struct cami2c *VAR_34 = VAR_33;
 struct i2c_msg *VAR_35 = VAR_34->msg;
 char *VAR_36 = VAR_35->buf;
 unsigned long VAR_37, VAR_38, VAR_39, VAR_40;

 VAR_37 = FUNC_0(VAR_34, VAR_12);
 VAR_38 = FUNC_0(VAR_34, VAR_9);


 if (VAR_37 & VAR_28) {
  FUNC_1(VAR_34, VAR_10, 0);
  FUNC_1(VAR_34, VAR_16, 0);
  FUNC_1(VAR_34, VAR_15, 0);
  VAR_34->status |= VAR_22 | VAR_21;
  goto out;
 }

 if (VAR_37 & VAR_30) {






  FUNC_3(100);
  FUNC_1(VAR_34, VAR_7, VAR_0 | VAR_1);
  FUNC_1(VAR_34, VAR_10, VAR_26 | VAR_25);
  FUNC_1(VAR_34, VAR_8, 0);
  FUNC_1(VAR_34, VAR_11, VAR_27);
  FUNC_1(VAR_34, VAR_16, 0);
  FUNC_1(VAR_34, VAR_15, 0);
  VAR_34->status |= VAR_23;
  VAR_37 &= ~VAR_29;
  VAR_38 = 0;

 }


 if (VAR_37 & VAR_31) {
  VAR_34->status |= VAR_22;
  goto out;
 }


 if (VAR_37 & VAR_29)
  FUNC_1(VAR_34, VAR_10, VAR_26);

 VAR_39 = FUNC_0(VAR_34, VAR_8);

 if (VAR_38 & VAR_4) {
  VAR_40 = FUNC_0(VAR_34, VAR_13);
  if (VAR_35->len <= VAR_40) {
   if (VAR_34->flags & VAR_20) {
    FUNC_1(VAR_34, VAR_10, VAR_26 | VAR_25);
    FUNC_1(VAR_34, VAR_8, 0);

    FUNC_3(5);

   } else {
    VAR_34->status |= VAR_22;




    VAR_38 &= ~VAR_4;
   }
  }
  while (VAR_35->len && VAR_40) {
   *VAR_36++ = FUNC_0(VAR_34, VAR_14);
   VAR_35->len--;
   VAR_40--;
  }

  if (VAR_35->len) {
   VAR_40 = (VAR_35->len >= VAR_3) ? VAR_3 - 1
            : VAR_35->len - 1;

   FUNC_1(VAR_34, VAR_7, VAR_1 | ((VAR_40 & 0xf) << 4));
  }

 } else if (VAR_34->flags & VAR_19) {
  if ((VAR_38 & VAR_6) && (VAR_35->len < 1)) {
   if (VAR_34->flags & VAR_20) {
    FUNC_1(VAR_34, VAR_10, VAR_26 | VAR_25);
   } else {
    VAR_34->status |= VAR_22;




    VAR_38 &= ~VAR_6;
   }
  }
  if (VAR_38 & VAR_5) {
   while (VAR_35->len && (FUNC_0(VAR_34, VAR_18) < VAR_3)) {
    FUNC_1(VAR_34, VAR_14, *VAR_36++);
    VAR_35->len--;
   }

   if (VAR_35->len < 1) {
    VAR_39 &= ~VAR_2;
    FUNC_1(VAR_34, VAR_8, VAR_39);
   } else {
    VAR_40 = (VAR_35->len >= VAR_3) ? 2 : 0;
    FUNC_1(VAR_34, VAR_7,
       VAR_0 | ((VAR_40 & 3) << 2));
   }
  }
 }
out:
 if (VAR_34->status & VAR_22) {
  FUNC_1(VAR_34, VAR_11, 0);
  FUNC_1(VAR_34, VAR_8, 0);
  VAR_34->msg = ((void*)0);
  FUNC_2(&VAR_34->xfer_done);
 }

 FUNC_1(VAR_34, VAR_12, ~VAR_37);
 FUNC_1(VAR_34, VAR_9, ~VAR_38);
 FUNC_1(VAR_34, VAR_17, 0);

 return VAR_24;
}
