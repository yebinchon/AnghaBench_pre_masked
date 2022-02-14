
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ line; int filename; } ;
struct TYPE_4__ {scalar_t__ LineNumber; scalar_t__* FileName; TYPE_3__* CallStack; } ;
typedef TYPE_1__ TRACKING_OBJECT ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (scalar_t__*,int,int ) ;
 scalar_t__ FUNC_2 (int ) ;

void FUNC_3(TRACKING_OBJECT *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 if (!(VAR_0->LineNumber == 0 && VAR_0->FileName[0] == 0))
 {
  return;
 }

 if (VAR_0->CallStack != ((void*)0))
 {
  FUNC_0(VAR_0->CallStack);
  if (FUNC_2(VAR_0->CallStack->filename) != 0 && VAR_0->CallStack->line != 0)
  {
   FUNC_1(VAR_0->FileName, sizeof(VAR_0->FileName), VAR_0->CallStack->filename);
   VAR_0->LineNumber = VAR_0->CallStack->line;
  }
 }
}
