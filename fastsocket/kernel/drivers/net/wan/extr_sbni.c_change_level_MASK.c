
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int rxl; } ;
struct net_local {int delta_rxl; int cur_rxl_index; scalar_t__ cur_rxl_rcvd; scalar_t__ prev_rxl_rcvd; TYPE_1__ csr1; } ;
struct net_device {scalar_t__ base_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct net_local* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int * VAR_2 ;

__attribute__((used)) static void
FUNC_3( struct net_device *VAR_3 )
{
 struct net_local *VAR_4 = FUNC_1(VAR_3);

 if( VAR_4->delta_rxl == 0 )
  return;

 if( VAR_4->cur_rxl_index == 0 )
  VAR_4->delta_rxl = 1;
 else if( VAR_4->cur_rxl_index == 15 )
  VAR_4->delta_rxl = -1;
 else if( VAR_4->cur_rxl_rcvd < VAR_4->prev_rxl_rcvd )
  VAR_4->delta_rxl = -VAR_4->delta_rxl;

 VAR_4->csr1.rxl = VAR_2[ VAR_4->cur_rxl_index += VAR_4->delta_rxl ];
 FUNC_0( VAR_3->base_addr + VAR_0 );
 FUNC_2( *(u8 *)&VAR_4->csr1, VAR_3->base_addr + VAR_1 );

 VAR_4->prev_rxl_rcvd = VAR_4->cur_rxl_rcvd;
 VAR_4->cur_rxl_rcvd = 0;
}
