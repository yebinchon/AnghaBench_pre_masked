
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ mode; int flags; } ;
struct slgt_info {int tx_enabled; int drop_rts_on_tx_done; int signals; size_t tbuf_start; int tx_active; TYPE_2__* tbufs; TYPE_1__ params; scalar_t__ tx_count; } ;
struct TYPE_4__ {scalar_t__ pdesc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct slgt_info*) ;
 int FUNC_1 (struct slgt_info*,int ) ;
 int FUNC_2 (struct slgt_info*) ;
 int FUNC_3 (struct slgt_info*,int ) ;
 int FUNC_4 (struct slgt_info*,unsigned short) ;
 int FUNC_5 (struct slgt_info*,int ,unsigned short) ;
 int FUNC_6 (struct slgt_info*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct slgt_info *VAR_13)
{
 if (!VAR_13->tx_enabled) {
  FUNC_5(VAR_13, VAR_10,
    (unsigned short)((FUNC_1(VAR_13, VAR_10) | VAR_1) & ~VAR_2));
  VAR_13->tx_enabled = 1;
 }

 if (VAR_13->tx_count) {
  VAR_13->drop_rts_on_tx_done = 0;

  if (VAR_13->params.mode != VAR_7) {
   if (VAR_13->params.flags & VAR_3) {
    FUNC_0(VAR_13);
    if (!(VAR_13->signals & VAR_9)) {
     VAR_13->signals |= VAR_9;
     FUNC_2(VAR_13);
     VAR_13->drop_rts_on_tx_done = 1;
    }
   }

   FUNC_3(VAR_13, VAR_4);
   FUNC_4(VAR_13, VAR_6 + VAR_5);

   FUNC_5(VAR_13, VAR_8, (unsigned short)(VAR_5 + VAR_6));
  } else {
   FUNC_3(VAR_13, VAR_4);
   FUNC_4(VAR_13, VAR_5);

   FUNC_5(VAR_13, VAR_8, VAR_5);
  }

  FUNC_6(VAR_13, VAR_12, VAR_13->tbufs[VAR_13->tbuf_start].pdesc);
  FUNC_6(VAR_13, VAR_11, VAR_2 + VAR_0);
  VAR_13->tx_active = 1;
 }
}
