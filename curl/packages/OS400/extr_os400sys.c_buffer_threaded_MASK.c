
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int localkey_t ;
typedef int buffer_t ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (size_t,int) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *,long) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,void*) ;
 int VAR_1 ;

__attribute__((used)) static char *
FUNC_5(localkey_t VAR_2, long VAR_3)

{
  buffer_t * VAR_4;





  VAR_4 = (buffer_t *) FUNC_3(VAR_1);

  if(!VAR_4) {
    if(VAR_3 < 0)
      return (char *) ((void*)0);



    VAR_4 = FUNC_0((size_t) VAR_0, sizeof(*VAR_4));
    if(!VAR_4)
      return (char *) ((void*)0);

    if(FUNC_4(VAR_1, (void *) VAR_4)) {
      FUNC_1(VAR_4);
      return (char *) ((void*)0);
    }
  }

  return FUNC_2(VAR_4 + VAR_2, VAR_3);
}
