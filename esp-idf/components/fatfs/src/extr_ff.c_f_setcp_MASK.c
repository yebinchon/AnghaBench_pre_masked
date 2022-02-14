
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef size_t UINT ;
typedef int FRESULT ;
typedef int BYTE ;


 int VAR_0 ;
 int * VAR_1 ;




 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

FRESULT FUNC_0 (
 WORD VAR_5
)
{
 static const WORD VAR_6[] = { 437, 720, 737, 771, 775, 850, 852, 857, 860, 861, 862, 863, 864, 865, 866, 869, 932, 936, 949, 950, 0};
 static const BYTE* const VAR_7[] = {147, 146, 145, 144, 143, 142, 141, 140, 139, 138, 137, 136, 135, 134, 133, 132, 131, 130, 129, 128, 0};
 UINT VAR_8;


 for (VAR_8 = 0; VAR_6[VAR_8] != 0 && VAR_6[VAR_8] != VAR_5; VAR_8++) ;
 if (VAR_6[VAR_8] != VAR_5) return VAR_3;

 VAR_0 = VAR_5;
 if (VAR_5 >= 900) {
  VAR_2 = 0;
  VAR_1 = VAR_7[VAR_8];
 } else {
  VAR_2 = VAR_7[VAR_8];
  VAR_1 = 0;
 }
 return VAR_4;
}
