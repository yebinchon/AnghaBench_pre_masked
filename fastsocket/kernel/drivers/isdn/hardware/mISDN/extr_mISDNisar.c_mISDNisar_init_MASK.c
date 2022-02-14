
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct isar_hw {int * open; int * firmware; int * release; int * init; TYPE_2__* ch; void* hw; } ;
struct TYPE_4__ {int nr; int ctrl; int * send; } ;
struct TYPE_6__ {int nr; void* hw; TYPE_1__ ch; } ;
struct TYPE_5__ {struct isar_hw* is; TYPE_3__ bch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (TYPE_3__*,int ) ;

u32
FUNC_1(struct isar_hw *VAR_13, void *VAR_14)
{
 u32 VAR_15, VAR_16;

 VAR_13->hw = VAR_14;
 for (VAR_16 = 0; VAR_16 < 2; VAR_16++) {
  VAR_13->ch[VAR_16].bch.nr = VAR_16 + 1;
  FUNC_0(&VAR_13->ch[VAR_16].bch, VAR_6);
  VAR_13->ch[VAR_16].bch.ch.nr = VAR_16 + 1;
  VAR_13->ch[VAR_16].bch.ch.send = &VAR_10;
  VAR_13->ch[VAR_16].bch.ch.ctrl = VAR_9;
  VAR_13->ch[VAR_16].bch.hw = VAR_14;
  VAR_13->ch[VAR_16].is = VAR_13;
 }

 VAR_13->init = &VAR_8;
 VAR_13->release = &VAR_7;
 VAR_13->firmware = &VAR_12;
 VAR_13->open = &VAR_11;

 VAR_15 = (1 << (VAR_4 & VAR_2)) |
  (1 << (VAR_0 & VAR_2)) |
  (1 << (VAR_1 & VAR_2)) |
  (1 << (VAR_3 & VAR_2)) |
  (1 << (VAR_5 & VAR_2));

 return VAR_15;
}
