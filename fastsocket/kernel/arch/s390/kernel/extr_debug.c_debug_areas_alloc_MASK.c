
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ************************ debug_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ***************************) ;
 void* FUNC_1 (int,int ) ;
 int ************************************* FUNC_2 (int ,int ) ;

__attribute__((used)) static debug_entry_t***
FUNC_3(int VAR_2, int VAR_3)
{
 debug_entry_t*** VAR_4;
 int VAR_5,VAR_6;

 VAR_4 = FUNC_1(VAR_3 *
     sizeof(debug_entry_t**),
     VAR_0);
 if (!VAR_4)
  goto fail_malloc_areas;
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_4[VAR_5] = FUNC_1(VAR_2 *
    sizeof(debug_entry_t*),VAR_0);
  if (!VAR_4[VAR_5]) {
   goto fail_malloc_areas2;
  }
  for(VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
   VAR_4[VAR_5][VAR_6] = FUNC_2(VAR_1, VAR_0);
   if(!VAR_4[VAR_5][VAR_6]) {
    for(VAR_6--; VAR_6 >=0 ; VAR_6--) {
     FUNC_0(VAR_4[VAR_5][VAR_6]);
    }
    FUNC_0(&VAR_4[VAR_5]);
    goto fail_malloc_areas2;
   }
  }
 }
 return VAR_4;

fail_malloc_areas2:
 for(VAR_5--; VAR_5 >= 0; VAR_5--){
  for(VAR_6=0; VAR_6 < VAR_2;VAR_6++){
   FUNC_0(VAR_4[VAR_5][VAR_6]);
  }
  FUNC_0(&VAR_4[VAR_5]);
 }
 FUNC_0(VAR_4);
fail_malloc_areas:
 return ((void*)0);

}
