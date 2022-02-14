
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ localkey_t ;
struct TYPE_2__ {void* buf; } ;
typedef TYPE_1__ buffer_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void*) ;

__attribute__((used)) static void
FUNC_1(void * VAR_1)

{
  if(VAR_1) {
    buffer_t * VAR_2 = (buffer_t *) VAR_1;
    localkey_t VAR_3;

    for(VAR_3 = (localkey_t) 0; VAR_3 < VAR_0; VAR_3++) {
      FUNC_0(VAR_2->buf);
      VAR_2++;
      }

    FUNC_0(VAR_1);
    }
}
