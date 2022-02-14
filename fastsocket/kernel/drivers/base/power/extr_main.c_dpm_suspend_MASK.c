
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {struct list_head* prev; } ;
struct TYPE_2__ {int status; } ;
struct device {TYPE_1__ power; } ;
typedef int pm_message_t ;


 int VAR_0 ;
 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (struct device*,int ) ;
 struct list_head VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct list_head*) ;
 int FUNC_4 (struct list_head*,struct list_head*) ;
 int FUNC_5 (struct list_head*,struct list_head*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct device*,int ,char*,int) ;
 int FUNC_9 (struct device*) ;
 struct device* FUNC_10 (struct list_head*) ;

__attribute__((used)) static int FUNC_11(pm_message_t VAR_3)
{
 struct list_head VAR_4, *VAR_5;
 int VAR_6 = 0;

 FUNC_0(&VAR_4);
 FUNC_6(&VAR_2);
 while (!FUNC_3(&VAR_1)) {
  struct device *VAR_7 = FUNC_10(VAR_1.prev);
  VAR_5 = VAR_1.prev;

  FUNC_2(VAR_7);
  FUNC_7(&VAR_2);

  VAR_6 = FUNC_1(VAR_7, VAR_3);

  FUNC_6(&VAR_2);
  if (VAR_6) {
   FUNC_8(VAR_7, VAR_3, "", VAR_6);
   FUNC_9(VAR_7);
   break;
  }
  VAR_7->power.status = VAR_0;
  if (!FUNC_3(VAR_5))
   FUNC_4(VAR_5, &VAR_4);
  FUNC_9(VAR_7);
 }
 FUNC_5(&VAR_4, VAR_1.prev);
 FUNC_7(&VAR_2);
 return VAR_6;
}
