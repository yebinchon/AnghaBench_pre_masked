
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tSMP_INT_DATA ;
struct TYPE_4__ {int flags; int status; } ;
typedef TYPE_1__ tSMP_CB ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(tSMP_CB *VAR_2, tSMP_INT_DATA *VAR_3)
{
    if (VAR_2->flags & VAR_1) {
        FUNC_0("Pairing terminated at IDLE state.\n");
        VAR_2->status = VAR_0;
        FUNC_1(VAR_2);
    }
}
