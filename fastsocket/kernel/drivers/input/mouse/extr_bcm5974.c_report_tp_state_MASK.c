
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tp_finger {int force_major; int origin; int abs_y; int abs_x; int size_major; } ;
struct input_dev {int dummy; } ;
struct TYPE_2__ {int devmin; int devmax; } ;
struct bcm5974_config {int tp_offset; scalar_t__ tp_type; TYPE_1__ p; TYPE_1__ y; TYPE_1__ x; TYPE_1__ w; } ;
struct bcm5974 {int fingers; int * tp_data; struct input_dev* input; struct bcm5974_config cfg; } ;


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
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (int,char*,int,int,int,int,int,...) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct bcm5974 *VAR_16, int VAR_17)
{
 const struct bcm5974_config *VAR_18 = &VAR_16->cfg;
 const struct tp_finger *VAR_19;
 struct input_dev *VAR_20 = VAR_16->input;
 int VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
 int VAR_26, VAR_27, VAR_28 = 0, VAR_29 = 0, VAR_30 = 0;
 int VAR_31 = 0, VAR_32 = 0, VAR_33 = 0, VAR_34 = 0;

 if (VAR_17 < VAR_18->tp_offset || (VAR_17 - VAR_18->tp_offset) % VAR_14 != 0)
  return -VAR_11;


 VAR_19 = (const struct tp_finger *)(VAR_16->tp_data + VAR_18->tp_offset);
 VAR_25 = (VAR_17 - VAR_18->tp_offset) / VAR_14;


 if (VAR_25) {
  VAR_21 = FUNC_5(VAR_19->force_major);
  VAR_22 = FUNC_5(VAR_19->size_major);
  VAR_23 = FUNC_5(VAR_19->abs_x);
  VAR_24 = FUNC_5(VAR_19->abs_y);

  FUNC_0(9,
   "bcm5974: "
   "raw: p: %+05d w: %+05d x: %+05d y: %+05d n: %d\n",
   VAR_21, VAR_22, VAR_23, VAR_24, VAR_25);

  VAR_26 = FUNC_4(&VAR_18->p, VAR_21);
  VAR_27 = FUNC_5(VAR_19->origin);


  if (VAR_18->tp_type == VAR_15)
   VAR_28 = FUNC_5(VAR_16->tp_data[VAR_10]);


  if (VAR_26 > VAR_13 && VAR_27) {
   VAR_31 = VAR_26;
   VAR_32 = FUNC_4(&VAR_18->w, VAR_22);
   VAR_33 = FUNC_4(&VAR_18->x, VAR_23 - VAR_18->x.devmin);
   VAR_34 = FUNC_4(&VAR_18->y, VAR_18->y.devmax - VAR_24);
   while (VAR_25--) {
    VAR_26 = FUNC_4(&VAR_18->p,
        FUNC_5(VAR_19->force_major));
    if (VAR_26 > VAR_13)
     VAR_30++;
    if (VAR_26 > VAR_12)
     VAR_29++;
    VAR_19++;
   }
  }
 }

 if (VAR_16->fingers < VAR_29)
  VAR_16->fingers = VAR_29;
 if (VAR_16->fingers > VAR_30)
  VAR_16->fingers = VAR_30;

 FUNC_2(VAR_20, VAR_9, VAR_16->fingers > 0);
 FUNC_2(VAR_20, VAR_6, VAR_16->fingers == 1);
 FUNC_2(VAR_20, VAR_5, VAR_16->fingers == 2);
 FUNC_2(VAR_20, VAR_8, VAR_16->fingers == 3);
 FUNC_2(VAR_20, VAR_7, VAR_16->fingers > 3);

 FUNC_1(VAR_20, VAR_0, VAR_31);
 FUNC_1(VAR_20, VAR_1, VAR_32);

 if (VAR_31) {
  FUNC_1(VAR_20, VAR_2, VAR_33);
  FUNC_1(VAR_20, VAR_3, VAR_34);

  FUNC_0(8,
   "bcm5974: abs: p: %+05d w: %+05d x: %+05d y: %+05d "
   "nmin: %d nmax: %d n: %d ibt: %d\n", VAR_31, VAR_32,
   VAR_33, VAR_34, VAR_29, VAR_30, VAR_16->fingers, VAR_28);

 }


 if (VAR_18->tp_type == VAR_15)
  FUNC_2(VAR_20, VAR_4, VAR_28);

 FUNC_3(VAR_20);

 return 0;
}
