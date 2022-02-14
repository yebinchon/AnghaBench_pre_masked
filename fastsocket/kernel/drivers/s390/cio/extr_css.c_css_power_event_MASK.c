
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct channel_subsystem {int mutex; int cm_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int FUNC_0 (struct channel_subsystem*,int,void*) ;
 struct channel_subsystem** VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct notifier_block *VAR_6, unsigned long VAR_7,
      void *VAR_8)
{
 void *VAR_9;
 int VAR_10, VAR_11;

 switch (VAR_7) {
 case 131:
 case 128:
  VAR_10 = VAR_3;
  for (VAR_11 = 0; VAR_11 <= VAR_4; VAR_11++) {
   struct channel_subsystem *VAR_12;

   VAR_12 = VAR_5[VAR_11];
   FUNC_4(&VAR_12->mutex);
   if (!VAR_12->cm_enabled) {
    FUNC_5(&VAR_12->mutex);
    continue;
   }
   VAR_9 = (void *)FUNC_3(VAR_1 |
           VAR_0);
   if (VAR_9) {
    if (FUNC_0(VAR_12, 0, VAR_9))
     VAR_10 = VAR_2;
    FUNC_2((unsigned long)VAR_9);
   } else
    VAR_10 = VAR_2;

   FUNC_5(&VAR_12->mutex);
  }
  break;
 case 130:
 case 129:
  VAR_10 = VAR_3;
  for (VAR_11 = 0; VAR_11 <= VAR_4; VAR_11++) {
   struct channel_subsystem *VAR_13;

   VAR_13 = VAR_5[VAR_11];
   FUNC_4(&VAR_13->mutex);
   if (!VAR_13->cm_enabled) {
    FUNC_5(&VAR_13->mutex);
    continue;
   }
   VAR_9 = (void *)FUNC_3(VAR_1 |
           VAR_0);
   if (VAR_9) {
    if (FUNC_0(VAR_13, 1, VAR_9))
     VAR_10 = VAR_2;
    FUNC_2((unsigned long)VAR_9);
   } else
    VAR_10 = VAR_2;

   FUNC_5(&VAR_13->mutex);
  }

  FUNC_1();
  break;
 default:
  VAR_10 = VAR_3;
 }
 return VAR_10;

}
