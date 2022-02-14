
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int device_name; } ;
typedef TYPE_1__ MGSLPC_INFO ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(MGSLPC_INFO *VAR_1)
{
 if (FUNC_2(VAR_1) < 0 ) {
  FUNC_0( "Cant allocate rx buffer %s\n", VAR_1->device_name);
  FUNC_1(VAR_1);
  return -VAR_0;
 }
 return 0;
}
