
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int max_packet_size; } ;
struct TYPE_8__ {unsigned int io_buffer_size; int io_buffer; } ;
typedef TYPE_1__ DynBuffer ;
typedef TYPE_2__ AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int) ;
 TYPE_2__* FUNC_3 (int ,unsigned int,int,TYPE_1__*,int *,int ,int *) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(AVIOContext **VAR_4, int VAR_5)
{
    DynBuffer *VAR_6;
    unsigned VAR_7 = VAR_5 ? VAR_5 : 1024;

    if (sizeof(DynBuffer) + VAR_7 < VAR_7)
        return -1;
    VAR_6 = FUNC_2(sizeof(DynBuffer) + VAR_7);
    if (!VAR_6)
        return FUNC_0(VAR_0);
    VAR_6->io_buffer_size = VAR_7;
    *VAR_4 = FUNC_3(VAR_6->io_buffer, VAR_6->io_buffer_size, 1, VAR_6, ((void*)0),
                            VAR_5 ? VAR_3 : VAR_2,
                            VAR_5 ? ((void*)0) : VAR_1);
    if(!*VAR_4) {
        FUNC_1(VAR_6);
        return FUNC_0(VAR_0);
    }
    (*VAR_4)->max_packet_size = VAR_5;
    return 0;
}
