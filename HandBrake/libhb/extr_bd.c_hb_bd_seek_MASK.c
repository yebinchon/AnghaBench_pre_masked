
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef float uint64_t ;
struct TYPE_3__ {float duration; int stream; int bd; scalar_t__ next_chap; } ;
typedef TYPE_1__ hb_bd_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,float) ;
 int FUNC_2 (int ) ;

int FUNC_3( hb_bd_t * VAR_0, float VAR_1 )
{
    uint64_t VAR_2 = VAR_1 * VAR_0->duration;

    FUNC_1(VAR_0->bd, VAR_2);
    VAR_0->next_chap = FUNC_0( VAR_0->bd ) + 1;
    FUNC_2(VAR_0->stream);
    return 1;
}
