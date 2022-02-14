
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int** VAR_8 ;
 int** VAR_9 ;
 int ** VAR_10 ;

__attribute__((used)) static int FUNC_0(int VAR_11, uint8_t *VAR_12)
{
    int VAR_13, VAR_14;

    VAR_14 = VAR_8[VAR_11 & VAR_4 ? VAR_11 & VAR_0 ? 1 : 2 : 0]
                         [VAR_11 & VAR_7 ? VAR_11 & VAR_3 ? 1 : 2 : 0] + 1;
    VAR_13 = VAR_8[VAR_11 & VAR_6 ? VAR_11 & VAR_2 ? 1 : 2 : 0]
                         [VAR_11 & VAR_5 ? VAR_11 & VAR_1 ? 1 : 2 : 0] + 1;
    *VAR_12 = VAR_10[VAR_14][VAR_13];

    return VAR_9[VAR_14][VAR_13];
}
