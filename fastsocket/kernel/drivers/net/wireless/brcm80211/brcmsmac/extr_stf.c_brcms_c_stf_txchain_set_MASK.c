
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint ;
typedef size_t u8 ;
struct brcms_c_info {TYPE_2__* stf; TYPE_1__* band; int * bandstate; } ;
typedef scalar_t__ s32 ;
struct TYPE_4__ {size_t txchain; size_t hw_txchain; size_t txstreams; int rxchain; int txant; } ;
struct TYPE_3__ {int pi; int band_stf_stbc_tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct brcms_c_info*) ;
 int FUNC_1 (struct brcms_c_info*,int ) ;
 int FUNC_2 (struct brcms_c_info*,int ) ;
 int FUNC_3 (struct brcms_c_info*,size_t,int ) ;
 scalar_t__ FUNC_4 (size_t) ;
 int * VAR_6 ;
 int FUNC_5 (int ,size_t,int ) ;

int FUNC_6(struct brcms_c_info *VAR_7, s32 VAR_8, bool VAR_9)
{
 u8 VAR_10 = (u8) VAR_8;
 u8 VAR_11;
 uint VAR_12;

 if (VAR_7->stf->txchain == VAR_10)
  return 0;

 if ((VAR_10 & ~VAR_7->stf->hw_txchain)
     || !(VAR_10 & VAR_7->stf->hw_txchain))
  return -VAR_4;





 VAR_11 = (u8) FUNC_4(VAR_10);
 if (VAR_11 > VAR_5)
  return -VAR_4;

 VAR_7->stf->txchain = VAR_10;
 VAR_7->stf->txstreams = VAR_11;
 FUNC_2(VAR_7, VAR_7->band->band_stf_stbc_tx);
 FUNC_1(VAR_7, VAR_7->bandstate[VAR_2]);
 FUNC_1(VAR_7, VAR_7->bandstate[VAR_3]);
 VAR_7->stf->txant =
     (VAR_7->stf->txstreams == 1) ? VAR_1 : VAR_0;
 FUNC_0(VAR_7);

 FUNC_5(VAR_7->band->pi, VAR_7->stf->txchain,
         VAR_7->stf->rxchain);

 for (VAR_12 = 1; VAR_12 <= VAR_5; VAR_12++)
  FUNC_3(VAR_7, (u8) VAR_12, VAR_6[VAR_12]);

 return 0;
}
