
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int base_addr; } ;
struct TYPE_3__ {int lock; } ;
typedef TYPE_1__ TLanPrivateInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int*,int ) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6( struct net_device *VAR_2, u8 VAR_3, u8 *VAR_4 )
{
 int VAR_5;
 TLanPrivateInfo *VAR_6 = FUNC_3(VAR_2);
 unsigned long VAR_7 = 0;
 int VAR_8=0;

 FUNC_4(&VAR_6->lock, VAR_7);

 FUNC_2( VAR_2->base_addr );
 VAR_5 = FUNC_1( VAR_2->base_addr, 0xA0, VAR_0 );
 if (VAR_5)
 {
  VAR_8=1;
  goto fail;
 }
 VAR_5 = FUNC_1( VAR_2->base_addr, VAR_3, VAR_0 );
 if (VAR_5)
 {
  VAR_8=2;
  goto fail;
 }
 FUNC_2( VAR_2->base_addr );
 VAR_5 = FUNC_1( VAR_2->base_addr, 0xA1, VAR_0 );
 if (VAR_5)
 {
  VAR_8=3;
  goto fail;
 }
 FUNC_0( VAR_2->base_addr, VAR_4, VAR_1 );
fail:
 FUNC_5(&VAR_6->lock, VAR_7);

 return VAR_8;

}
