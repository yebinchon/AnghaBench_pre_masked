
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int maxsize; int oob; int * data; } ;
typedef TYPE_1__ msg_t ;
typedef int byte ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_2( msg_t *VAR_2, byte *VAR_3, int VAR_4 ) {
 if (!VAR_0) {
  FUNC_1();
 }
 FUNC_0 (VAR_2, 0, sizeof(*VAR_2));
 VAR_2->data = VAR_3;
 VAR_2->maxsize = VAR_4;
 VAR_2->oob = VAR_1;
}
