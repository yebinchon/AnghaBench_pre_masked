
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ title; } ;
typedef TYPE_1__ hb_chapter_t ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__ const*,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

hb_chapter_t *FUNC_3(const hb_chapter_t *VAR_0)
{
    hb_chapter_t *VAR_1 = ((void*)0);

    if ( VAR_0 )
    {
        VAR_1 = FUNC_0( 1, sizeof(*VAR_1) );
        FUNC_1( VAR_1, VAR_0, sizeof(*VAR_1) );
        if ( VAR_0->title )
        {
            VAR_1->title = FUNC_2( VAR_0->title );
        }
    }
    return VAR_1;
}
