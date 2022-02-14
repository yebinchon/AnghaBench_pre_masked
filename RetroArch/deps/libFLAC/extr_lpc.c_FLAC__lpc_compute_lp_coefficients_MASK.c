
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double FLAC__real ;


 int FUNC_0 (int) ;
 int VAR_0 ;

void FUNC_1(const FLAC__real VAR_1[], unsigned *VAR_2, FLAC__real VAR_3[][VAR_0], double VAR_4[])
{
 unsigned VAR_5, VAR_6;
 double VAR_7, VAR_8, VAR_9[VAR_0];

 FUNC_0(0 != VAR_2);
 FUNC_0(0 < *VAR_2);
 FUNC_0(*VAR_2 <= VAR_0);
 FUNC_0(VAR_1[0] != 0.0);

 VAR_8 = VAR_1[0];

 for(VAR_5 = 0; VAR_5 < *VAR_2; VAR_5++) {

  VAR_7 = -VAR_1[VAR_5+1];
  for(VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
   VAR_7 -= VAR_9[VAR_6] * VAR_1[VAR_5-VAR_6];
  VAR_7 /= VAR_8;


  VAR_9[VAR_5]=VAR_7;
  for(VAR_6 = 0; VAR_6 < (VAR_5>>1); VAR_6++) {
   double VAR_10 = VAR_9[VAR_6];
   VAR_9[VAR_6] += VAR_7 * VAR_9[VAR_5-1-VAR_6];
   VAR_9[VAR_5-1-VAR_6] += VAR_7 * VAR_10;
  }
  if(VAR_5 & 1)
   VAR_9[VAR_6] += VAR_9[VAR_6] * VAR_7;

  VAR_8 *= (1.0 - VAR_7 * VAR_7);


  for(VAR_6 = 0; VAR_6 <= VAR_5; VAR_6++)
   VAR_3[VAR_5][VAR_6] = (FLAC__real)(-VAR_9[VAR_6]);
  VAR_4[VAR_5] = VAR_8;


  if(VAR_8 == 0.0) {
   *VAR_2 = VAR_5+1;
   return;
  }
 }
}
