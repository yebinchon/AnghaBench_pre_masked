
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct airo_info {TYPE_1__* dev; } ;
typedef int __le16 ;
struct TYPE_2__ {scalar_t__ base_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int const*,int) ;
 int FUNC_1 (scalar_t__,int const*,int) ;

__attribute__((used)) static int FUNC_2(struct airo_info *VAR_3, const __le16 *VAR_4,
       int VAR_5, int VAR_6)
{
 VAR_5 = (VAR_5 + 1) & (~1);
 if ( !VAR_2 )
  FUNC_1( VAR_3->dev->base_addr+VAR_0+VAR_6,
         VAR_4, VAR_5>>1 );
 else
  FUNC_0( VAR_3->dev->base_addr+VAR_0+VAR_6, VAR_4, VAR_5 );
 return VAR_1;
}
