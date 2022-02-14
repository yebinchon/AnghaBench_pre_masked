
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct rc_dev {struct loopback_dev* priv; } ;
struct loopback_dev {scalar_t__ txcarrier; scalar_t__ rxcarriermin; scalar_t__ rxcarriermax; int txmask; scalar_t__ learning; } ;
struct TYPE_4__ {int pulse; int duration; } ;


 int FUNC_0 (TYPE_1__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct rc_dev*) ;
 int FUNC_4 (struct rc_dev*,TYPE_1__*) ;
 TYPE_1__ VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (unsigned int) ;

__attribute__((used)) static int FUNC_8(struct rc_dev *VAR_5, int *VAR_6, u32 VAR_7)
{
 struct loopback_dev *VAR_8 = VAR_5->priv;
 u32 VAR_9;
 unsigned VAR_10;
 unsigned VAR_11 = 0;
 unsigned VAR_12;
 FUNC_0(VAR_4);

 if (VAR_7 == 0 || VAR_7 % sizeof(int)) {
  FUNC_2("invalid tx buffer size\n");
  return -VAR_0;
 }

 VAR_10 = VAR_7 / sizeof(int);
 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++)
  VAR_11 += FUNC_1(VAR_6[VAR_12]);

 if (VAR_11 == 0) {
  FUNC_2("invalid tx data, total duration zero\n");
  return -VAR_0;
 }

 if (VAR_8->txcarrier < VAR_8->rxcarriermin ||
     VAR_8->txcarrier > VAR_8->rxcarriermax) {
  FUNC_2("ignoring tx, carrier out of range\n");
  goto out;
 }

 if (VAR_8->learning)
  VAR_9 = VAR_1;
 else
  VAR_9 = VAR_2;

 if (!(VAR_9 & VAR_8->txmask)) {
  FUNC_2("ignoring tx, rx mask mismatch\n");
  goto out;
 }

 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  VAR_4.pulse = VAR_12 % 2 ? 0 : 1;
  VAR_4.duration = FUNC_1(VAR_6[VAR_12]) * 1000;
  if (VAR_4.duration)
   FUNC_4(VAR_5, &VAR_4);
 }
 FUNC_3(VAR_5);

out:

 FUNC_6(VAR_3);
 FUNC_5(FUNC_7(VAR_11));
 return VAR_7;
}
