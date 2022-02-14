
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct net_device {int dummy; } ;
struct TYPE_8__ {TYPE_1__* buffer; } ;
struct TYPE_7__ {int pciDev; TYPE_3__* rxList; TYPE_3__* txList; } ;
struct TYPE_6__ {scalar_t__ address; } ;
typedef TYPE_2__ TLanPrivateInfo ;
typedef TYPE_3__ TLanList ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sk_buff* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,unsigned int) ;
 TYPE_2__* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_5( struct net_device *VAR_6 )
{
 TLanPrivateInfo *VAR_7 = FUNC_3(VAR_6);
 int VAR_8;
 TLanList *VAR_9;
 struct sk_buff *VAR_10;

 for ( VAR_8 = 0; VAR_8 < VAR_5; VAR_8++ ) {
  VAR_9 = VAR_7->txList + VAR_8;
  VAR_10 = FUNC_0(VAR_9);
  if ( VAR_10 ) {
   FUNC_4(
    VAR_7->pciDev,
    VAR_9->buffer[0].address,
    FUNC_2(VAR_10->len,
        (unsigned int)VAR_3),
    VAR_1);
   FUNC_1( VAR_10 );
   VAR_9->buffer[8].address = 0;
   VAR_9->buffer[9].address = 0;
  }
 }

 for ( VAR_8 = 0; VAR_8 < VAR_4; VAR_8++ ) {
  VAR_9 = VAR_7->rxList + VAR_8;
  VAR_10 = FUNC_0(VAR_9);
  if ( VAR_10 ) {
   FUNC_4(VAR_7->pciDev,
      VAR_9->buffer[0].address,
      VAR_2,
      VAR_0);
   FUNC_1( VAR_10 );
   VAR_9->buffer[8].address = 0;
   VAR_9->buffer[9].address = 0;
  }
 }
}
