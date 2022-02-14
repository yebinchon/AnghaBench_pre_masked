
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int word ;
typedef int dword ;
typedef int byte ;
struct TYPE_7__ {int Id; scalar_t__* ncci_plci; size_t* ncci_ch; int* ncci_next; void** ncci_state; scalar_t__* ch_ncci; } ;
struct TYPE_6__ {scalar_t__ Id; int ncci_ring_list; TYPE_2__* adapter; } ;
typedef TYPE_1__ PLCI ;
typedef TYPE_2__ DIVA_CAPI_ADAPTER ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int ,int,int ,...) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4 (PLCI *VAR_3, word VAR_4, byte VAR_5)
{
  DIVA_CAPI_ADAPTER *VAR_6;
  dword VAR_7;
  word VAR_8;

  VAR_6 = VAR_3->adapter;
  VAR_7 = (((dword) VAR_4) << 16) | (((word)(VAR_3->Id)) << 8) | VAR_6->Id;
  if (!VAR_5)
    FUNC_3 (VAR_3, VAR_4);
  if (VAR_4)
  {
    if (VAR_6->ncci_plci[VAR_4] != VAR_3->Id)
    {
      VAR_2++;
      FUNC_1(1,FUNC_2("NCCI mapping doesn't exist %ld %08lx %02x",
        VAR_2, VAR_7, VAR_5));
    }
    else
    {
      FUNC_0 (VAR_3, VAR_4);
      FUNC_1(1,FUNC_2("NCCI mapping released %ld %08lx %02x %02x-%02x",
        VAR_2, VAR_7, VAR_5, VAR_6->ncci_ch[VAR_4], VAR_4));
      VAR_6->ch_ncci[VAR_6->ncci_ch[VAR_4]] = 0;
      if (!VAR_5)
      {
        VAR_6->ncci_ch[VAR_4] = 0;
        VAR_6->ncci_plci[VAR_4] = 0;
        VAR_6->ncci_state[VAR_4] = VAR_0;
        VAR_8 = VAR_3->ncci_ring_list;
        while ((VAR_8 != 0) && (VAR_6->ncci_next[VAR_8] != VAR_3->ncci_ring_list) && (VAR_6->ncci_next[VAR_8] != VAR_4))
          VAR_8 = VAR_6->ncci_next[VAR_8];
        if ((VAR_8 != 0) && (VAR_6->ncci_next[VAR_8] == VAR_4))
        {
          if (VAR_8 == VAR_4)
            VAR_3->ncci_ring_list = 0;
          else if (VAR_3->ncci_ring_list == VAR_4)
            VAR_3->ncci_ring_list = VAR_8;
          VAR_6->ncci_next[VAR_8] = VAR_6->ncci_next[VAR_4];
        }
        VAR_6->ncci_next[VAR_4] = 0;
      }
    }
  }
  else
  {
    for (VAR_4 = 1; VAR_4 < VAR_1+1; VAR_4++)
    {
      if (VAR_6->ncci_plci[VAR_4] == VAR_3->Id)
      {
        FUNC_0 (VAR_3, VAR_4);
        FUNC_1(1,FUNC_2("NCCI mapping released %ld %08lx %02x %02x-%02x",
          VAR_2, VAR_7, VAR_5, VAR_6->ncci_ch[VAR_4], VAR_4));
        VAR_6->ch_ncci[VAR_6->ncci_ch[VAR_4]] = 0;
        if (!VAR_5)
        {
          VAR_6->ncci_ch[VAR_4] = 0;
          VAR_6->ncci_plci[VAR_4] = 0;
          VAR_6->ncci_state[VAR_4] = VAR_0;
          VAR_6->ncci_next[VAR_4] = 0;
        }
      }
    }
    if (!VAR_5)
      VAR_3->ncci_ring_list = 0;
  }
}
