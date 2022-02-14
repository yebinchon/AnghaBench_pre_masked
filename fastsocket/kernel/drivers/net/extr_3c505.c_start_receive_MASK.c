
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct net_device {int name; } ;
struct Rcv_pkt {int dummy; } ;
struct TYPE_8__ {int buf_len; scalar_t__ timeout; scalar_t__ buf_ofs; scalar_t__ buf_seg; } ;
struct TYPE_9__ {TYPE_1__ rcv_pkt; } ;
struct TYPE_10__ {int length; TYPE_2__ data; int command; } ;
typedef TYPE_3__ pcb_struct ;
struct TYPE_11__ {int rx_active; } ;
typedef TYPE_4__ elp_device ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct net_device*,TYPE_3__*) ;

__attribute__((used)) static bool FUNC_3(struct net_device *VAR_2, pcb_struct * VAR_3)
{
 bool VAR_4;
 elp_device *VAR_5 = FUNC_0(VAR_2);

 if (VAR_1 >= 3)
  FUNC_1("%s: restarting receiver\n", VAR_2->name);
 VAR_3->command = VAR_0;
 VAR_3->length = sizeof(struct Rcv_pkt);
 VAR_3->data.rcv_pkt.buf_seg
     = VAR_3->data.rcv_pkt.buf_ofs = 0;
 VAR_3->data.rcv_pkt.buf_len = 1600;
 VAR_3->data.rcv_pkt.timeout = 0;
 VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (VAR_4)
  VAR_5->rx_active++;
 return VAR_4;
}
