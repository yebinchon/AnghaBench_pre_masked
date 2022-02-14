
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {struct list_head* next; } ;
struct TYPE_2__ {scalar_t__ status; } ;
struct device {TYPE_1__ power; } ;
typedef int pm_message_t ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (struct device*,int ) ;
 struct list_head VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct list_head*) ;
 int FUNC_4 (struct list_head*,struct list_head*) ;
 int FUNC_5 (struct list_head*,struct list_head*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct device*,int ,char*,int) ;
 int FUNC_9 (struct device*) ;
 struct device* FUNC_10 (struct list_head*) ;

__attribute__((used)) static void FUNC_11(pm_message_t VAR_5)
{
 struct list_head VAR_6;
 struct list_head *VAR_7;

 FUNC_0(&VAR_6);
 FUNC_6(&VAR_4);
 while (!FUNC_3(&VAR_3)) {
  struct device *VAR_8 = FUNC_10(VAR_3.next);
  VAR_7 = VAR_3.next;

  FUNC_2(VAR_8);
  if (VAR_8->power.status >= VAR_0) {
   int VAR_9;

   VAR_8->power.status = VAR_1;
   FUNC_7(&VAR_4);

   VAR_9 = FUNC_1(VAR_8, VAR_5);

   FUNC_6(&VAR_4);
   if (VAR_9)
    FUNC_8(VAR_8, VAR_5, "", VAR_9);
  } else if (VAR_8->power.status == VAR_2) {

   VAR_8->power.status = VAR_1;
  }
  if (!FUNC_3(VAR_7))
   FUNC_4(VAR_7, &VAR_6);
  FUNC_9(VAR_8);
 }
 FUNC_5(&VAR_6, &VAR_3);
 FUNC_7(&VAR_4);
}
