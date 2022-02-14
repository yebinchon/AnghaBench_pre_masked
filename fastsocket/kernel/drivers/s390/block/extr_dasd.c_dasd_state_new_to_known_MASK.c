
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int state; scalar_t__ block; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct dasd_device*) ;
 int FUNC_2 (struct dasd_device*) ;

__attribute__((used)) static int FUNC_3(struct dasd_device *VAR_1)
{
 int VAR_2;





 FUNC_1(VAR_1);

 if (VAR_1->block) {
  VAR_2 = FUNC_0(VAR_1->block);
  if (VAR_2) {
   FUNC_2(VAR_1);
   return VAR_2;
  }
 }
 VAR_1->state = VAR_0;
 return 0;
}
