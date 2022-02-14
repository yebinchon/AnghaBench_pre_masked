
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ucb1x00_ts {TYPE_2__* ucb; int adcsync; struct input_dev* idev; } ;
struct ucb1x00_dev {struct ucb1x00_ts* priv; TYPE_2__* ucb; } ;
struct TYPE_3__ {int product; } ;
struct input_dev {char* name; int absbit; int evbit; int close; int open; TYPE_1__ id; } ;
struct TYPE_4__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_8 ;
 struct input_dev* FUNC_1 () ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct input_dev*,struct ucb1x00_ts*) ;
 int FUNC_5 (struct ucb1x00_ts*) ;
 struct ucb1x00_ts* FUNC_6 (int,int ) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_7(struct ucb1x00_dev *VAR_11)
{
 struct ucb1x00_ts *VAR_12;
 struct input_dev *VAR_13;
 int VAR_14;

 VAR_12 = FUNC_6(sizeof(struct ucb1x00_ts), VAR_5);
 VAR_13 = FUNC_1();
 if (!VAR_12 || !VAR_13) {
  VAR_14 = -VAR_3;
  goto fail;
 }

 VAR_12->ucb = VAR_11->ucb;
 VAR_12->idev = VAR_13;
 VAR_12->adcsync = VAR_8 ? VAR_7 : VAR_6;

 VAR_13->name = "Touchscreen panel";
 VAR_13->id.product = VAR_12->ucb->id;
 VAR_13->open = VAR_10;
 VAR_13->close = VAR_9;

 FUNC_0(VAR_4, VAR_13->evbit);
 FUNC_0(VAR_1, VAR_13->absbit);
 FUNC_0(VAR_2, VAR_13->absbit);
 FUNC_0(VAR_0, VAR_13->absbit);

 FUNC_4(VAR_13, VAR_12);

 VAR_14 = FUNC_3(VAR_13);
 if (VAR_14)
  goto fail;

 VAR_11->priv = VAR_12;

 return 0;

 fail:
 FUNC_2(VAR_13);
 FUNC_5(VAR_12);
 return VAR_14;
}
