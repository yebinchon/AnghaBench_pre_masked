
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hifn_dma {int cmdu; int srcu; int dstu; int resu; int cmdk; int srck; int dstk; int resk; int resi; int dsti; int srci; int cmdi; TYPE_4__* dstr; TYPE_3__* cmdr; TYPE_2__* srcr; TYPE_1__* resr; } ;
struct hifn_device {int name; scalar_t__* sa; scalar_t__ reset; int success; scalar_t__ desc_virt; } ;
struct TYPE_8__ {int l; } ;
struct TYPE_7__ {int l; } ;
struct TYPE_6__ {int l; } ;
struct TYPE_5__ {int l; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ,int ,int ,int ,int,int,int,int,int,int,int,int) ;
 int FUNC_2 (struct hifn_device*,int) ;
 int FUNC_3 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_4(struct hifn_device *VAR_5, int VAR_6)
{
 struct hifn_dma *VAR_7 = (struct hifn_dma *)VAR_5->desc_virt;
 int VAR_8, VAR_9;

 FUNC_1("%s: ring cleanup 1: i: %d.%d.%d.%d, u: %d.%d.%d.%d, "
   "k: %d.%d.%d.%d.\n",
   VAR_5->name,
   VAR_7->cmdi, VAR_7->srci, VAR_7->dsti, VAR_7->resi,
   VAR_7->cmdu, VAR_7->srcu, VAR_7->dstu, VAR_7->resu,
   VAR_7->cmdk, VAR_7->srck, VAR_7->dstk, VAR_7->resk);

 VAR_8 = VAR_7->resk; VAR_9 = VAR_7->resu;
 while (VAR_9 != 0) {
  if (VAR_7->resr[VAR_8].l & FUNC_0(VAR_4))
   break;

  if (VAR_5->sa[VAR_8]) {
   VAR_5->success++;
   VAR_5->reset = 0;
   FUNC_3(VAR_5->sa[VAR_8], VAR_6);
   FUNC_2(VAR_5, VAR_8);
  }

  if (++VAR_8 == VAR_2)
   VAR_8 = 0;
  VAR_9--;
 }
 VAR_7->resk = VAR_8; VAR_7->resu = VAR_9;

 VAR_8 = VAR_7->srck; VAR_9 = VAR_7->srcu;
 while (VAR_9 != 0) {
  if (VAR_7->srcr[VAR_8].l & FUNC_0(VAR_4))
   break;
  if (++VAR_8 == VAR_3)
   VAR_8 = 0;
  VAR_9--;
 }
 VAR_7->srck = VAR_8; VAR_7->srcu = VAR_9;

 VAR_8 = VAR_7->cmdk; VAR_9 = VAR_7->cmdu;
 while (VAR_9 != 0) {
  if (VAR_7->cmdr[VAR_8].l & FUNC_0(VAR_4))
   break;
  if (++VAR_8 == VAR_0)
   VAR_8 = 0;
  VAR_9--;
 }
 VAR_7->cmdk = VAR_8; VAR_7->cmdu = VAR_9;

 VAR_8 = VAR_7->dstk; VAR_9 = VAR_7->dstu;
 while (VAR_9 != 0) {
  if (VAR_7->dstr[VAR_8].l & FUNC_0(VAR_4))
   break;
  if (++VAR_8 == VAR_1)
   VAR_8 = 0;
  VAR_9--;
 }
 VAR_7->dstk = VAR_8; VAR_7->dstu = VAR_9;

 FUNC_1("%s: ring cleanup 2: i: %d.%d.%d.%d, u: %d.%d.%d.%d, "
   "k: %d.%d.%d.%d.\n",
   VAR_5->name,
   VAR_7->cmdi, VAR_7->srci, VAR_7->dsti, VAR_7->resi,
   VAR_7->cmdu, VAR_7->srcu, VAR_7->dstu, VAR_7->resu,
   VAR_7->cmdk, VAR_7->srck, VAR_7->dstk, VAR_7->resk);
}
