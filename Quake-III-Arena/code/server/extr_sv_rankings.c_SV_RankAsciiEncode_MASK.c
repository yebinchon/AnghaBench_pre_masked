
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 char* VAR_0 ;

__attribute__((used)) static int FUNC_1( char* VAR_1, const unsigned char* VAR_2,
 int VAR_3 )
{
 unsigned char VAR_4[3];
 unsigned char VAR_5[4];
 int VAR_6 = 0;
 int VAR_7;
 int VAR_8;
 int VAR_9;

 FUNC_0( VAR_1 != ((void*)0) );
 FUNC_0( VAR_2 != ((void*)0) );

 for( VAR_7 = 0; VAR_7 < VAR_3; VAR_7 += 3 )
 {

  for( VAR_8 = 0; VAR_8 < 3; VAR_8++ )
  {
   VAR_4[VAR_8] = (VAR_7 + VAR_8 < VAR_3) ? VAR_2[VAR_7 + VAR_8] : 0;
  }


  VAR_5[0] = VAR_4[0] >> 2;
  VAR_5[1] = ((VAR_4[0] << 4) | (VAR_4[1] >> 4)) & 63;
  VAR_5[2] = ((VAR_4[1] << 2) | (VAR_4[2] >> 6)) & 63;
  VAR_5[3] = VAR_4[2] & 63;


  VAR_9 = (VAR_7 + 2 < VAR_3) ? 4 : ((VAR_3 - VAR_7) * 4) / 3 + 1;
  for( VAR_8 = 0; VAR_8 < VAR_9; VAR_8++ )
  {
   VAR_1[VAR_6++] = VAR_0[VAR_5[VAR_8]];
  }
 }

 VAR_1[VAR_6] = '\0';

 return VAR_6;
}
