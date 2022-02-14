
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* Test; int PSM; } ;
struct TYPE_5__ {scalar_t__ ZTE; } ;


 int* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int*,char**) ;
 int VAR_12 ;
 int* VAR_13 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 TYPE_2__* VAR_14 ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 () ;
 int VAR_15 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 () ;

int FUNC_9(int *VAR_16, char *VAR_17[])
{

 int VAR_18;
 for (VAR_18 = 0; VAR_18 < 256; VAR_18++) {
  int VAR_19 = VAR_0[VAR_18];


  VAR_13[(VAR_18 ^ VAR_18 * 2) & 16 ? VAR_18 ^ 24 : VAR_18] = (VAR_19 >> 16) + (VAR_19 & 0xff00) + ((VAR_19 & 0xff) << 16);
 }

 FUNC_5();

 VAR_14 = FUNC_3(VAR_8);
 FUNC_2(VAR_4, VAR_2, VAR_6,
             VAR_5, VAR_3);
 FUNC_1(VAR_1);
 VAR_14->PSM = VAR_9;
 VAR_14->Test->ZTE = 0;
 FUNC_4(VAR_14);

 FUNC_6(0);
 FUNC_7(VAR_10, VAR_11, VAR_15);
 return VAR_12;
}
