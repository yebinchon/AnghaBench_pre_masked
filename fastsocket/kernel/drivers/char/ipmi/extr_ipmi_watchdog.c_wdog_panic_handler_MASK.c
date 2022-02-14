
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_1(struct notifier_block *VAR_6,
         unsigned long VAR_7,
         void *VAR_8)
{
 static int VAR_9;





 if (VAR_5 && !VAR_9 &&
     VAR_2 != VAR_1) {

  VAR_9 = 1;

  VAR_4 = 255;
  VAR_3 = 0;
  FUNC_0();
 }

 return VAR_0;
}
