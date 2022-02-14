
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_11__ {TYPE_1__* Cedar; } ;
struct TYPE_10__ {size_t NumTokens; char** Token; } ;
struct TYPE_9__ {scalar_t__ Bridge; } ;
typedef TYPE_2__ TOKEN_LIST ;
typedef TYPE_3__ SERVER ;
typedef int FOLDER ;


 TYPE_2__* FUNC_0 (int *) ;
 int * FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int *,char*) ;
 scalar_t__ FUNC_5 (char*,int ) ;

void FUNC_6(SERVER *VAR_1, FOLDER *VAR_2)
{
 UINT VAR_3;
 FOLDER *VAR_4;
 TOKEN_LIST *VAR_5;
 bool VAR_6 = 0;

 if (VAR_2 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_5 = FUNC_0(VAR_2);
 for (VAR_3 = 0;VAR_3 < VAR_5->NumTokens;VAR_3++)
 {
  char *VAR_7 = VAR_5->Token[VAR_3];


  if (VAR_1->Cedar->Bridge)
  {
   if (FUNC_5(VAR_7, VAR_0) == 0)
   {


    VAR_6 = 1;
   }
   else
   {
    continue;
   }
  }
  VAR_4 = FUNC_1(VAR_2, VAR_7);
  if (VAR_4 != ((void*)0))
  {
   FUNC_4(VAR_1, VAR_4, VAR_7);
  }
 }
 FUNC_2(VAR_5);

 if (VAR_1->Cedar->Bridge && VAR_6 == 0)
 {

  FUNC_3(VAR_1);
 }
}
