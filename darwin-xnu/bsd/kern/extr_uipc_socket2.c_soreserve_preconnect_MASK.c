
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int sb_preconn_hiwat; } ;
struct TYPE_3__ {unsigned int sb_preconn_hiwat; } ;
struct socket {TYPE_2__ so_rcv; TYPE_1__ so_snd; } ;



void
FUNC_0(struct socket *VAR_0, unsigned int VAR_1)
{

 VAR_0->so_snd.sb_preconn_hiwat = VAR_1;
 VAR_0->so_rcv.sb_preconn_hiwat = VAR_1;
}
