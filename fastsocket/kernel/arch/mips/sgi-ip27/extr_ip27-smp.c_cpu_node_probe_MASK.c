
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t nasid_t ;
struct TYPE_3__ {size_t* g_nasidtable; } ;
typedef TYPE_1__ gda_t ;


 TYPE_1__* VAR_0 ;
 void* VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t* VAR_6 ;
 void** VAR_7 ;
 int FUNC_0 (int,size_t,int) ;
 int* VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int,int ) ;

void FUNC_5(void)
{
 int VAR_10, VAR_11 = 0;
 gda_t *VAR_12 = VAR_0;




 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
  VAR_6[VAR_10] = VAR_2;
 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++)
  VAR_8[VAR_10] = VAR_1;
 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
  VAR_7[VAR_10] = VAR_1;





 FUNC_2(VAR_9);
 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  nasid_t VAR_13 = VAR_12->g_nasidtable[VAR_10];
  if (VAR_13 == VAR_2)
   break;
  VAR_6[VAR_10] = VAR_13;
  VAR_8[VAR_13] = VAR_10;
  FUNC_1(FUNC_3());
  VAR_11 = FUNC_0(VAR_10, VAR_13, VAR_11);
 }

 FUNC_4("Discovered %d cpus on %d nodes\n", VAR_11 + 1, FUNC_3());
}
