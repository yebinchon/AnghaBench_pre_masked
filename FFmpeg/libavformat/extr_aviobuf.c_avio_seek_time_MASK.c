
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_3__ {scalar_t__ (* read_seek ) (int ,int,scalar_t__,int) ;scalar_t__ (* seek ) (int ,int ,int ) ;scalar_t__ pos; int opaque; int buf_end; int buf_ptr; } ;
typedef TYPE_1__ AVIOContext ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int,scalar_t__,int) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;

int64_t FUNC_3(AVIOContext *VAR_2, int VAR_3,
                       int64_t VAR_4, int VAR_5)
{
    int64_t VAR_6;
    if (!VAR_2->read_seek)
        return FUNC_0(VAR_0);
    VAR_6 = VAR_2->read_seek(VAR_2->opaque, VAR_3, VAR_4, VAR_5);
    if (VAR_6 >= 0) {
        int64_t VAR_7;
        VAR_2->buf_ptr = VAR_2->buf_end;
        VAR_7 = VAR_2->seek(VAR_2->opaque, 0, VAR_1);
        if (VAR_7 >= 0)
            VAR_2->pos = VAR_7;
        else if (VAR_7 != FUNC_0(VAR_0))
            VAR_6 = VAR_7;
    }
    return VAR_6;
}
