
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cursize; int* data; } ;
typedef TYPE_1__ msg_t ;
struct TYPE_5__ {int serverMessageSequence; int demofile; } ;


 int FUNC_0 (int*,int,int ) ;
 int FUNC_1 (int) ;
 TYPE_2__ VAR_0 ;

void FUNC_2 ( msg_t *VAR_1, int VAR_2 ) {
 int VAR_3, VAR_4;


 VAR_3 = VAR_0.serverMessageSequence;
 VAR_4 = FUNC_1( VAR_3 );
 FUNC_0 (&VAR_4, 4, VAR_0.demofile);


 VAR_3 = VAR_1->cursize - VAR_2;
 VAR_4 = FUNC_1(VAR_3);
 FUNC_0 (&VAR_4, 4, VAR_0.demofile);
 FUNC_0 ( VAR_1->data + VAR_2, VAR_3, VAR_0.demofile );
}
