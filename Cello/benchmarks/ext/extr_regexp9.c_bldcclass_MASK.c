
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* spans; char* end; } ;
typedef char Rune ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int
FUNC_3(void)
{
 int VAR_4;
 Rune VAR_5[VAR_2];
 Rune *VAR_6, *VAR_7, *VAR_8;
 Rune VAR_9;
 int VAR_10;


 VAR_4 = VAR_0;
 VAR_3 = FUNC_0();



 VAR_7 = VAR_5;
 VAR_10 = FUNC_1(&VAR_9);
 if(!VAR_10 && VAR_9 == '^'){
  VAR_4 = VAR_1;
  VAR_10 = FUNC_1(&VAR_9);
  *VAR_7++ = '\n';
  *VAR_7++ = '\n';
 }


 for(; VAR_7<&VAR_5[VAR_2];){
  if(VAR_9 == 0){
   FUNC_2("malformed '[]'");
   return 0;
  }
  if(!VAR_10 && VAR_9 == ']')
   break;
  if(!VAR_10 && VAR_9 == '-'){
   if(VAR_7 == VAR_5){
    FUNC_2("malformed '[]'");
    return 0;
   }
   VAR_10 = FUNC_1(&VAR_9);
   if((!VAR_10 && VAR_9 == ']') || VAR_9 == 0){
    FUNC_2("malformed '[]'");
    return 0;
   }
   *(VAR_7-1) = VAR_9;
  } else {
   *VAR_7++ = VAR_9;
   *VAR_7++ = VAR_9;
  }
  VAR_10 = FUNC_1(&VAR_9);
 }


 for(VAR_6 = VAR_5; VAR_6 < VAR_7; VAR_6 += 2){
  for(VAR_8 = VAR_6; VAR_8 < VAR_7; VAR_8 += 2)
   if(*VAR_8 < *VAR_6){
    VAR_9 = VAR_8[0];
    VAR_8[0] = VAR_6[0];
    VAR_6[0] = VAR_9;
    VAR_9 = VAR_8[1];
    VAR_8[1] = VAR_6[1];
    VAR_6[1] = VAR_9;
   }
 }


 VAR_8 = VAR_3->spans;
 VAR_6 = VAR_5;
 if(VAR_5 == VAR_7)
  VAR_3->end = VAR_8;
 else {
  VAR_8[0] = *VAR_6++;
  VAR_8[1] = *VAR_6++;
  for(; VAR_6 < VAR_7; VAR_6 += 2)
   if(VAR_6[0] <= VAR_8[1]){
    if(VAR_6[1] > VAR_8[1])
     VAR_8[1] = VAR_6[1];
   } else {
    VAR_8 += 2;
    VAR_8[0] = VAR_6[0];
    VAR_8[1] = VAR_6[1];
   }
  VAR_3->end = VAR_8+2;
 }

 return VAR_4;
}
