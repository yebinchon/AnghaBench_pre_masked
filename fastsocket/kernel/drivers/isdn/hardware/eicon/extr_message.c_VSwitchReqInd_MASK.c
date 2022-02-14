
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t word ;
typedef int dword ;
typedef int byte ;
struct TYPE_9__ {int vswitchstate; int internal_command; int command; int ptyState; } ;
struct TYPE_7__ {scalar_t__ Ind; } ;
struct TYPE_8__ {int vswitchstate; int vsprot; int vsprotdialect; TYPE_3__* relatedPTYPLCI; int ptyState; TYPE_1__ Sig; int State; int appl; } ;
typedef TYPE_2__ PLCI ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_3__*,int ,int*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int,int ) ;

__attribute__((used)) static void FUNC_5(PLCI *VAR_8, dword VAR_9, byte **VAR_10)
{
 word VAR_11;
 if(!VAR_8 ||
  !VAR_8->appl ||
  !VAR_8->State ||
  VAR_8->Sig.Ind==VAR_2
  )
  return;

 for(VAR_11=0;VAR_11<VAR_1;VAR_11++)
 {
        if(!VAR_10[VAR_11][0]) continue;
  if(VAR_10[VAR_11][0]<7)
  {
   VAR_10[VAR_11][0]=0;
   continue;
  }
  FUNC_1(1,FUNC_2("VSwitchReqInd(%d)",VAR_10[VAR_11][4]));
  switch(VAR_10[VAR_11][4])
  {
  case 129:
   if(!VAR_8->relatedPTYPLCI ||
    (VAR_8->ptyState!=VAR_3 && VAR_8->relatedPTYPLCI->ptyState!=VAR_3))
   {
    break;
   }

   if(VAR_10[VAR_11][0]!=11 || VAR_10[VAR_11][8]!=3)
   {
    break;
   }
   if(VAR_10[VAR_11][2]==VAR_5 && VAR_10[VAR_11][9]==1)
   {
    VAR_8->vswitchstate=VAR_10[VAR_11][9];
    VAR_10[VAR_11][9]=2;

   }
   else if(VAR_10[VAR_11][2]==VAR_6 && VAR_10[VAR_11][9]==3)
   {
    VAR_8->vswitchstate=VAR_10[VAR_11][9];


   }
   else
   {
    break;
   }
   VAR_8->vsprot=VAR_10[VAR_11][10];
   VAR_8->vsprotdialect=VAR_10[VAR_11][11];

   VAR_10[VAR_11][1]=VAR_4;
   VAR_10[VAR_11][2]=VAR_6;

   VAR_8->relatedPTYPLCI->command = 0;
   VAR_8->relatedPTYPLCI->internal_command = VAR_7;
   FUNC_0(VAR_8->relatedPTYPLCI,VAR_0,&VAR_10[VAR_11][0]);
   FUNC_4(VAR_8->relatedPTYPLCI,VAR_6,0);
   FUNC_3(VAR_8->relatedPTYPLCI);
   break;
  case 128:
  default:
   if(VAR_8->relatedPTYPLCI &&
    VAR_8->vswitchstate==3 &&
    VAR_8->relatedPTYPLCI->vswitchstate==3)
   {
    FUNC_0(VAR_8->relatedPTYPLCI,VAR_0,&VAR_10[VAR_11][0]);
    FUNC_4(VAR_8->relatedPTYPLCI,VAR_6,0);
    FUNC_3(VAR_8->relatedPTYPLCI);
   }
   break;
  }
  VAR_10[VAR_11][0]=0;
 }
}
