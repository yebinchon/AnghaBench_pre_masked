
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int lut; int table; } ;
struct TYPE_5__ {int lut; int table; } ;
struct TYPE_4__ {int lut; int table; } ;


 int FUNC_0 (int *,int const) ;
 int FUNC_1 (int ,int ,int const) ;
 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__** VAR_2 ;
 int * VAR_3 ;
 int ** VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;

void FUNC_2(const int VAR_9)
{
 int VAR_10, VAR_11;

 FUNC_1(VAR_0.table, VAR_0.lut, VAR_9);
 FUNC_1(VAR_1.table, VAR_1.lut, VAR_9);

 FUNC_0(&VAR_8[0], VAR_9);
 FUNC_0(&VAR_8[1], VAR_9);
 FUNC_0(&VAR_3[0], VAR_9);
 FUNC_0(&VAR_3[1], VAR_9);
 FUNC_0(&VAR_7[0], VAR_9);
 FUNC_0(&VAR_7[1], VAR_9);
 FUNC_0(&VAR_5, VAR_9);
 FUNC_0(&VAR_6, VAR_9);


 for( VAR_10 = 0; VAR_10 < 7; VAR_10++){
  for( VAR_11 = 0; VAR_11 < 2; VAR_11++){
   if (VAR_10 != 6) FUNC_0(&VAR_4[VAR_10][VAR_11], VAR_9);
   FUNC_1(VAR_2[VAR_10][VAR_11].table, VAR_2[VAR_10][VAR_11].lut, VAR_9);
  }
 }
}
