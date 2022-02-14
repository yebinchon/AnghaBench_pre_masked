
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int name; int irq; scalar_t__ base_addr; } ;
struct TYPE_5__ {int * function; } ;
struct TYPE_4__ {TYPE_3__ timer; scalar_t__ neg_be_verbose; } ;
typedef TYPE_1__ TLanPrivateInfo ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,struct net_device*) ;
 TYPE_1__* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_4)
{
 TLanPrivateInfo *VAR_5 = FUNC_5(VAR_4);

 FUNC_6(VAR_4);
 VAR_5->neg_be_verbose = 0;

 FUNC_2( VAR_4, VAR_3 );
 FUNC_7( VAR_1, VAR_4->base_addr + VAR_2 );
 if ( VAR_5->timer.function != ((void*)0) ) {
  FUNC_3( &VAR_5->timer );
  VAR_5->timer.function = ((void*)0);
 }

 FUNC_4( VAR_4->irq, VAR_4 );
 FUNC_1( VAR_4 );
 FUNC_0( VAR_0, "Device %s closed.\n", VAR_4->name );

 return 0;

}
