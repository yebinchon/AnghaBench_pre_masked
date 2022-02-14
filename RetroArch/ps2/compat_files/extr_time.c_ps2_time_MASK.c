
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_4__ {int second; int minute; int hour; int day; int month; int year; } ;
typedef TYPE_1__ sceCdCLOCK ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

time_t FUNC_4(time_t *VAR_1) {
   time_t VAR_2;
   sceCdCLOCK VAR_3;

   FUNC_3(&VAR_3);
   FUNC_2(&VAR_3);

   VAR_2 = FUNC_1 (FUNC_0(VAR_3.year)+ VAR_0,
                        FUNC_0(VAR_3.month),
                        FUNC_0(VAR_3.day),
                        FUNC_0(VAR_3.hour),
                        FUNC_0(VAR_3.minute),
                        FUNC_0(VAR_3.second));

 if(VAR_1)
  *VAR_1 = VAR_2;

 return VAR_2;
}
