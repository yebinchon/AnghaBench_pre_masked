
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(int VAR_4, int *VAR_5)
{
 int VAR_6;

 FUNC_5(VAR_0, *VAR_5);
 VAR_6 = FUNC_6(VAR_0);
 if (VAR_4 < VAR_6 ||
     VAR_4 >= VAR_6+VAR_3) {
  VAR_6 = FUNC_1(VAR_4-VAR_3/2, 0);
  if (VAR_6 >= FUNC_0(VAR_0)-VAR_3)
   VAR_6 = FUNC_0(VAR_0)-VAR_3;
  FUNC_5(VAR_0, VAR_6);
 }
 FUNC_4(VAR_0,
   VAR_1[VAR_4]);
 *VAR_5 = VAR_6;
 FUNC_2(VAR_0);
 FUNC_3(VAR_2);
}
