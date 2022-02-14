
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct revmodel {TYPE_2__* allpassL; void** bufallpass; TYPE_1__* combL; void** bufcomb; } ;
struct TYPE_4__ {double bufsize; float feedback; void* buffer; } ;
struct TYPE_3__ {double bufsize; void* buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (double) ;
 int FUNC_1 (void*,int ,double) ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_2 (struct revmodel*,int ) ;
 int FUNC_3 (struct revmodel*,int ) ;
 int FUNC_4 (struct revmodel*,int ) ;
 int FUNC_5 (struct revmodel*,int ) ;
 int FUNC_6 (struct revmodel*,int ) ;
 int FUNC_7 (struct revmodel*,int ) ;

__attribute__((used)) static void FUNC_8(struct revmodel *VAR_8,int VAR_9)
{

  static const int VAR_10[8] = { 1116,1188,1277,1356,1422,1491,1557,1617 };
  static const int VAR_11[4] = { 225,341,441,556 };
  double VAR_12 = VAR_9 * (1 / 44100.0);
  unsigned VAR_13;

   for (VAR_13 = 0; VAR_13 < VAR_7; ++VAR_13)
   {
    VAR_8->bufcomb[VAR_13] = FUNC_0(VAR_12*VAR_10[VAR_13]*sizeof(float));
    VAR_8->combL[VAR_13].buffer = VAR_8->bufcomb[VAR_13];
         FUNC_1(VAR_8->combL[VAR_13].buffer,0,VAR_12*VAR_10[VAR_13]*sizeof(float));
         VAR_8->combL[VAR_13].bufsize=VAR_12*VAR_10[VAR_13];
  }

   for (VAR_13 = 0; VAR_13 < VAR_6; ++VAR_13)
   {
    VAR_8->bufallpass[VAR_13] = FUNC_0(VAR_12*VAR_11[VAR_13]*sizeof(float));
    VAR_8->allpassL[VAR_13].buffer = VAR_8->bufallpass[VAR_13];
         FUNC_1(VAR_8->allpassL[VAR_13].buffer,0,VAR_12*VAR_11[VAR_13]*sizeof(float));
         VAR_8->allpassL[VAR_13].bufsize=VAR_12*VAR_11[VAR_13];
         VAR_8->allpassL[VAR_13].feedback = 0.5f;
  }

   FUNC_6(VAR_8, VAR_4);
   FUNC_5(VAR_8, VAR_3);
   FUNC_3(VAR_8, VAR_1);
   FUNC_2(VAR_8, VAR_0);
   FUNC_7(VAR_8, VAR_5);
   FUNC_4(VAR_8, VAR_2);
}
