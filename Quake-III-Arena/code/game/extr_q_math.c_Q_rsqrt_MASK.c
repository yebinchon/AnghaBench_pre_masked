
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (float) ;

float FUNC_2( float VAR_0 )
{
 long VAR_1;
 float VAR_2, VAR_3;
 const float VAR_4 = 1.5F;

 VAR_2 = VAR_0 * 0.5F;
 VAR_3 = VAR_0;
 VAR_1 = * ( long * ) &VAR_3;
 VAR_1 = 0x5f3759df - ( VAR_1 >> 1 );
 VAR_3 = * ( float * ) &VAR_1;
 VAR_3 = VAR_3 * ( VAR_4 - ( VAR_2 * VAR_3 * VAR_3 ) );




 FUNC_0( !FUNC_1(VAR_3) );


 return VAR_3;
}
