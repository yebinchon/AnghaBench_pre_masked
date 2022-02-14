
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_0 (size_t,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int*,int ,int *,int *) ;
 int VAR_13 ;
 int VAR_14 ;
 int ** VAR_15 ;

__attribute__((used)) static int FUNC_2(void *VAR_16, int *VAR_17, int *VAR_18)
{
 int VAR_19, VAR_20 = 0;


 for (VAR_19 = 0; VAR_19 < VAR_6; VAR_19++) {
  int VAR_21, VAR_22;
  for (VAR_21 = 0; VAR_21 < VAR_4; VAR_21++) {
   VAR_22 = FUNC_0(VAR_19, VAR_21);
   if (VAR_15[VAR_19] == ((void*)0))
    VAR_17[VAR_22] = VAR_18[VAR_22] = 0;
   if (VAR_17[VAR_22])
    VAR_20++;
  }







 }
 FUNC_1(VAR_17, VAR_0, &VAR_14, &VAR_13);

 return VAR_20;
}
