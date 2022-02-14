
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef void* UINT ;
struct TYPE_4__ {char* Name; scalar_t__ LineNumber; scalar_t__* FileName; int CallStack; int CreatedDate; void* Size; scalar_t__ Address; void* Id; } ;
typedef TYPE_1__ TRACKING_OBJECT ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int) ;
 void* VAR_0 ;
 int VAR_1 ;

void FUNC_11(UINT64 VAR_2, char *VAR_3, UINT VAR_4)
{
 TRACKING_OBJECT *VAR_5;
 UINT VAR_6;

 if (VAR_2 == 0 || VAR_3 == ((void*)0))
 {
  return;
 }

 if ((FUNC_3() && FUNC_2()) == 0)
 {

  return;
 }


 FUNC_6(VAR_1);
 {
  VAR_6 = ++VAR_0;
 }
 FUNC_8(VAR_1);

 VAR_5 = FUNC_7(sizeof(TRACKING_OBJECT));
 VAR_5->Id = VAR_6;
 VAR_5->Address = VAR_2;
 VAR_5->Name = VAR_3;
 VAR_5->Size = VAR_4;
 VAR_5->CreatedDate = FUNC_4();
 VAR_5->CallStack = FUNC_10(FUNC_0(), 2);

 VAR_5->FileName[0] = 0;
 VAR_5->LineNumber = 0;

 FUNC_5();
 {
  FUNC_1(VAR_5);
 }
 FUNC_9();
}
