
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int word ;
typedef size_t byte ;
struct TYPE_5__ {size_t* ch_ncci; size_t* ncci_ch; size_t* ncci_next; int * ncci_state; int * ncci_plci; } ;
struct TYPE_4__ {int ncci_ring_list; int Id; TYPE_2__* adapter; } ;
typedef TYPE_1__ PLCI ;
typedef TYPE_2__ DIVA_CAPI_ADAPTER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int ,size_t,int,...) ;
 int VAR_3 ;

__attribute__((used)) static word FUNC_2 (PLCI *VAR_4, byte VAR_5, word VAR_6)
{
  DIVA_CAPI_ADAPTER *VAR_7;
  word VAR_8, VAR_9, VAR_10, VAR_11;

  VAR_7 = VAR_4->adapter;
  if (!VAR_5 || VAR_7->ch_ncci[VAR_5])
  {
    VAR_3++;
    FUNC_0(1,FUNC_1("NCCI mapping exists %ld %02x %02x %02x-%02x",
      VAR_3, VAR_5, VAR_6, VAR_7->ncci_ch[VAR_7->ch_ncci[VAR_5]], VAR_7->ch_ncci[VAR_5]));
    VAR_8 = VAR_5;
  }
  else
  {
    if (VAR_6)
      VAR_8 = VAR_6;
    else
    {
      if ((VAR_5 < VAR_1+1) && !VAR_7->ncci_ch[VAR_5])
        VAR_8 = VAR_5;
      else
      {
        VAR_8 = 1;
        while ((VAR_8 < VAR_1+1) && VAR_7->ncci_ch[VAR_8])
          VAR_8++;
        if (VAR_8 == VAR_1+1)
        {
          VAR_3++;
          VAR_9 = 1;
          do
          {
            VAR_10 = 1;
            while ((VAR_10 < VAR_1+1) && (VAR_7->ncci_ch[VAR_10] != VAR_9))
              VAR_10++;
            VAR_11 = VAR_10;
            if (VAR_10 < VAR_1+1)
            {
              do
              {
                VAR_10++;
              } while ((VAR_10 < VAR_1+1) && (VAR_7->ncci_ch[VAR_10] != VAR_9));
            }
          } while ((VAR_9 < VAR_2+1) && (VAR_10 < VAR_1+1));
          if (VAR_9 < VAR_2+1)
          {
            FUNC_0(1,FUNC_1("NCCI mapping overflow %ld %02x %02x %02x-%02x-%02x",
              VAR_3, VAR_5, VAR_6, VAR_9, VAR_11, VAR_10));
          }
          else
          {
            FUNC_0(1,FUNC_1("NCCI mapping overflow %ld %02x %02x",
              VAR_3, VAR_5, VAR_6));
          }
          VAR_8 = VAR_5;
        }
      }
      VAR_7->ncci_plci[VAR_8] = VAR_4->Id;
      VAR_7->ncci_state[VAR_8] = VAR_0;
      if (!VAR_4->ncci_ring_list)
        VAR_4->ncci_ring_list = VAR_8;
      else
        VAR_7->ncci_next[VAR_8] = VAR_7->ncci_next[VAR_4->ncci_ring_list];
      VAR_7->ncci_next[VAR_4->ncci_ring_list] = (byte) VAR_8;
    }
    VAR_7->ncci_ch[VAR_8] = VAR_5;
    VAR_7->ch_ncci[VAR_5] = (byte) VAR_8;
    FUNC_0(1,FUNC_1("NCCI mapping established %ld %02x %02x %02x-%02x",
      VAR_3, VAR_5, VAR_6, VAR_5, VAR_8));
  }
  return (VAR_8);
}
