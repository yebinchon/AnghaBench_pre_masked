
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int maxsize; int * data; } ;
typedef TYPE_1__ msg_t ;
typedef int byte ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 () ;
 int VAR_0 ;

void FUNC_2( msg_t *VAR_1, byte *VAR_2, int VAR_3 ) {
 if (!VAR_0) {
  FUNC_1();
 }
 FUNC_0 (VAR_1, 0, sizeof(*VAR_1));
 VAR_1->data = VAR_2;
 VAR_1->maxsize = VAR_3;
}
