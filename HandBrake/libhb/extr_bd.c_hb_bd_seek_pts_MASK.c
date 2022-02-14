
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int stream; int bd; scalar_t__ next_chap; } ;
typedef TYPE_1__ hb_bd_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

int FUNC_3( hb_bd_t * VAR_0, uint64_t VAR_1 )
{
    FUNC_1(VAR_0->bd, VAR_1);
    VAR_0->next_chap = FUNC_0( VAR_0->bd ) + 1;
    FUNC_2(VAR_0->stream);
    return 1;
}
