
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct adv_dvc_var {TYPE_1__* carr_freelist; TYPE_1__* carrier_buf; } ;
struct TYPE_5__ {void* next_vpa; void* carr_va; void* carr_pa; } ;
typedef scalar_t__ ADV_SDCNT ;
typedef void* ADV_PADDR ;
typedef TYPE_1__ ADV_CARR_T ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct adv_dvc_var *VAR_1)
{
 ADV_CARR_T *VAR_2;
 ADV_SDCNT VAR_3;
 ADV_PADDR VAR_4;

 VAR_2 = (ADV_CARR_T *) FUNC_0(VAR_1->carrier_buf);
 VAR_1->carr_freelist = ((void*)0);
 if (VAR_2 == VAR_1->carrier_buf) {
  VAR_3 = VAR_0;
 } else {
  VAR_3 = VAR_0 - sizeof(ADV_CARR_T);
 }

 do {

  VAR_4 = FUNC_2(FUNC_3(VAR_2));

  VAR_3 -= sizeof(ADV_CARR_T);

  VAR_2->carr_pa = VAR_4;
  VAR_2->carr_va = FUNC_2(FUNC_1(VAR_2));




  VAR_2->next_vpa =
   FUNC_2(FUNC_1(VAR_1->carr_freelist));
  VAR_1->carr_freelist = VAR_2;

  VAR_2++;
 } while (VAR_3 > 0);
}
