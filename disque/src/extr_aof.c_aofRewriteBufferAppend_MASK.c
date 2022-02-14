
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* value; } ;
typedef TYPE_1__ listNode ;
struct TYPE_8__ {unsigned long free; scalar_t__ used; scalar_t__ buf; } ;
typedef TYPE_2__ aofrwblock ;
struct TYPE_9__ {int aof_pipe_write_data_to_child; int el; int aof_rewrite_buf_blocks; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,TYPE_2__*) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,unsigned char*,unsigned long) ;
 TYPE_4__ VAR_5 ;
 int FUNC_7 (int,char*,int) ;
 TYPE_2__* FUNC_8 (int) ;

void FUNC_9(unsigned char *VAR_6, unsigned long VAR_7) {
    listNode *VAR_8 = FUNC_4(VAR_5.aof_rewrite_buf_blocks);
    aofrwblock *VAR_9 = VAR_8 ? VAR_8->value : ((void*)0);

    while(VAR_7) {


        if (VAR_9) {
            unsigned long VAR_10 = (VAR_9->free < VAR_7) ? VAR_9->free : VAR_7;
            if (VAR_10) {
                FUNC_6(VAR_9->buf+VAR_9->used, VAR_6, VAR_10);
                VAR_9->used += VAR_10;
                VAR_9->free -= VAR_10;
                VAR_6 += VAR_10;
                VAR_7 -= VAR_10;
            }
        }

        if (VAR_7) {
            int VAR_11;

            VAR_9 = FUNC_8(sizeof(*VAR_9));
            VAR_9->free = VAR_1;
            VAR_9->used = 0;
            FUNC_3(VAR_5.aof_rewrite_buf_blocks,VAR_9);



            VAR_11 = FUNC_5(VAR_5.aof_rewrite_buf_blocks);
            if (((VAR_11+1) % 10) == 0) {
                int VAR_12 = ((VAR_11+1) % 100) == 0 ? VAR_3 :
                                                         VAR_2;
                FUNC_7(VAR_12,"Background AOF buffer size: %lu MB",
                    FUNC_2()/(1024*1024));
            }
        }
    }



    if (FUNC_1(VAR_5.el,VAR_5.aof_pipe_write_data_to_child) == 0) {
        FUNC_0(VAR_5.el, VAR_5.aof_pipe_write_data_to_child,
            VAR_0, VAR_4, ((void*)0));
    }
}
