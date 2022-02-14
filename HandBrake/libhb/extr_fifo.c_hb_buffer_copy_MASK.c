
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; } ;
struct TYPE_7__ {scalar_t__ size; TYPE_1__ s; int f; int data; } ;
typedef TYPE_2__ hb_buffer_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

int FUNC_2(hb_buffer_t * VAR_1, const hb_buffer_t * VAR_2)
{
    if (VAR_2 == ((void*)0) || VAR_1 == ((void*)0))
        return -1;

    if ( VAR_1->size < VAR_2->size )
        return -1;

    FUNC_1( VAR_1->data, VAR_2->data, VAR_2->size );
    VAR_1->s = VAR_2->s;
    VAR_1->f = VAR_2->f;
    if (VAR_1->s.type == VAR_0)
        FUNC_0(VAR_1);

    return 0;
}
