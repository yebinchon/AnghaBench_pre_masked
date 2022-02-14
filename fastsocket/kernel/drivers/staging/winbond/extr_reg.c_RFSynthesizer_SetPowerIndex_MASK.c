
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct hw_data {scalar_t__ band; size_t power_index; scalar_t__ phy_type; } ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (struct hw_data*,size_t) ;
 size_t FUNC_1 (struct hw_data*,size_t) ;
 size_t FUNC_2 (struct hw_data*,size_t) ;
 size_t FUNC_3 (struct hw_data*,size_t) ;
 size_t FUNC_4 (struct hw_data*,size_t) ;
 size_t FUNC_5 (struct hw_data*,size_t) ;
 size_t FUNC_6 (struct hw_data*,size_t) ;
 size_t FUNC_7 (struct hw_data*,size_t) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__** VAR_9 ;
 scalar_t__** VAR_10 ;
 scalar_t__** VAR_11 ;

u8 FUNC_8( struct hw_data * VAR_12, u8 VAR_13 )
{
 u32 VAR_14 = VAR_12->band;
 u8 VAR_15=0;

 if( VAR_12->power_index == VAR_13 )
  return VAR_13;

 if (VAR_4 == VAR_12->phy_type)
 {

  VAR_15 = FUNC_2( VAR_12, VAR_13 );
 }
 else if (VAR_5 == VAR_12->phy_type)
 {
  if( VAR_14 <= VAR_0 )
   VAR_15 = FUNC_3( VAR_12, VAR_13 );
  else
   VAR_15 = FUNC_4( VAR_12, VAR_13 );
 }
 else if (VAR_6 == VAR_12->phy_type)
 {
  if( VAR_14 <= VAR_0 )
   VAR_15 = FUNC_5( VAR_12, VAR_13 );
  else
   VAR_15 = FUNC_6( VAR_12, VAR_13 );
 }
 else if( VAR_1 == VAR_12->phy_type )
 {

  VAR_15 = FUNC_0( VAR_12, VAR_13 );
  VAR_15 = (u8)VAR_9[VAR_15][1];
 }
 else if( VAR_2 == VAR_12->phy_type )
 {

  VAR_15 = FUNC_0( VAR_12, VAR_13 );
  VAR_15 = (u8)VAR_9[VAR_15][1];
 }
 else if( VAR_3 == VAR_12->phy_type )
 {

  VAR_15 = FUNC_1( VAR_12, VAR_13 );
  VAR_15 = (u8)VAR_10[VAR_15][1];
 }
 else if( (VAR_7 == VAR_12->phy_type) ||
   (VAR_8 == VAR_12->phy_type) )
 {

  VAR_15 = FUNC_7( VAR_12, VAR_13 );
  VAR_15 = (u8)VAR_11[VAR_15][1];
 }

 VAR_12->power_index = VAR_15;
 return VAR_15;
}
