
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct action {int pid_filter; void* kcallstack_depth; void* ucallstack_depth; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 struct action* VAR_6 ;
 struct action* FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (struct action*,unsigned int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct action*,struct action*,unsigned int) ;
 int FUNC_4 (struct action*,int ,unsigned int) ;

int
FUNC_5(unsigned VAR_7)
{
 struct action *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
 unsigned VAR_10;


 if (VAR_7 == VAR_5) {
  return 0;
 }


 if (VAR_7 < VAR_5) {
  return VAR_1;
 }


 if (VAR_7 > VAR_0) {
  return VAR_1;
 }




 if (VAR_5 == 0) {
  int VAR_11;
  if ((VAR_11 = FUNC_2())) {
   return VAR_11;
  }
 }


 VAR_8 = FUNC_0(VAR_7 * sizeof(*VAR_8), VAR_4);
 if (VAR_8 == ((void*)0)) {
  return VAR_2;
 }

 VAR_9 = VAR_6;
 VAR_10 = VAR_5;

 if (VAR_9 != ((void*)0)) {
  FUNC_3(VAR_8, VAR_6, VAR_5 * sizeof(*VAR_6));
 }

 FUNC_4(&(VAR_8[VAR_5]), 0, (VAR_7 - VAR_10) * sizeof(*VAR_6));

 for (unsigned int VAR_12 = VAR_10; VAR_12 < VAR_7; VAR_12++) {
  VAR_8[VAR_12].pid_filter = -1;
  VAR_8[VAR_12].ucallstack_depth = VAR_3;
  VAR_8[VAR_12].kcallstack_depth = VAR_3;
 }

 VAR_6 = VAR_8;
 VAR_5 = VAR_7;

 if (VAR_9 != ((void*)0)) {
  FUNC_1(VAR_9, VAR_10 * sizeof(*VAR_6));
 }

 return 0;
}
