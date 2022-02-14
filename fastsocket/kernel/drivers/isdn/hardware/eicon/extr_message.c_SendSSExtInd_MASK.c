
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t word ;
typedef int dword ;
typedef int byte ;
struct TYPE_4__ {scalar_t__ Ind; } ;
struct TYPE_5__ {int * appl; TYPE_1__ Sig; scalar_t__ State; } ;
typedef TYPE_2__ PLCI ;
typedef int APPL ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int ,int ,char*,int ,int ,int*) ;

__attribute__((used)) static void FUNC_1(APPL * VAR_6, PLCI * VAR_7, dword VAR_8, byte * * VAR_9)
{
  word VAR_10;
  if(
   VAR_7
   && VAR_7->State
   && VAR_7->Sig.Ind!=VAR_1
    )
 for(VAR_10=0;VAR_10<VAR_0;VAR_10++)
    {
      if(VAR_9[VAR_10][0]<6) continue;
   if(VAR_9[VAR_10][2]==VAR_2) continue;

   if(VAR_6)
   {
    VAR_9[VAR_10][0]=0;
    FUNC_0(VAR_6,VAR_5,
    VAR_8,
    0,
    "dwS",
    VAR_3,
    VAR_4,
    &VAR_9[VAR_10][3]);
   }
   else if(VAR_7->appl)
   {
    VAR_9[VAR_10][0]=0;
    FUNC_0(VAR_7->appl,VAR_5,
    VAR_8,
    0,
    "dwS",
    VAR_3,
    VAR_4,
    &VAR_9[VAR_10][3]);
   }
    }
}
