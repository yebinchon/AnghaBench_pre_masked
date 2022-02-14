
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rxl; } ;
struct net_local {size_t cur_rxl_index; size_t timeout_rxl; scalar_t__ cur_rxl_rcvd; scalar_t__ prev_rxl_rcvd; TYPE_1__ csr1; } ;
struct net_device {scalar_t__ base_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct net_local* FUNC_1 (struct net_device*) ;
 int FUNC_2 (unsigned char,scalar_t__) ;
 int * VAR_2 ;
 size_t* VAR_3 ;

__attribute__((used)) static void
FUNC_3( struct net_device *VAR_4 )
{
 struct net_local *VAR_5 = FUNC_1(VAR_4);

 VAR_5->cur_rxl_index = VAR_3[ VAR_5->timeout_rxl ];
 if( ++VAR_5->timeout_rxl >= 4 )
  VAR_5->timeout_rxl = 0;

 VAR_5->csr1.rxl = VAR_2[ VAR_5->cur_rxl_index ];
 FUNC_0( VAR_4->base_addr + VAR_0 );
 FUNC_2( *(unsigned char *)&VAR_5->csr1, VAR_4->base_addr + VAR_1 );

 VAR_5->prev_rxl_rcvd = VAR_5->cur_rxl_rcvd;
 VAR_5->cur_rxl_rcvd = 0;
}
