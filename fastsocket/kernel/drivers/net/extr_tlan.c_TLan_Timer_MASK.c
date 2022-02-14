
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct net_device {int base_addr; } ;
struct TYPE_5__ {void (* function ) (unsigned long) ;scalar_t__ expires; } ;
struct TYPE_4__ {int timerType; int lock; TYPE_3__ timer; scalar_t__ timerSetAt; } ;
typedef TYPE_1__ TLanPrivateInfo ;


 int VAR_0 ;
 int VAR_1 ;

 scalar_t__ VAR_2 ;







 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (TYPE_3__*) ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_9 (struct net_device*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_12( unsigned long VAR_4 )
{
 struct net_device *VAR_5 = (struct net_device *) VAR_4;
 TLanPrivateInfo *VAR_6 = FUNC_9(VAR_5);
 u32 VAR_7;
 unsigned long VAR_8 = 0;

 VAR_6->timer.function = ((void*)0);

 switch ( VAR_6->timerType ) {





  case 131:
   FUNC_4( VAR_5 );
   break;
  case 130:
   FUNC_5( VAR_5 );
   break;
  case 129:
   FUNC_6( VAR_5 );
   break;
  case 128:
   FUNC_7( VAR_5 );
   break;
  case 132:
   FUNC_2( VAR_5 );
   break;
  case 134:
   FUNC_1( VAR_5 );
   break;
  case 135:
   FUNC_10(&VAR_6->lock, VAR_8);
   if ( VAR_6->timer.function == ((void*)0) ) {
    VAR_7 = VAR_3 - VAR_6->timerSetAt;
    if ( VAR_7 >= VAR_2 ) {
     FUNC_0( VAR_5->base_addr,
       VAR_1, VAR_0 );
    } else {
     VAR_6->timer.function = &FUNC_12;
     VAR_6->timer.expires = VAR_6->timerSetAt
      + VAR_2;
     FUNC_11(&VAR_6->lock, VAR_8);
     FUNC_8( &VAR_6->timer );
     break;
    }
   }
   FUNC_11(&VAR_6->lock, VAR_8);
   break;
  default:
   break;
 }

}
