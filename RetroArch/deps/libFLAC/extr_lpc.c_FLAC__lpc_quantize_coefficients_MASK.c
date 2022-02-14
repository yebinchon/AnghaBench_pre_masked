
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FLAC__real ;
typedef int FLAC__int32 ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 double FUNC_1 (int const) ;
 int FUNC_2 (int ,char*,int,int,int,...) ;
 int FUNC_3 (double,int*) ;
 scalar_t__ FUNC_4 (double) ;
 int VAR_2 ;

int FUNC_5(const FLAC__real VAR_3[], unsigned VAR_4, unsigned VAR_5, FLAC__int32 VAR_6[], int *VAR_7)
{
 unsigned VAR_8;
 double VAR_9;
 FLAC__int32 VAR_10, VAR_11;

 FUNC_0(VAR_5 > 0);
 FUNC_0(VAR_5 >= VAR_0);


 VAR_5--;
 VAR_10 = 1 << VAR_5;
 VAR_11 = -VAR_10;
 VAR_10--;


 VAR_9 = 0.0;
 for(VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  const double VAR_12 = FUNC_1(VAR_3[VAR_8]);
  if(VAR_12 > VAR_9)
   VAR_9 = VAR_12;
 }

 if(VAR_9 <= 0.0) {

  return 2;
 }
 else {
  const int VAR_13 = (1 << (VAR_1-1)) - 1;
  const int VAR_14 = -VAR_13 - 1;
  int VAR_15;

  (void)FUNC_3(VAR_9, &VAR_15);
  VAR_15--;
  *VAR_7 = (int)VAR_5 - VAR_15 - 1;

  if(*VAR_7 > VAR_13)
   *VAR_7 = VAR_13;
  else if(*VAR_7 < VAR_14)
   return 1;
 }

 if(*VAR_7 >= 0) {
  double VAR_16 = 0.0;
  FLAC__int32 VAR_17;
  for(VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
   VAR_16 += VAR_3[VAR_8] * (1 << *VAR_7);
   VAR_17 = (FLAC__int32)FUNC_4(VAR_16);







   if(VAR_17 > VAR_10)
    VAR_17 = VAR_10;
   else if(VAR_17 < VAR_11)
    VAR_17 = VAR_11;
   VAR_16 -= VAR_17;
   VAR_6[VAR_8] = VAR_17;
  }
 }




 else {
  const int VAR_18 = -(*VAR_7);
  double VAR_19 = 0.0;
  FLAC__int32 VAR_20;



  for(VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
   VAR_19 += VAR_3[VAR_8] / (1 << VAR_18);
   VAR_20 = (FLAC__int32)FUNC_4(VAR_19);






   if(VAR_20 > VAR_10)
    VAR_20 = VAR_10;
   else if(VAR_20 < VAR_11)
    VAR_20 = VAR_11;
   VAR_19 -= VAR_20;
   VAR_6[VAR_8] = VAR_20;
  }
  *VAR_7 = 0;
 }

 return 0;
}
