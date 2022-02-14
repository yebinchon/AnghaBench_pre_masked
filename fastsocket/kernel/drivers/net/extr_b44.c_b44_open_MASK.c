
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int name; int irq; } ;
struct TYPE_3__ {unsigned long data; int function; scalar_t__ expires; } ;
struct b44 {TYPE_1__ timer; int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct b44*,int ) ;
 int FUNC_2 (struct b44*) ;
 int FUNC_3 (struct b44*,int ) ;
 int FUNC_4 (struct b44*) ;
 int FUNC_5 (struct b44*) ;
 int FUNC_6 (struct b44*) ;
 int FUNC_7 (struct b44*,int ) ;
 int FUNC_8 (struct b44*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ VAR_7 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 struct b44* FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (int ,int ,int ,int ,struct net_device*) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(struct net_device *VAR_8)
{
 struct b44 *VAR_9 = FUNC_12(VAR_8);
 int VAR_10;

 VAR_10 = FUNC_1(VAR_9, VAR_2);
 if (VAR_10)
  goto out;

 FUNC_11(&VAR_9->napi);

 FUNC_8(VAR_9);
 FUNC_7(VAR_9, VAR_1);

 FUNC_2(VAR_9);

 VAR_10 = FUNC_14(VAR_8->irq, VAR_5, VAR_4, VAR_8->name, VAR_8);
 if (FUNC_15(VAR_10 < 0)) {
  FUNC_10(&VAR_9->napi);
  FUNC_3(VAR_9, VAR_0);
  FUNC_6(VAR_9);
  FUNC_5(VAR_9);
  goto out;
 }

 FUNC_9(&VAR_9->timer);
 VAR_9->timer.expires = VAR_7 + VAR_3;
 VAR_9->timer.data = (unsigned long) VAR_9;
 VAR_9->timer.function = VAR_6;
 FUNC_0(&VAR_9->timer);

 FUNC_4(VAR_9);
 FUNC_13(VAR_8);
out:
 return VAR_10;
}
