
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_3__ {scalar_t__ written; scalar_t__ (* seek ) (int ,int,int ) ;int pos; int opaque; } ;
typedef TYPE_1__ AVIOContext ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int,int ) ;
 scalar_t__ FUNC_2 (int ,int,int ) ;
 scalar_t__ FUNC_3 (int ,int,int ) ;

int64_t FUNC_4(AVIOContext *VAR_5)
{
    int64_t VAR_6;

    if (!VAR_5)
        return FUNC_0(VAR_1);

    if (VAR_5->written)
        return VAR_5->written;

    if (!VAR_5->seek)
        return FUNC_0(VAR_2);
    VAR_6 = VAR_5->seek(VAR_5->opaque, 0, VAR_0);
    if (VAR_6 < 0) {
        if ((VAR_6 = VAR_5->seek(VAR_5->opaque, -1, VAR_3)) < 0)
            return VAR_6;
        VAR_6++;
        VAR_5->seek(VAR_5->opaque, VAR_5->pos, VAR_4);
    }
    return VAR_6;
}
