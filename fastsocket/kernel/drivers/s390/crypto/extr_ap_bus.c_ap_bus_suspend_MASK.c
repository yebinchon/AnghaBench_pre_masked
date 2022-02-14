
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct ap_device {int unregistered; int lock; } ;
typedef int pm_message_t ;


 int FUNC_0 (struct ap_device*,unsigned long*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct ap_device* FUNC_6 (struct device*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_4, pm_message_t VAR_5)
{
 struct ap_device *VAR_6 = FUNC_6(VAR_4);
 unsigned long VAR_7;

 if (!VAR_1) {
  VAR_1 = 1;




  FUNC_1(&VAR_0);
  if (VAR_3 != ((void*)0)) {
   FUNC_2(VAR_3);
   VAR_3 = ((void*)0);
  }

  FUNC_5(&VAR_2);
 }

 do {
  VAR_7 = 0;
  FUNC_3(&VAR_6->lock);
  FUNC_0(VAR_6, &VAR_7);
  FUNC_4(&VAR_6->lock);
 } while ((VAR_7 & 1) || (VAR_7 & 2));

 FUNC_3(&VAR_6->lock);
 VAR_6->unregistered = 1;
 FUNC_4(&VAR_6->lock);

 return 0;
}
