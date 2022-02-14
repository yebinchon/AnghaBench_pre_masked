
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_23__ {int cidcw_ack; } ;
struct TYPE_21__ {scalar_t__ dtmf_ready; } ;
struct TYPE_22__ {TYPE_7__ bits; } ;
struct TYPE_19__ {int dtmf_ready; } ;
struct TYPE_20__ {TYPE_5__ bits; } ;
struct TYPE_17__ {int digit; scalar_t__ dtmf_valid; } ;
struct TYPE_15__ {int low; int high; } ;
struct TYPE_18__ {TYPE_3__ bits; TYPE_1__ bytes; } ;
struct TYPE_16__ {int low; int high; } ;
struct TYPE_14__ {int dtmf_proc; int dtmf_state; int dtmf_current; int* dtmfbuffer; size_t dtmf_wp; TYPE_9__ flags; int board; TYPE_8__ ex_sig; TYPE_6__ ex; int cidcw_wait; TYPE_4__ dtmf; TYPE_2__ ssr; } ;
typedef TYPE_10__ IXJ ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,TYPE_10__*) ;
 int FUNC_1 (TYPE_10__*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,int ,int,int ) ;

__attribute__((used)) static int FUNC_3(IXJ *VAR_4)
{
 if (VAR_4->dtmf_proc) {
  return -1;
 }
 VAR_4->dtmf_proc = 1;

 if (FUNC_0(0x7000, VAR_4))
  return -1;

 VAR_4->dtmf.bytes.high = VAR_4->ssr.high;
 VAR_4->dtmf.bytes.low = VAR_4->ssr.low;
 if (!VAR_4->dtmf_state && VAR_4->dtmf.bits.dtmf_valid) {
  VAR_4->dtmf_state = 1;
  VAR_4->dtmf_current = VAR_4->dtmf.bits.digit;
 }
 if (VAR_4->dtmf_state && !VAR_4->dtmf.bits.dtmf_valid)
  {
  if(!VAR_4->cidcw_wait) {
   VAR_4->dtmfbuffer[VAR_4->dtmf_wp] = VAR_4->dtmf_current;
   VAR_4->dtmf_wp++;
   if (VAR_4->dtmf_wp == 79)
    VAR_4->dtmf_wp = 0;
   VAR_4->ex.bits.dtmf_ready = 1;
   if(VAR_4->ex_sig.bits.dtmf_ready) {
    FUNC_1(VAR_4, VAR_1, VAR_0);
   }
  }
  else if(VAR_4->dtmf_current == 0x00 || VAR_4->dtmf_current == 0x0D) {
   if(VAR_2 & 0x0020) {
    FUNC_2("IXJ phone%d saw CIDCW Ack DTMF %d from display at %ld\n", VAR_4->board, VAR_4->dtmf_current, VAR_3);
   }
   VAR_4->flags.cidcw_ack = 1;
  }
  VAR_4->dtmf_state = 0;
 }
 VAR_4->dtmf_proc = 0;

 return 0;
}
