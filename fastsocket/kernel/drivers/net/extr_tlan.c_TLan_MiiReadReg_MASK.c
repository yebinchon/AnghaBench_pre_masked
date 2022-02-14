
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct net_device {int base_addr; } ;
struct TYPE_3__ {int lock; } ;
typedef TYPE_1__ TLanPrivateInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 int VAR_8 ;
 int FUNC_5 () ;
 TYPE_1__* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10( struct net_device *VAR_9, u16 VAR_10, u16 VAR_11, u16 *VAR_12 )
{
 u8 VAR_13;
 u16 VAR_14, VAR_15;
  u32 VAR_16;
 int VAR_17;
 int VAR_18;
 TLanPrivateInfo *VAR_19 = FUNC_6(VAR_9);
 unsigned long VAR_20 = 0;

 VAR_17 = VAR_0;
 FUNC_7(VAR_3, VAR_9->base_addr + VAR_1);
 VAR_14 = VAR_9->base_addr + VAR_2 + VAR_3;

 if (!FUNC_5())
  FUNC_8(&VAR_19->lock, VAR_20);

 FUNC_3(VAR_9->base_addr);

 VAR_18 = FUNC_1( VAR_6, VAR_14 );
 if ( VAR_18 )
  FUNC_0(VAR_6, VAR_14);

 FUNC_2( VAR_9->base_addr, 0x1, 2 );
 FUNC_2( VAR_9->base_addr, 0x2, 2 );
 FUNC_2( VAR_9->base_addr, VAR_10, 5 );
 FUNC_2( VAR_9->base_addr, VAR_11, 5 );


 FUNC_0(VAR_7, VAR_14);

 FUNC_0(VAR_4, VAR_14);
 FUNC_4(VAR_4, VAR_14);
 FUNC_0(VAR_4, VAR_14);

 VAR_13 = FUNC_1(VAR_5, VAR_14);
 FUNC_4(VAR_4, VAR_14);
 if (VAR_13) {
  for (VAR_16 = 0; VAR_16 < 16; VAR_16++) {
   FUNC_0(VAR_4, VAR_14);
   FUNC_4(VAR_4, VAR_14);
  }
  VAR_15 = 0xffff;
  VAR_17 = VAR_8;
 } else {
  for (VAR_15 = 0, VAR_16 = 0x8000; VAR_16; VAR_16 >>= 1) {
   FUNC_0(VAR_4, VAR_14);
   if (FUNC_1(VAR_5, VAR_14))
    VAR_15 |= VAR_16;
   FUNC_4(VAR_4, VAR_14);
  }
 }


 FUNC_0(VAR_4, VAR_14);
 FUNC_4(VAR_4, VAR_14);

 if ( VAR_18 )
  FUNC_4(VAR_6, VAR_14);

 *VAR_12 = VAR_15;

 if (!FUNC_5())
  FUNC_9(&VAR_19->lock, VAR_20);

 return VAR_17;

}
