
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int base_addr; } ;
struct TYPE_3__ {int lock; } ;
typedef TYPE_1__ TLanPrivateInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 () ;
 TYPE_1__* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_10( struct net_device *VAR_5, u16 VAR_6, u16 VAR_7, u16 VAR_8 )
{
 u16 VAR_9;
 int VAR_10;
 unsigned long VAR_11 = 0;
 TLanPrivateInfo *VAR_12 = FUNC_6(VAR_5);

 FUNC_7(VAR_2, VAR_5->base_addr + VAR_0);
 VAR_9 = VAR_5->base_addr + VAR_1 + VAR_2;

 if (!FUNC_5())
  FUNC_8(&VAR_12->lock, VAR_11);

 FUNC_3( VAR_5->base_addr );

 VAR_10 = FUNC_1( VAR_4, VAR_9 );
 if ( VAR_10 )
  FUNC_0( VAR_4, VAR_9 );

 FUNC_2( VAR_5->base_addr, 0x1, 2 );
 FUNC_2( VAR_5->base_addr, 0x1, 2 );
 FUNC_2( VAR_5->base_addr, VAR_6, 5 );
 FUNC_2( VAR_5->base_addr, VAR_7, 5 );

 FUNC_2( VAR_5->base_addr, 0x2, 2 );
 FUNC_2( VAR_5->base_addr, VAR_8, 16 );

 FUNC_0( VAR_3, VAR_9 );
 FUNC_4( VAR_3, VAR_9 );

 if ( VAR_10 )
  FUNC_4( VAR_4, VAR_9 );

 if (!FUNC_5())
  FUNC_9(&VAR_12->lock, VAR_11);

}
