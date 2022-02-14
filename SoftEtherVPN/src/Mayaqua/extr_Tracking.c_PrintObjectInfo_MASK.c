
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_3__ {int CallStack; int Size; int Address; int Name; int Id; int CreatedDate; } ;
typedef TYPE_1__ TRACKING_OBJECT ;
typedef int SYSTEMTIME ;


 int FUNC_0 (char*,int,int *) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int ,int ,int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(TRACKING_OBJECT *VAR_1)
{
 SYSTEMTIME VAR_2;
 char VAR_3[VAR_0];

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_3(&VAR_2, VAR_1->CreatedDate);
 FUNC_0(VAR_3, sizeof(VAR_3), &VAR_2);

 FUNC_1("    TRACKING_OBJECT ID: %u\n"
  "  TRACKING_OBJECT TYPE: %s\n"
  "      ADDRESS: 0x%p\n"
  "  TRACKING_OBJECT SIZE: %u bytes\n"
  " CREATED DATE: %s\n",
  VAR_1->Id, VAR_1->Name, FUNC_4(VAR_1->Address), VAR_1->Size, VAR_3);

 FUNC_2(VAR_1->CallStack);
}
