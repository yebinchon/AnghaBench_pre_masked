
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_7__ {int ssaTrack; int line; } ;
typedef TYPE_2__ hb_filter_private_t ;
struct TYPE_6__ {scalar_t__ start; scalar_t__ stop; } ;
struct TYPE_8__ {int size; TYPE_1__ s; scalar_t__ data; } ;
typedef TYPE_3__ hb_buffer_t ;


 int FUNC_0 (int ,char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,int ,char*) ;
 char* FUNC_3 (char*,char) ;

__attribute__((used)) static void FUNC_4(hb_filter_private_t *VAR_0, hb_buffer_t *VAR_1)
{
    int64_t VAR_2, VAR_3;
    char *VAR_4, *VAR_5;




    VAR_5 = FUNC_3((char*)VAR_1->data, ',');
    if (VAR_5 == ((void*)0))
        return;

    VAR_4 = FUNC_2("%d%s", ++VAR_0->line, VAR_5);




    VAR_2 = VAR_1->s.start;
    VAR_3 = VAR_1->s.stop - VAR_1->s.start;
    FUNC_0(VAR_0->ssaTrack, VAR_4, VAR_1->size, VAR_2, VAR_3);
    FUNC_1(VAR_4);
}
