
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tremolo_core {int maxindex; double* wavetable; scalar_t__ index; } ;


 int VAR_0 ;
 int FUNC_0 (double const) ;
 int FUNC_1 (double,double) ;
 double* FUNC_2 (int) ;
 int FUNC_3 (double*,int ,int) ;
 double FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct tremolo_core *VAR_1,float VAR_2,int VAR_3,float VAR_4)
{
      const double VAR_5 = 1. - VAR_2 / 2.;
      unsigned VAR_6;
      double VAR_7;
      VAR_1->index = 0;
 VAR_1->maxindex = VAR_3/VAR_4;
 VAR_1->wavetable = FUNC_2(VAR_1->maxindex*sizeof(float));
 FUNC_3(VAR_1->wavetable, 0, VAR_1->maxindex * sizeof(float));
 for (VAR_6 = 0; VAR_6 < VAR_1->maxindex; VAR_6++) {
 VAR_7 = VAR_4 * VAR_6 / VAR_3;
 VAR_7 = FUNC_4((VAR_0*2) * FUNC_1(VAR_7 + 0.25, 1.0));
 VAR_1->wavetable[VAR_6] = VAR_7 * (1 - FUNC_0(VAR_5)) + VAR_5;
      }
}
