
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int word ;
typedef int dword ;
typedef scalar_t__ byte ;
struct TYPE_7__ {int MaxBuffer; int* DataNCCI; int* DataFlags; } ;
struct TYPE_6__ {int Id; scalar_t__* ncci_plci; } ;
struct TYPE_5__ {scalar_t__ Id; TYPE_3__* appl; TYPE_2__* adapter; } ;
typedef TYPE_1__ PLCI ;
typedef TYPE_2__ DIVA_CAPI_ADAPTER ;
typedef TYPE_3__ APPL ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2 (PLCI *VAR_2, word VAR_3)
{
  DIVA_CAPI_ADAPTER *VAR_4;
  APPL *VAR_5;
  word VAR_6, VAR_7;
  dword VAR_8;

  VAR_4 = VAR_2->adapter;
  VAR_8 = (((dword) VAR_3) << 16) | (((word)(VAR_2->Id)) << 8) | VAR_4->Id;
  if (VAR_3)
  {
    if (VAR_4->ncci_plci[VAR_3] == VAR_2->Id)
    {
      if (!VAR_2->appl)
      {
        VAR_1++;
        FUNC_0(1,FUNC_1("NCCI mapping appl expected %ld %08lx",
          VAR_1, VAR_8));
      }
      else
      {
        VAR_5 = VAR_2->appl;
        VAR_7 = VAR_3 | (((word) VAR_4->Id) << 8);
        for (VAR_6 = 0; VAR_6 < VAR_5->MaxBuffer; VAR_6++)
        {
          if ((VAR_5->DataNCCI[VAR_6] == VAR_7)
           && (((byte)(VAR_5->DataFlags[VAR_6] >> 8)) == VAR_2->Id))
          {
            VAR_5->DataNCCI[VAR_6] = 0;
          }
        }
      }
    }
  }
  else
  {
    for (VAR_3 = 1; VAR_3 < VAR_0+1; VAR_3++)
    {
      if (VAR_4->ncci_plci[VAR_3] == VAR_2->Id)
      {
        if (!VAR_2->appl)
        {
          VAR_1++;
          FUNC_0(1,FUNC_1("NCCI mapping no appl %ld %08lx",
            VAR_1, VAR_8));
        }
        else
        {
          VAR_5 = VAR_2->appl;
          VAR_7 = VAR_3 | (((word) VAR_4->Id) << 8);
          for (VAR_6 = 0; VAR_6 < VAR_5->MaxBuffer; VAR_6++)
          {
            if ((VAR_5->DataNCCI[VAR_6] == VAR_7)
             && (((byte)(VAR_5->DataFlags[VAR_6] >> 8)) == VAR_2->Id))
            {
              VAR_5->DataNCCI[VAR_6] = 0;
            }
          }
        }
      }
    }
  }
}
