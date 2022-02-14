
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct hw_data {scalar_t__ phy_type; void* BB54_cal; void* BB3c_cal; } ;


 int FUNC_0 (struct hw_data*) ;
 int FUNC_1 (struct hw_data*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct hw_data*,int,void**) ;
 int FUNC_3 (struct hw_data*,int,void*) ;
 int FUNC_4 (struct hw_data*,int) ;

void FUNC_5( struct hw_data * VAR_2 )
{
 u32 VAR_3, VAR_4;

 if ((VAR_2->phy_type == VAR_0) ||
  (VAR_2->phy_type == VAR_1)) {
  FUNC_4 ( VAR_2, 2412 );
  FUNC_2( VAR_2, 0x103c, &VAR_3 );
  FUNC_2( VAR_2, 0x1054, &VAR_4 );

  VAR_2->BB3c_cal = VAR_3;
  VAR_2->BB54_cal = VAR_4;

  FUNC_1(VAR_2);
  FUNC_0(VAR_2);

  FUNC_3( VAR_2, 0x103c, VAR_3 );
  FUNC_3( VAR_2, 0x1054, VAR_4 );
 }
}
