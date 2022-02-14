
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1( void )
{
 unsigned VAR_2[4];
 char VAR_3[16];
 char VAR_4[13];


 FUNC_0( 0, ( unsigned int * ) VAR_3 );
 VAR_4[0] = VAR_3[4];
 VAR_4[1] = VAR_3[5];
 VAR_4[2] = VAR_3[6];
 VAR_4[3] = VAR_3[7];
 VAR_4[4] = VAR_3[12];
 VAR_4[5] = VAR_3[13];
 VAR_4[6] = VAR_3[14];
 VAR_4[7] = VAR_3[15];
 VAR_4[8] = VAR_3[8];
 VAR_4[9] = VAR_3[9];
 VAR_4[10] = VAR_3[10];
 VAR_4[11] = VAR_3[11];
 VAR_4[12] = 0;






 FUNC_0( 0x80000000, VAR_2 );
 if ( VAR_2[0] < 0x80000000 )
  return VAR_0;


 FUNC_0( 0x80000001, VAR_2 );
 if ( VAR_2[3] & ( 1 << 31 ) )
  return VAR_1;

 return VAR_0;
}
