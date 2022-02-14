
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {scalar_t__ oldest_time; } ;
struct TYPE_3__ {int arg4; int arg3; int arg2; int arg1; int timestamp; int debugid; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;
 TYPE_2__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (char*) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_5(void)
{
 if (FUNC_1() != VAR_7) {
  FUNC_4("kernel_debug_early_end() not call on boot processor");
 }


 VAR_2.oldest_time = 0;



 FUNC_2(0,
   VAR_1,
   0,
   (uint32_t)(VAR_9 >> 32),
   (uint32_t)VAR_9,
   VAR_8,
   0,
   0);

 for (unsigned int VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  FUNC_2(0,
   VAR_3[VAR_10].debugid,
   VAR_3[VAR_10].timestamp,
   VAR_3[VAR_10].arg1,
   VAR_3[VAR_10].arg2,
   VAR_3[VAR_10].arg3,
   VAR_3[VAR_10].arg4,
   0);
 }


 if (VAR_6) {
  FUNC_0(VAR_0, 1);
 }

 VAR_4 = 1;


 FUNC_3("early trace done");
}
