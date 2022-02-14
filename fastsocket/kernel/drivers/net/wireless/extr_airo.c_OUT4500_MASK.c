
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct airo_info {TYPE_1__* dev; int flags; } ;
struct TYPE_2__ {scalar_t__ base_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3( struct airo_info *VAR_2, u16 VAR_3, u16 VAR_4 ) {
 if (FUNC_2(VAR_0,&VAR_2->flags))
  VAR_3 <<= 1;
 if ( !VAR_1 )
  FUNC_1( VAR_4, VAR_2->dev->base_addr + VAR_3 );
 else {
  FUNC_0( VAR_4 & 0xff, VAR_2->dev->base_addr + VAR_3 );
  FUNC_0( VAR_4 >> 8, VAR_2->dev->base_addr + VAR_3 + 1 );
 }
}
