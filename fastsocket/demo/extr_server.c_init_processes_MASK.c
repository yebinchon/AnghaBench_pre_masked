
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct worker_data {int dummy; } ;
struct TYPE_4__ {int process; scalar_t__ cpu_id; scalar_t__ trancnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 TYPE_1__* FUNC_5 (int *,int,int,int,int,int ) ;
 int VAR_4 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (void*) ;
 scalar_t__ VAR_5 ;
 TYPE_1__* VAR_6 ;

void FUNC_8(void)
{
 int VAR_7, VAR_8;

 VAR_6 = FUNC_5(((void*)0), VAR_4 * sizeof(struct worker_data),
       VAR_2|VAR_3,
       VAR_0|VAR_1,
       -1, 0);

 FUNC_4(VAR_6, 0, VAR_4 * sizeof(struct worker_data));

 if (VAR_6 == ((void*)0)) {
  FUNC_6("Unable to mmap shared global wdata");
  FUNC_1();
 }

 for(VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_6[VAR_7].trancnt = 0;
  VAR_6[VAR_7].cpu_id = VAR_7 + VAR_5;

  if ( (VAR_8 = FUNC_2()) < 0) {
   FUNC_6("Unable to fork child process");
   FUNC_1();
  } else if( VAR_8 == 0) {
   VAR_6[VAR_7].process = FUNC_3();
   FUNC_7((void *)&(VAR_6[VAR_7]));
   FUNC_0(0);
  }
 }
}
