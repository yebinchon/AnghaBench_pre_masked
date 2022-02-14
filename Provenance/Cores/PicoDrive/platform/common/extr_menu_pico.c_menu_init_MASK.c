
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int enabled; char* name; int * data; } ;
struct TYPE_7__ {int * cpu_clock_set; int * gamma_set; int * hwfilters; int * vout_methods; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 TYPE_2__* VAR_6 ;
 TYPE_2__* VAR_7 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 () ;
 TYPE_1__ VAR_8 ;

void FUNC_3(void)
{
 int VAR_9;

 FUNC_2();

 VAR_9 = 0;



 FUNC_0(VAR_5, VAR_0, VAR_9);

 VAR_9 = FUNC_1(VAR_6, VAR_4);
 VAR_6[VAR_9].data = VAR_8.vout_methods;
 FUNC_0(VAR_6, VAR_4,
  VAR_8.vout_methods != ((void*)0));

 VAR_9 = FUNC_1(VAR_6, VAR_2);
 VAR_6[VAR_9].data = VAR_8.hwfilters;
 FUNC_0(VAR_6, VAR_2,
  VAR_8.hwfilters != ((void*)0));

 FUNC_0(VAR_6, VAR_1,
                VAR_8.gamma_set != ((void*)0));

 VAR_9 = FUNC_1(VAR_7, VAR_3);
 VAR_7[VAR_9].enabled = 0;
 if (VAR_8.cpu_clock_set != ((void*)0)) {
  VAR_7[VAR_9].name = "CPU clock";
  VAR_7[VAR_9].enabled = 1;
 }
}
