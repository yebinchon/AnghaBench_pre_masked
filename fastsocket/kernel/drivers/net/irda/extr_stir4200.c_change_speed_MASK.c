
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stir_cb {unsigned int speed; TYPE_1__* netdev; } ;
typedef int __u8 ;
struct TYPE_5__ {unsigned int speed; int pdclk; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (TYPE_2__*) ;
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
 int VAR_13 ;
 int FUNC_1 (int *,char*,unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 (char*,unsigned int,unsigned int) ;
 int VAR_14 ;
 TYPE_2__* VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (struct stir_cb*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct stir_cb *VAR_17, unsigned VAR_18)
{
 int VAR_19, VAR_20;
 __u8 VAR_21;

 for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_15); ++VAR_19) {
  if (VAR_18 == VAR_15[VAR_19].speed)
   goto found;
 }

 FUNC_1(&VAR_17->netdev->dev, "invalid speed %d\n", VAR_18);
 return -VAR_2;

 found:
 FUNC_3("speed change from %d to %d\n", VAR_17->speed, VAR_18);


 VAR_20 = FUNC_4(VAR_17, VAR_9, VAR_1);
 if (VAR_20)
  goto out;


 VAR_20 = FUNC_4(VAR_17, VAR_11, 0x15);
 if (VAR_20)
  goto out;


 VAR_20 = FUNC_4(VAR_17, VAR_13, VAR_15[VAR_19].pdclk);
 if (VAR_20)
  goto out;

 VAR_21 = VAR_7 | VAR_4;
 if (FUNC_2(VAR_18))
  VAR_21 |= VAR_6 | VAR_5;
 else
  VAR_21 |= VAR_8;

 if (VAR_18 == 2400)
  VAR_21 |= VAR_3;

 VAR_20 = FUNC_4(VAR_17, VAR_12, VAR_21);
 if (VAR_20)
  goto out;


 VAR_20 = FUNC_4(VAR_17, VAR_9,
   VAR_0 | (VAR_16 & 3) << 1);
 if (VAR_20)
  goto out;

 VAR_20 = FUNC_4(VAR_17, VAR_9, (VAR_16 & 3) << 1);
 if (VAR_20)
  goto out;


 VAR_20 = FUNC_4(VAR_17, VAR_10, (VAR_14 & 7) << 5);
 out:
 VAR_17->speed = VAR_18;
 return VAR_20;
}
