
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ep; int * hisax_if; int adapter; int counter; int packet_size; int num_packets; int bufsize; } ;
struct TYPE_3__ {int ifc; } ;
struct st5481_bcs {TYPE_2__ b_in; TYPE_1__ b_if; int adapter; scalar_t__ channel; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct st5481_bcs*) ;
 int FUNC_2 (struct st5481_bcs*) ;
 int FUNC_3 (TYPE_2__*) ;

int FUNC_4(struct st5481_bcs *VAR_8)
{
 int VAR_9;

 FUNC_0(4,"");

 VAR_9 = FUNC_2(VAR_8);
 if (VAR_9)
  goto err;
 VAR_8->b_in.bufsize = VAR_2;
 VAR_8->b_in.num_packets = VAR_5;
 VAR_8->b_in.packet_size = VAR_6;
 VAR_8->b_in.ep = (VAR_8->channel ? VAR_1 : VAR_0) | VAR_7;
 VAR_8->b_in.counter = VAR_8->channel ? VAR_4 : VAR_3;
 VAR_8->b_in.adapter = VAR_8->adapter;
 VAR_8->b_in.hisax_if = &VAR_8->b_if.ifc;
 VAR_9 = FUNC_3(&VAR_8->b_in);
 if (VAR_9)
  goto err_b_out;


 return 0;

 err_b_out:
 FUNC_1(VAR_8);
 err:
 return VAR_9;
}
