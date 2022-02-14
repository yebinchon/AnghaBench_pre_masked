
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int parent; } ;
struct locomo_dev {TYPE_5__ dev; } ;
struct TYPE_8__ {int max_brightness; int brightness; } ;
struct TYPE_9__ {TYPE_1__ props; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (char*,TYPE_5__*,int *,int *) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 struct locomo_dev* VAR_3 ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct locomo_dev *VAR_4)
{
 unsigned long VAR_5;

 FUNC_4(VAR_5);
 VAR_3 = VAR_4;

 FUNC_5(VAR_4->dev.parent, VAR_0, 0);




 if (FUNC_8())
  FUNC_6(1);

 FUNC_3(VAR_5);

 VAR_2 = FUNC_2("locomo-bl", &VAR_4->dev, ((void*)0), &VAR_1);

 if (FUNC_0 (VAR_2))
  return FUNC_1 (VAR_2);


 VAR_2->props.max_brightness = 4,
 VAR_2->props.brightness = 2;
 FUNC_7(VAR_2);

 return 0;
}
