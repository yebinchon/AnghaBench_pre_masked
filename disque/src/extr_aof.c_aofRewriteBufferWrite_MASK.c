
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef int listNode ;
typedef int listIter ;
struct TYPE_4__ {scalar_t__ used; int buf; } ;
typedef TYPE_1__ aofrwblock ;
struct TYPE_5__ {int aof_rewrite_buf_blocks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 TYPE_2__ VAR_2 ;
 scalar_t__ FUNC_3 (int,int ,scalar_t__) ;

ssize_t FUNC_4(int VAR_3) {
    listNode *VAR_4;
    listIter VAR_5;
    ssize_t VAR_6 = 0;

    FUNC_2(VAR_2.aof_rewrite_buf_blocks,&VAR_5);
    while((VAR_4 = FUNC_0(&VAR_5))) {
        aofrwblock *VAR_7 = FUNC_1(VAR_4);
        ssize_t VAR_8;

        if (VAR_7->used) {
            VAR_8 = FUNC_3(VAR_3,VAR_7->buf,VAR_7->used);
            if (VAR_8 != (ssize_t)VAR_7->used) {
                if (VAR_8 == 0) VAR_1 = VAR_0;
                return -1;
            }
            VAR_6 += VAR_8;
        }
    }
    return VAR_6;
}
