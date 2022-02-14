
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_4__ {int data; } ;
typedef TYPE_1__ gca_pad_t ;


 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, uint8_t *VAR_1, uint16_t VAR_2)
{
   gca_pad_t *VAR_3 = (gca_pad_t *)VAR_0;
   uint32_t VAR_4, VAR_5;

   if(!VAR_3 || !VAR_1 || VAR_2 > sizeof(VAR_3->data))
      return;

   FUNC_0(VAR_3->data, VAR_1, VAR_2);
   FUNC_1(VAR_3);
   FUNC_2(VAR_3);
}
