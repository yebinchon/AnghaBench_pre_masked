
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {long* values; int ncases; } ;
typedef TYPE_1__* Swtch ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ VAR_1 ;
 int* FUNC_1 (int,int,int ) ;
 int FUNC_2 (TYPE_1__*,int*,int ,int) ;

void FUNC_3(Swtch VAR_2) {
 int *VAR_3, VAR_4, VAR_5;
 long *VAR_6 = VAR_2->values;

 VAR_3 = FUNC_1(VAR_2->ncases + 1,
  sizeof *VAR_3, VAR_0);
 for (VAR_5 = VAR_4 = 0; VAR_4 < VAR_2->ncases; VAR_4++, VAR_5++) {
  VAR_3[VAR_5] = VAR_4;
  while (VAR_5 > 0 && FUNC_0(VAR_5-1, VAR_4) >= VAR_1)
   VAR_5--;
 }
 VAR_3[VAR_5] = VAR_2->ncases;
 FUNC_2(VAR_2, VAR_3, 0, VAR_5 - 1);
}
