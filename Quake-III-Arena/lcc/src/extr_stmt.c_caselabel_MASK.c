
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ncases; int size; long* values; int * labels; } ;
typedef int Symbol ;
typedef TYPE_1__* Swtch ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,long) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int,int,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(Swtch VAR_2, long VAR_3, int VAR_4) {
 int VAR_5;

 if (VAR_2->ncases >= VAR_2->size)
  {
  long *VAR_6 = VAR_2->values;
  Symbol *VAR_7 = VAR_2->labels;
  VAR_2->size *= 2;
  VAR_2->values = FUNC_2(VAR_2->size, sizeof *VAR_2->values, VAR_1);
  VAR_2->labels = FUNC_2(VAR_2->size, sizeof *VAR_2->labels, VAR_1);
  for (VAR_5 = 0; VAR_5 < VAR_2->ncases; VAR_5++) {
   VAR_2->values[VAR_5] = VAR_6[VAR_5];
   VAR_2->labels[VAR_5] = VAR_7[VAR_5];
  }
  }
 VAR_5 = VAR_2->ncases;
 for ( ; VAR_5 > 0 && VAR_2->values[VAR_5-1] >= VAR_3; VAR_5--) {
  VAR_2->values[VAR_5] = VAR_2->values[VAR_5-1];
  VAR_2->labels[VAR_5] = VAR_2->labels[VAR_5-1];
 }
 if (VAR_5 < VAR_2->ncases && VAR_2->values[VAR_5] == VAR_3)
  FUNC_0("duplicate case label `%d'\n", VAR_3);
 VAR_2->values[VAR_5] = VAR_3;
 VAR_2->labels[VAR_5] = FUNC_1(VAR_4);
 ++VAR_2->ncases;
 if (VAR_0 >= 2 && VAR_2->ncases == 258)
  FUNC_3("more than 257 cases in a switch\n");
}
