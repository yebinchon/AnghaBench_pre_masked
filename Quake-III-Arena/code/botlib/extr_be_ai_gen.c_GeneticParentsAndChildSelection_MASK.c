
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* Print ) (int ,char*) ;} ;


 int FUNC_0 (float*,float*,int) ;
 int FUNC_1 (int,float*) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;

int FUNC_4(int VAR_4, float *VAR_5, int *VAR_6, int *VAR_7, int *VAR_8)
{
 float VAR_9[256], VAR_10;
 int VAR_11;

 if (VAR_4 > 256)
 {
  VAR_1.Print(VAR_0, "GeneticParentsAndChildSelection: too many bots\n");
  *VAR_6 = *VAR_7 = *VAR_8 = 0;
  return VAR_2;
 }
 for (VAR_10 = 0, VAR_11 = 0; VAR_11 < VAR_4; VAR_11++)
 {
  if (VAR_5[VAR_11] < 0) continue;
  VAR_10++;
 }
 if (VAR_10 < 3)
 {
  VAR_1.Print(VAR_0, "GeneticParentsAndChildSelection: too few valid bots\n");
  *VAR_6 = *VAR_7 = *VAR_8 = 0;
  return VAR_2;
 }
 FUNC_0(VAR_9, VAR_5, sizeof(float) * VAR_4);

 *VAR_6 = FUNC_1(VAR_4, VAR_9);
 VAR_9[*VAR_6] = -1;

 *VAR_7 = FUNC_1(VAR_4, VAR_9);
 VAR_9[*VAR_7] = -1;

 VAR_10 = 0;
 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++)
 {
  if (VAR_9[VAR_11] < 0) continue;
  if (VAR_9[VAR_11] > VAR_10) VAR_10 = VAR_9[VAR_11];
 }
 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++)
 {
  if (VAR_9[VAR_11] < 0) continue;
  VAR_9[VAR_11] = VAR_10 - VAR_9[VAR_11];
 }

 *VAR_8 = FUNC_1(VAR_4, VAR_9);
 return VAR_3;
}
