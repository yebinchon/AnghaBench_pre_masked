
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HIDClient ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (int,int) ;

__attribute__((used)) static HIDClient *FUNC_2(void)
{
   FUNC_0("[hid]: new_hidclient()\n");
   return FUNC_1(32, sizeof(HIDClient));
}
