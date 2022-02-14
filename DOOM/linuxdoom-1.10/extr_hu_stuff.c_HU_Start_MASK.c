
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 char* VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ,int ,int ,int*) ;
 int FUNC_3 (int *,int ,int ,int ,int ,int ,int*) ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int * VAR_20 ;
 int * VAR_21 ;



 int VAR_22 ;
 int * VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;

void FUNC_5(void)
{

    int VAR_26;
    char* VAR_27;

    if (VAR_15)
 FUNC_0();

    VAR_21 = &VAR_20[VAR_13];
    VAR_19 = 0;
    VAR_17 = 0;
    VAR_18 = 0;
    VAR_12 = 0;


    FUNC_3(&VAR_24,
      VAR_4, VAR_5, VAR_3,
      VAR_16,
      VAR_0, &VAR_19);


    FUNC_4(&VAR_25,
         VAR_8, VAR_9,
         VAR_16,
         VAR_0);

    switch ( VAR_14 )
    {
      case 128:
      case 130:
      case 129:
 VAR_27 = VAR_6;
 break;
      case 131:
      default:
  VAR_27 = VAR_7;
  break;
    }

    while (*VAR_27)
 FUNC_1(&VAR_25, *(VAR_27++));


    FUNC_2(&VAR_22,
      VAR_1, VAR_2,
      VAR_16,
      VAR_0, &VAR_12);


    for (VAR_26=0 ; VAR_26<VAR_10 ; VAR_26++)
 FUNC_2(&VAR_23[VAR_26], 0, 0, 0, 0, &VAR_11);

    VAR_15 = 1;

}
