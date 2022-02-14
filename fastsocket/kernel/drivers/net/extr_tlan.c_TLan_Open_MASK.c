
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int name; int irq; int base_addr; } ;
struct TYPE_3__ {int tlanRev; int timer; } ;
typedef TYPE_1__ TLanPrivateInfo ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (char*,int ,int ) ;
 int FUNC_9 (int ,int ,int ,int ,struct net_device*) ;

__attribute__((used)) static int FUNC_10( struct net_device *VAR_5 )
{
 TLanPrivateInfo *VAR_6 = FUNC_6(VAR_5);
 int VAR_7;

 VAR_6->tlanRev = FUNC_1( VAR_5->base_addr, VAR_2 );
 VAR_7 = FUNC_9( VAR_5->irq, VAR_4, VAR_0,
      VAR_5->name, VAR_5 );

 if ( VAR_7 ) {
  FUNC_8("TLAN:  Cannot open %s because IRQ %d is already in use.\n",
         VAR_5->name, VAR_5->irq );
  return VAR_7;
 }

 FUNC_5(&VAR_6->timer);
 FUNC_7(VAR_5);




 FUNC_4( VAR_5 );
 FUNC_2( VAR_5, VAR_3 );
 FUNC_3( VAR_5 );

 FUNC_0( VAR_1, "%s: Opened.  TLAN Chip Rev: %x\n",
    VAR_5->name, VAR_6->tlanRev );

 return 0;

}
