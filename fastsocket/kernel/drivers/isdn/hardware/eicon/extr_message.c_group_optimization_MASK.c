
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int word ;
typedef scalar_t__ dword ;
struct TYPE_11__ {int MaxNCCI; scalar_t__ Id; } ;
struct TYPE_10__ {int group_optimization_enabled; scalar_t__* CIP_Mask; int max_plci; scalar_t__* Info_Mask; TYPE_1__* plci; } ;
struct TYPE_9__ {TYPE_8__* appl; scalar_t__ Id; } ;
typedef TYPE_1__ PLCI ;
typedef TYPE_2__ DIVA_CAPI_ADAPTER ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_8__* VAR_2 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,...) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_5(DIVA_CAPI_ADAPTER * VAR_4, PLCI * VAR_5)
{
  word VAR_6,VAR_7,VAR_8,VAR_9,VAR_10;
  dword VAR_11[VAR_1];
  dword VAR_12[VAR_1];
  word VAR_13[VAR_0];
  PLCI *VAR_14;

  FUNC_3 (VAR_5);

  if(!VAR_4->group_optimization_enabled)
  {
    FUNC_1(1,FUNC_2("No group optimization"));
    return;
  }

  FUNC_1(1,FUNC_2("Group optimization = 0x%x...", VAR_4->group_optimization_enabled));

  for(VAR_6=0;VAR_6<VAR_1;VAR_6++)
  {
    VAR_11[VAR_6] = 0;
    VAR_12 [VAR_6] = 0;
  }
  for(VAR_6=0;VAR_6<VAR_0;VAR_6++)
  {
    VAR_13[VAR_6] = 0;
  }
  for(VAR_6=0; VAR_6<VAR_3; VAR_6++)
  {
    if(VAR_2[VAR_6].Id && (VAR_2[VAR_6].MaxNCCI) > 1 && (VAR_4->CIP_Mask[VAR_6]) && (VAR_4->group_optimization_enabled ==1) )
    {
      FUNC_1(1,FUNC_2("Multi-Instance capable, no optimization required"));
      return;
    }
  }
  for(VAR_6=0; VAR_6<VAR_3; VAR_6++)
  {
    if(VAR_2[VAR_6].Id && VAR_4->CIP_Mask[VAR_6] )
    {
      for(VAR_8=0,VAR_9=0; VAR_8<VAR_4->max_plci; VAR_8++)
      {
        if(VAR_4->plci[VAR_8].Id)
        {
          VAR_14 = &VAR_4->plci[VAR_8];
          if(VAR_14->appl == &VAR_2[VAR_6])
          {
            VAR_9 = 1;
            FUNC_1(1,FUNC_2("Appl 0x%x is busy",VAR_6+1));
          }
          else if(FUNC_4 (VAR_14, VAR_6))
          {
            VAR_9 = 1;
            FUNC_1(1,FUNC_2("Appl 0x%x has inc. call pending",VAR_6+1));
          }
        }
      }

      for(VAR_7=0,VAR_10=0; VAR_7<=(VAR_1) && !VAR_9 &&!VAR_10; VAR_7++)
      {
        if(VAR_7==VAR_1)
        {
          VAR_13[VAR_6] = VAR_1;
          VAR_10=1;
          FUNC_1(1,FUNC_2("Field overflow appl 0x%x",VAR_6+1));
        }
        else if( (VAR_11[VAR_7]==VAR_4->CIP_Mask[VAR_6]) && (VAR_12[VAR_7]==VAR_4->Info_Mask[VAR_6]) )
        {
          VAR_13[VAR_6] = VAR_7|0x80;
          VAR_10=1;
          FUNC_1(1,FUNC_2("Group 0x%x found with appl 0x%x, CIP=0x%lx",VAR_13[VAR_6],VAR_6+1,VAR_11[VAR_7]));
        }
        else if(!VAR_11[VAR_7])
        {
          VAR_13[VAR_6] = VAR_7|0x80;
          VAR_11[VAR_7] = VAR_4->CIP_Mask[VAR_6];
          VAR_12[VAR_7] = VAR_4->Info_Mask[VAR_6];
          VAR_10=1;
          FUNC_1(1,FUNC_2("New Group 0x%x established with appl 0x%x, CIP=0x%lx",VAR_13[VAR_6],VAR_6+1,VAR_11[VAR_7]));
        }
      }
    }
  }

  for(VAR_6=0; VAR_6<VAR_3; VAR_6++)
  {
    if(VAR_13[VAR_6])
    {
      if(VAR_13[VAR_6] == VAR_1)
      {
        FUNC_1(1,FUNC_2("OverflowGroup 0x%x, valid appl = 0x%x, call enabled",VAR_13[VAR_6],VAR_6+1));
      }
      else
      {
        FUNC_1(1,FUNC_2("Group 0x%x, valid appl = 0x%x",VAR_13[VAR_6],VAR_6+1));
        for(VAR_7=VAR_6+1; VAR_7<VAR_3; VAR_7++)
        {
          if(VAR_13[VAR_6] == VAR_13[VAR_7])
          {
            FUNC_1(1,FUNC_2("Appl 0x%x is member of group 0x%x, no call",VAR_7+1,VAR_13[VAR_7]));
            FUNC_0 (VAR_5, VAR_7);
            VAR_13[VAR_7] = 0;
          }
        }
      }
    }
    else
    {
      FUNC_0 (VAR_5, VAR_6);
    }
  }

}
