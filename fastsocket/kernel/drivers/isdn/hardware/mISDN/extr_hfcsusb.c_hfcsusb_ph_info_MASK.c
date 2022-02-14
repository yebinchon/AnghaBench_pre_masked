
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ph_info_dch {int dummy; } ;
struct ph_info_ch {int dummy; } ;
struct TYPE_7__ {int Flags; int protocol; } ;
struct TYPE_8__ {int num_bch; int state; TYPE_1__ ch; } ;
struct ph_info {TYPE_4__* bch; TYPE_2__ dch; } ;
struct TYPE_12__ {int nrbchan; int D; } ;
struct dchannel {TYPE_6__ dev; int state; int Flags; } ;
struct hfcsusb {TYPE_5__* bch; int protocol; struct dchannel dch; } ;
struct TYPE_9__ {int protocol; } ;
struct TYPE_11__ {int Flags; TYPE_3__ ch; } ;
struct TYPE_10__ {int Flags; int protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int,struct ph_info*,int ) ;
 struct ph_info* FUNC_1 (int,int ) ;

__attribute__((used)) static void
FUNC_2(struct hfcsusb *VAR_3)
{
 struct ph_info *VAR_4;
 struct dchannel *VAR_5 = &VAR_3->dch;
 int VAR_6;

 VAR_4 = FUNC_1(sizeof(struct ph_info) +
  VAR_5->dev.nrbchan * sizeof(struct ph_info_ch), VAR_0);
 VAR_4->dch.ch.protocol = VAR_3->protocol;
 VAR_4->dch.ch.Flags = VAR_5->Flags;
 VAR_4->dch.state = VAR_5->state;
 VAR_4->dch.num_bch = VAR_5->dev.nrbchan;
 for (VAR_6 = 0; VAR_6 < VAR_5->dev.nrbchan; VAR_6++) {
  VAR_4->bch[VAR_6].protocol = VAR_3->bch[VAR_6].ch.protocol;
  VAR_4->bch[VAR_6].Flags = VAR_3->bch[VAR_6].Flags;
 }
 FUNC_0(&VAR_5->dev.D, VAR_2, VAR_1,
  sizeof(struct ph_info_dch) + VAR_5->dev.nrbchan *
  sizeof(struct ph_info_ch), VAR_4, VAR_0);
}
