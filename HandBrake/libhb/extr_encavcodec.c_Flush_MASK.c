
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_5__* context; int file; TYPE_1__* job; } ;
typedef TYPE_2__ hb_work_private_t ;
struct TYPE_9__ {TYPE_2__* private_data; } ;
typedef TYPE_3__ hb_work_object_t ;
typedef int hb_buffer_list_t ;
struct TYPE_10__ {char* stats_out; } ;
struct TYPE_7__ {scalar_t__ pass_id; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_5__*,int *) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (TYPE_3__*,int *) ;

__attribute__((used)) static void FUNC_3( hb_work_object_t * VAR_1, hb_buffer_list_t * VAR_2 )
{
    hb_work_private_t * VAR_3 = VAR_1->private_data;

    FUNC_0(VAR_3->context, ((void*)0));



    if (VAR_3->job->pass_id == VAR_0 &&
        VAR_3->context->stats_out != ((void*)0))
    {
        FUNC_1( VAR_3->file, "%s", VAR_3->context->stats_out );
    }

    FUNC_2(VAR_1, VAR_2);
}
