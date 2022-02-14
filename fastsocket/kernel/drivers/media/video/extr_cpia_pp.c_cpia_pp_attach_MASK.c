
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parport {int number; TYPE_1__* probe_info; } ;
struct TYPE_2__ {int * cmdset; int class; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;


 int FUNC_0 (struct parport*) ;
 int* VAR_2 ;
 int FUNC_1 (int *,char*,int) ;

__attribute__((used)) static void FUNC_2 (struct parport *VAR_3)
{
 unsigned int VAR_4;

 switch (VAR_2[0])
 {
 case 128:
 case 129:
  if (VAR_3->probe_info[0].class != VAR_0 ||
      VAR_3->probe_info[0].cmdset == ((void*)0) ||
      FUNC_1(VAR_3->probe_info[0].cmdset, "CPIA_1", 6) != 0)
   return;

  FUNC_0(VAR_3);

  break;

 default:
  for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4) {
   if (VAR_3->number == VAR_2[VAR_4]) {
    FUNC_0(VAR_3);
    break;
   }
  }
  break;
 }
}
