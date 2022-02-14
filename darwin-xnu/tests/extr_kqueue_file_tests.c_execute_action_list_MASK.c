
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int action_t ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

int
FUNC_3(action_t *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 for (VAR_4 = 0, VAR_5 = 0; (0 == VAR_5 || (!VAR_3)) && (VAR_4 < VAR_2); VAR_4++) {
  FUNC_0("Starting prep action %d\n", VAR_4);
  VAR_5 = *((int *) FUNC_1(&(VAR_1[VAR_4])));
  if(VAR_5 != 0) {
   FUNC_0("Action list failed on step %d. res = %d errno = %d (%s)\n", VAR_4, VAR_5,
    VAR_0, FUNC_2(VAR_0));
  } else {
   FUNC_0("Action list work succeeded on step %d.\n", VAR_4);
  }
 }

 return VAR_5;
}
