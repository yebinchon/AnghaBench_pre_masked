
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int dmacHw_CBLK_t ;
struct TYPE_2__ {int module; int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_3 (void*,int ,int) ;

void FUNC_4(void)
{

 uint32_t VAR_6 = 0;

 VAR_2 = FUNC_2(0);
 VAR_3 = FUNC_2(1);


 FUNC_0(VAR_0);
 FUNC_0(VAR_1);

 if ((VAR_2 + VAR_3) > VAR_4) {
  FUNC_1(0);
 }

 FUNC_3((void *)VAR_5, 0,
        sizeof(dmacHw_CBLK_t) * (VAR_2 + VAR_3));
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_5[VAR_6].module = 0;
  VAR_5[VAR_6].channel = VAR_6;
 }
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_5[VAR_6 + VAR_2].module = 1;
  VAR_5[VAR_6 + VAR_2].channel = VAR_6;
 }
}
