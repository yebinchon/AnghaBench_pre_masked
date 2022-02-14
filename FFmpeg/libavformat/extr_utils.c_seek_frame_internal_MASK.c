
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_15__ {TYPE_2__* iformat; TYPE_3__** streams; } ;
struct TYPE_12__ {scalar_t__ num; int den; } ;
struct TYPE_14__ {TYPE_1__ time_base; } ;
struct TYPE_13__ {int flags; int (* read_seek ) (TYPE_4__*,int,int,int) ;scalar_t__ read_timestamp; } ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int,int,int) ;
 int FUNC_4 (TYPE_4__*,int,int,int) ;
 int FUNC_5 (TYPE_4__*,int,int,int) ;
 int FUNC_6 (TYPE_4__*,int,int,int) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_5, int VAR_6,
                               int64_t VAR_7, int VAR_8)
{
    int VAR_9;
    AVStream *VAR_10;

    if (VAR_8 & VAR_3) {
        if (VAR_5->iformat->flags & VAR_2)
            return -1;
        FUNC_2(VAR_5);
        return FUNC_4(VAR_5, VAR_6, VAR_7, VAR_8);
    }

    if (VAR_6 < 0) {
        VAR_6 = FUNC_0(VAR_5);
        if (VAR_6 < 0)
            return -1;

        VAR_10 = VAR_5->streams[VAR_6];

        VAR_7 = FUNC_1(VAR_7, VAR_10->time_base.den,
                               VAR_4 * (int64_t) VAR_10->time_base.num);
    }


    if (VAR_5->iformat->read_seek) {
        FUNC_2(VAR_5);
        VAR_9 = VAR_5->iformat->read_seek(VAR_5, VAR_6, VAR_7, VAR_8);
    } else
        VAR_9 = -1;
    if (VAR_9 >= 0)
        return 0;

    if (VAR_5->iformat->read_timestamp &&
        !(VAR_5->iformat->flags & VAR_0)) {
        FUNC_2(VAR_5);
        return FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8);
    } else if (!(VAR_5->iformat->flags & VAR_1)) {
        FUNC_2(VAR_5);
        return FUNC_5(VAR_5, VAR_6, VAR_7, VAR_8);
    } else
        return -1;
}
