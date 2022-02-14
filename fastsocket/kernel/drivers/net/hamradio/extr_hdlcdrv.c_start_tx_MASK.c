
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {int ptt; scalar_t__ numbits; scalar_t__ bitstream; scalar_t__ bitbuf; int numflags; scalar_t__ tx_state; } ;
struct TYPE_3__ {int tx_delay; } ;
struct hdlcdrv_state {int ptt_keyed; TYPE_2__ hdlctx; TYPE_1__ ch_params; } ;


 int FUNC_0 (struct net_device*,struct hdlcdrv_state*) ;
 int FUNC_1 (struct hdlcdrv_state*,int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0, struct hdlcdrv_state *VAR_1)
{
 VAR_1->hdlctx.tx_state = 0;
 VAR_1->hdlctx.numflags = FUNC_1(VAR_1, VAR_1->ch_params.tx_delay);
 VAR_1->hdlctx.bitbuf = VAR_1->hdlctx.bitstream = VAR_1->hdlctx.numbits = 0;
 FUNC_0(VAR_0, VAR_1);
 VAR_1->hdlctx.ptt = 1;
 VAR_1->ptt_keyed++;
}
