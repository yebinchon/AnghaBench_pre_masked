
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* KeySchedule; int KeyValue; } ;
typedef int DES_key_schedule ;
typedef TYPE_1__ DES_KEY_VALUE ;


 int FUNC_0 (int ,void*,int ) ;
 int VAR_0 ;
 int FUNC_1 (void*,void*) ;
 void* FUNC_2 (int) ;

DES_KEY_VALUE *FUNC_3(void *VAR_1)
{
 DES_KEY_VALUE *VAR_2;

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_2(sizeof(DES_KEY_VALUE));

 FUNC_0(VAR_2->KeyValue, VAR_1, VAR_0);

 VAR_2->KeySchedule = FUNC_2(sizeof(DES_key_schedule));

 FUNC_1(VAR_1, VAR_2->KeySchedule);

 return VAR_2;
}
