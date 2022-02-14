
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int debug; int printdebug; struct st5481_adapter* userdata; int state; int * fsm; } ;
struct TYPE_8__ {TYPE_2__ fsm; } ;
struct TYPE_10__ {int debug; int printdebug; struct st5481_adapter* userdata; int state; int * fsm; } ;
struct TYPE_9__ {int ep; int * hisax_if; struct st5481_adapter* adapter; int counter; int packet_size; int num_packets; int bufsize; } ;
struct TYPE_6__ {int ifc; } ;
struct st5481_adapter {TYPE_3__ d_out; int timer; TYPE_5__ l1m; TYPE_4__ d_in; TYPE_1__ hisax_d_if; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_5__*,int *) ;
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
 int FUNC_2 (struct st5481_adapter*) ;
 int FUNC_3 (struct st5481_adapter*) ;
 int FUNC_4 (TYPE_4__*) ;

int FUNC_5(struct st5481_adapter *VAR_13)
{
 int VAR_14;

 FUNC_0(2,"");

 VAR_14 = FUNC_3(VAR_13);
 if (VAR_14)
  goto err;
 VAR_13->d_in.bufsize = VAR_2;
 VAR_13->d_in.num_packets = VAR_3;
 VAR_13->d_in.packet_size = VAR_4;
 VAR_13->d_in.ep = VAR_0 | VAR_7;
 VAR_13->d_in.counter = VAR_1;
 VAR_13->d_in.adapter = VAR_13;
 VAR_13->d_in.hisax_if = &VAR_13->hisax_d_if.ifc;
 VAR_14 = FUNC_4(&VAR_13->d_in);
 if (VAR_14)
  goto err_d_out;

 VAR_13->l1m.fsm = &VAR_10;
 VAR_13->l1m.state = VAR_6;
 VAR_13->l1m.debug = VAR_12 & 0x100;
 VAR_13->l1m.userdata = VAR_13;
 VAR_13->l1m.printdebug = VAR_11;
 FUNC_1(&VAR_13->l1m, &VAR_13->timer);

 VAR_13->d_out.fsm.fsm = &VAR_9;
 VAR_13->d_out.fsm.state = VAR_5;
 VAR_13->d_out.fsm.debug = VAR_12 & 0x100;
 VAR_13->d_out.fsm.userdata = VAR_13;
 VAR_13->d_out.fsm.printdebug = VAR_8;

 return 0;

 err_d_out:
 FUNC_2(VAR_13);
 err:
 return VAR_14;
}
