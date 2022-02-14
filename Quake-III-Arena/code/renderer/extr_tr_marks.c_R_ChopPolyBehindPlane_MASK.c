
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float vec_t ;
typedef float* vec3_t ;


 int FUNC_0 (float**,float**,int) ;
 float FUNC_1 (float*,float*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (float*,float*) ;

__attribute__((used)) static void FUNC_3( int VAR_4, vec3_t VAR_5[VAR_0],
           int *VAR_6, vec3_t VAR_7[VAR_0],
       vec3_t VAR_8, vec_t VAR_9, vec_t VAR_10) {
 float VAR_11[VAR_0+4];
 int VAR_12[VAR_0+4];
 int VAR_13[3];
 float VAR_14;
 int VAR_15, VAR_16;
 float *VAR_17, *VAR_18, *VAR_19;
 float VAR_20;


 if ( VAR_4 >= VAR_0 - 2 ) {
  *VAR_6 = 0;
  return;
 }

 VAR_13[0] = VAR_13[1] = VAR_13[2] = 0;


 for ( VAR_15 = 0 ; VAR_15 < VAR_4 ; VAR_15++ ) {
  VAR_14 = FUNC_1( VAR_5[VAR_15], VAR_8 );
  VAR_14 -= VAR_9;
  VAR_11[VAR_15] = VAR_14;
  if ( VAR_14 > VAR_10 ) {
   VAR_12[VAR_15] = VAR_2;
  } else if ( VAR_14 < -VAR_10 ) {
   VAR_12[VAR_15] = VAR_1;
  } else {
   VAR_12[VAR_15] = VAR_3;
  }
  VAR_13[VAR_12[VAR_15]]++;
 }
 VAR_12[VAR_15] = VAR_12[0];
 VAR_11[VAR_15] = VAR_11[0];

 *VAR_6 = 0;

 if ( !VAR_13[0] ) {
  return;
 }
 if ( !VAR_13[1] ) {
  *VAR_6 = VAR_4;
  FUNC_0( VAR_7, VAR_5, VAR_4 * sizeof(vec3_t) );
  return;
 }

 for ( VAR_15 = 0 ; VAR_15 < VAR_4 ; VAR_15++ ) {
  VAR_17 = VAR_5[VAR_15];
  VAR_19 = VAR_7[ *VAR_6 ];

  if ( VAR_12[VAR_15] == VAR_3 ) {
   FUNC_2( VAR_17, VAR_19 );
   (*VAR_6)++;
   continue;
  }

  if ( VAR_12[VAR_15] == VAR_2 ) {
   FUNC_2( VAR_17, VAR_19 );
   (*VAR_6)++;
   VAR_19 = VAR_7[ *VAR_6 ];
  }

  if ( VAR_12[VAR_15+1] == VAR_3 || VAR_12[VAR_15+1] == VAR_12[VAR_15] ) {
   continue;
  }


  VAR_18 = VAR_5[ (VAR_15+1) % VAR_4 ];

  VAR_20 = VAR_11[VAR_15] - VAR_11[VAR_15+1];
  if ( VAR_20 == 0 ) {
   VAR_14 = 0;
  } else {
   VAR_14 = VAR_11[VAR_15] / VAR_20;
  }



  for (VAR_16=0 ; VAR_16<3 ; VAR_16++) {
   VAR_19[VAR_16] = VAR_17[VAR_16] + VAR_14 * ( VAR_18[VAR_16] - VAR_17[VAR_16] );
  }

  (*VAR_6)++;
 }
}
