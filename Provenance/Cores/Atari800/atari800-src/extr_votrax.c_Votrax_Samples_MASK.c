
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ iType; int iSecondStart; int iLengthms; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int) ;

int FUNC_1(int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;
 int VAR_7 = 0;

 if ( VAR_1[VAR_2].iType>=VAR_0 && VAR_2!=VAR_3) {
  VAR_5 = VAR_1[VAR_2].iSecondStart;
 }

 if ( VAR_1[VAR_3].iType>=VAR_0 ) {


  return VAR_4;
 }
 if (VAR_2 == 0x3f) VAR_7 = FUNC_0(20);


 VAR_6 = FUNC_0(VAR_1[VAR_3].iLengthms);
 return VAR_6 + VAR_5 + VAR_7 ;
}
