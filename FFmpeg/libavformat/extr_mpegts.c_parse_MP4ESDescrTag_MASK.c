
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_6__ {scalar_t__ descr_count; scalar_t__ max_descr_count; TYPE_1__* active_descr; int pb; TYPE_1__* descr; } ;
struct TYPE_5__ {int es_id; } ;
typedef TYPE_2__ MP4DescrParseContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int*) ;
 int FUNC_1 (TYPE_2__*,int ,int,int ) ;
 int FUNC_2 (int *,int *,int*) ;

__attribute__((used)) static int FUNC_3(MP4DescrParseContext *VAR_3, int64_t VAR_4, int VAR_5)
{
    int VAR_6 = 0;
    int VAR_7 = 0;

    if (VAR_3->descr_count >= VAR_3->max_descr_count)
        return VAR_0;
    FUNC_0(&VAR_3->pb, &VAR_6);
    VAR_3->active_descr = VAR_3->descr + (VAR_3->descr_count++);

    VAR_3->active_descr->es_id = VAR_6;
    FUNC_2(&VAR_3->pb, &VAR_4, &VAR_5);
    if ((VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_1)) < 0)
        return VAR_7;
    FUNC_2(&VAR_3->pb, &VAR_4, &VAR_5);
    if (VAR_5 > 0)
        VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_2);
    VAR_3->active_descr = ((void*)0);
    return VAR_7;
}
