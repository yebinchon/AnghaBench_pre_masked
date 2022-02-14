
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int residual ;
typedef int data ;
typedef int FLAC__int32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,int const*,int) ;

void FUNC_2(const FLAC__int32 VAR_0[], unsigned VAR_1, unsigned VAR_2, FLAC__int32 VAR_3[])
{
 const int VAR_4 = (int)VAR_1;
 int VAR_5;

 switch(VAR_2) {
  case 0:
   FUNC_0(sizeof(VAR_3[0]) == sizeof(VAR_0[0]));
   FUNC_1(VAR_3, VAR_0, sizeof(VAR_3[0])*VAR_1);
   break;
  case 1:
   for(VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
    VAR_3[VAR_5] = VAR_0[VAR_5] - VAR_0[VAR_5-1];
   break;
  case 2:
   for(VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
    VAR_3[VAR_5] = VAR_0[VAR_5] - 2*VAR_0[VAR_5-1] + VAR_0[VAR_5-2];
   break;
  case 3:
   for(VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
    VAR_3[VAR_5] = VAR_0[VAR_5] - 3*VAR_0[VAR_5-1] + 3*VAR_0[VAR_5-2] - VAR_0[VAR_5-3];
   break;
  case 4:
   for(VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
    VAR_3[VAR_5] = VAR_0[VAR_5] - 4*VAR_0[VAR_5-1] + 6*VAR_0[VAR_5-2] - 4*VAR_0[VAR_5-3] + VAR_0[VAR_5-4];
   break;
  default:
   FUNC_0(0);
 }
}
