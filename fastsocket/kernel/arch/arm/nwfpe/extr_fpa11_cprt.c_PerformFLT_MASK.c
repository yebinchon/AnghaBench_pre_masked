
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct roundingData {scalar_t__ exception; int precision; int mode; } ;
struct TYPE_5__ {TYPE_1__* fpreg; int * fType; } ;
struct TYPE_4__ {int fExtended; int fDouble; int fSingle; } ;
typedef TYPE_2__ FPA11 ;


 TYPE_2__* FUNC_0 () ;
 unsigned int const VAR_0 ;



 int FUNC_1 (unsigned int const) ;
 int FUNC_2 (unsigned int const) ;
 int FUNC_3 (scalar_t__) ;
 size_t FUNC_4 (unsigned int const) ;
 int FUNC_5 (unsigned int const) ;
 int FUNC_6 (struct roundingData*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

unsigned int FUNC_10(const unsigned int VAR_4)
{
 FPA11 *VAR_5 = FUNC_0();
 struct roundingData VAR_6;

 VAR_6.mode = FUNC_1(VAR_4);
 VAR_6.precision = FUNC_2(VAR_4);
 VAR_6.exception = 0;

 switch (VAR_4 & VAR_0) {
 case 128:
  {
   VAR_5->fType[FUNC_4(VAR_4)] = VAR_3;
   VAR_5->fpreg[FUNC_4(VAR_4)].fSingle = FUNC_6(&VAR_6, FUNC_9(FUNC_5(VAR_4)));
  }
  break;

 case 130:
  {
   VAR_5->fType[FUNC_4(VAR_4)] = VAR_1;
   VAR_5->fpreg[FUNC_4(VAR_4)].fDouble = FUNC_7(FUNC_9(FUNC_5(VAR_4)));
  }
  break;
 default:
  return 0;
 }

 if (VAR_6.exception)
  FUNC_3(VAR_6.exception);

 return 1;
}
