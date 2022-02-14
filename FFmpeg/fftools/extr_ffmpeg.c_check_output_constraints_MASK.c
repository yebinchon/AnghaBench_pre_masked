
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int ist_index; } ;
struct TYPE_12__ {size_t file_index; scalar_t__ pts; TYPE_1__* st; } ;
struct TYPE_11__ {scalar_t__ start_time; } ;
struct TYPE_10__ {size_t file_index; int source_index; scalar_t__ finished; } ;
struct TYPE_9__ {int index; } ;
typedef TYPE_2__ OutputStream ;
typedef TYPE_3__ OutputFile ;
typedef TYPE_4__ InputStream ;


 scalar_t__ VAR_0 ;
 TYPE_6__** VAR_1 ;
 TYPE_3__** VAR_2 ;

__attribute__((used)) static int FUNC_0(InputStream *VAR_3, OutputStream *VAR_4)
{
    OutputFile *VAR_5 = VAR_2[VAR_4->file_index];
    int VAR_6 = VAR_1[VAR_3->file_index]->ist_index + VAR_3->st->index;

    if (VAR_4->source_index != VAR_6)
        return 0;

    if (VAR_4->finished)
        return 0;

    if (VAR_5->start_time != VAR_0 && VAR_3->pts < VAR_5->start_time)
        return 0;

    return 1;
}
