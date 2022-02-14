
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int buffer; int buffMutex; int buffNotEmpty; } ;
typedef TYPE_1__ SLogBuff ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;

void FUNC_4(SLogBuff *VAR_0) {
  FUNC_3(&(VAR_0->buffNotEmpty));
  FUNC_1(&(VAR_0->buffMutex));
  FUNC_0(VAR_0->buffer);
  FUNC_2(VAR_0);
}
