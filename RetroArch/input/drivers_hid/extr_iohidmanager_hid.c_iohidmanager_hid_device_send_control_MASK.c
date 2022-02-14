
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct iohidmanager_hid_adapter {int handle; } ;


 int FUNC_0 (int ,int ,int,int *,size_t) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(void *VAR_1,
      uint8_t* VAR_2, size_t VAR_3)
{
   struct iohidmanager_hid_adapter *VAR_4 =
      (struct iohidmanager_hid_adapter*)VAR_1;

   if (VAR_4)
      FUNC_0(VAR_4->handle,
            VAR_0, 0x01, VAR_2 + 1, VAR_3 - 1);
}
