
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * RealDTEntry ;
typedef scalar_t__* DTEntryNameBuf ;
typedef int * DTEntry ;


 int VAR_0 ;
 int * VAR_1 ;
 int * FUNC_0 (int *,scalar_t__*) ;
 char* FUNC_1 (char const*,scalar_t__*) ;
 char const VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int
FUNC_2(const DTEntry VAR_5, const char *VAR_6, DTEntry *VAR_7)
{
 DTEntryNameBuf VAR_8;
 RealDTEntry VAR_9;
 const char * VAR_10;

 if (!VAR_0) {
  return VAR_3;
 }
 if (VAR_5 == ((void*)0)) {
  VAR_9 = VAR_1;
 } else {
  VAR_9 = VAR_5;
 }
 VAR_10 = VAR_6;
 if (*VAR_10 == VAR_2) {
  VAR_10++;
  if (*VAR_10 == 0) {
   *VAR_7 = VAR_9;
   return VAR_4;
  }
 }
 do {
  VAR_10 = FUNC_1(VAR_10, VAR_8);


  if (*VAR_8 == 0) {
   if (*VAR_10 == 0) {
    *VAR_7 = VAR_9;
    return VAR_4;
   }
   break;
  }

  VAR_9 = FUNC_0(VAR_9, VAR_8);

 } while (VAR_9 != ((void*)0));

 return VAR_3;
}
