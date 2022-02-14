
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct roundingData {scalar_t__ exception; int precision; int mode; } ;
struct TYPE_5__ {int* fType; TYPE_1__* fpreg; } ;
struct TYPE_4__ {int fExtended; int fDouble; int fSingle; } ;
typedef TYPE_2__ FPA11 ;


 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (unsigned int const) ;
 int FUNC_2 (unsigned int const) ;
 int FUNC_3 (struct roundingData*,int ) ;
 int FUNC_4 (struct roundingData*,int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct roundingData*,int ) ;
 unsigned int FUNC_7 (unsigned int const) ;
 int FUNC_8 (unsigned int const) ;



 int FUNC_9 (int ,int ) ;

unsigned int FUNC_10(const unsigned int VAR_0)
{
 FPA11 *VAR_1 = FUNC_0();
 unsigned int VAR_2 = FUNC_7(VAR_0);
 struct roundingData VAR_3;

 VAR_3.mode = FUNC_1(VAR_0);
 VAR_3.precision = FUNC_2(VAR_0);
 VAR_3.exception = 0;

 switch (VAR_1->fType[VAR_2]) {
 case 128:
  {
   FUNC_9(FUNC_8(VAR_0), FUNC_3(&VAR_3, VAR_1->fpreg[VAR_2].fSingle));
  }
  break;

 case 130:
  {
   FUNC_9(FUNC_8(VAR_0), FUNC_4(&VAR_3, VAR_1->fpreg[VAR_2].fDouble));
  }
  break;
 default:
  return 0;
 }

 if (VAR_3.exception)
  FUNC_5(VAR_3.exception);

 return 1;
}
