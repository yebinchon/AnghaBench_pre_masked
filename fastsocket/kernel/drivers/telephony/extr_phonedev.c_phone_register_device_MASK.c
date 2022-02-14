
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phone_device {int minor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct phone_device** VAR_3 ;
 int VAR_4 ;

int FUNC_2(struct phone_device *VAR_5, int VAR_6)
{
 int VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_7 = 0;
 VAR_8 = VAR_1 - 1;

 if (VAR_6 != VAR_2) {
  VAR_7 = VAR_6;
  VAR_8 = VAR_6 + 1;
 }

 FUNC_0(&VAR_4);
 for (VAR_9 = VAR_7; VAR_9 < VAR_8; VAR_9++) {
  if (VAR_3[VAR_9] == ((void*)0)) {
   VAR_3[VAR_9] = VAR_5;
   VAR_5->minor = VAR_9;
   FUNC_1(&VAR_4);
   return 0;
  }
 }
 FUNC_1(&VAR_4);
 return -VAR_0;
}
