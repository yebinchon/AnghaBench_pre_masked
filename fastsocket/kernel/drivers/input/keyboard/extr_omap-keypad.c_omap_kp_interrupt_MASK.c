
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_kp {int rows; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int,scalar_t__) ;
 int * VAR_4 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_5, void *VAR_6)
{
 struct omap_kp *VAR_7 = VAR_6;


 if (FUNC_0()) {
  int VAR_8;

  for (VAR_8 = 0; VAR_8 < VAR_7->rows; VAR_8++) {
   int VAR_9 = FUNC_3(VAR_4[VAR_8]);






   if (VAR_9 == VAR_5)
    FUNC_2(VAR_9);
   else
    FUNC_1(VAR_9);
  }
 } else

  FUNC_4(1, VAR_1 + VAR_2);

 FUNC_5(&VAR_3);

 return VAR_0;
}
