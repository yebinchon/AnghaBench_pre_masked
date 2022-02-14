
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ int64_t ;
struct TYPE_14__ {int nb_streams; scalar_t__ seek2any; TYPE_2__* iformat; TYPE_1__** streams; } ;
struct TYPE_13__ {scalar_t__ num; int den; } ;
struct TYPE_12__ {int (* read_seek2 ) (TYPE_4__*,int,scalar_t__,scalar_t__,scalar_t__,int) ;scalar_t__ read_seek; scalar_t__ read_timestamp; } ;
struct TYPE_11__ {TYPE_3__ time_base; } ;
typedef TYPE_3__ AVRational ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (scalar_t__,int ,TYPE_3__) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,scalar_t__,int) ;
 int FUNC_3 (TYPE_4__*,int,scalar_t__,int) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,int,scalar_t__,scalar_t__,scalar_t__,int) ;

int FUNC_7(AVFormatContext *VAR_8, int VAR_9, int64_t VAR_10,
                       int64_t VAR_11, int64_t VAR_12, int VAR_13)
{
    if (VAR_10 > VAR_11 || VAR_12 < VAR_11)
        return -1;
    if (VAR_9 < -1 || VAR_9 >= (int)VAR_8->nb_streams)
        return FUNC_0(VAR_7);

    if (VAR_8->seek2any>0)
        VAR_13 |= VAR_0;
    VAR_13 &= ~VAR_1;

    if (VAR_8->iformat->read_seek2) {
        int VAR_14;
        FUNC_5(VAR_8);

        if (VAR_9 == -1 && VAR_8->nb_streams == 1) {
            AVRational VAR_15 = VAR_8->streams[0]->time_base;
            VAR_11 = FUNC_1(VAR_11, VAR_6, VAR_15);
            VAR_10 = FUNC_2(VAR_10, VAR_15.den,
                                    VAR_15.num * (int64_t)VAR_5,
                                    VAR_4 | VAR_3);
            VAR_12 = FUNC_2(VAR_12, VAR_15.den,
                                    VAR_15.num * (int64_t)VAR_5,
                                    VAR_2 | VAR_3);
            VAR_9 = 0;
        }

        VAR_14 = VAR_8->iformat->read_seek2(VAR_8, VAR_9, VAR_10,
                                     VAR_11, VAR_12, VAR_13);

        if (VAR_14 >= 0)
            VAR_14 = FUNC_4(VAR_8);
        return VAR_14;
    }

    if (VAR_8->iformat->read_timestamp) {

    }



    if (VAR_8->iformat->read_seek || 1) {
        int VAR_16 = (VAR_11 - (uint64_t)VAR_10 > (uint64_t)VAR_12 - VAR_11 ? VAR_1 : 0);
        int VAR_17 = FUNC_3(VAR_8, VAR_9, VAR_11, VAR_13 | VAR_16);
        if (VAR_17<0 && VAR_11 != VAR_10 && VAR_12 != VAR_11) {
            VAR_17 = FUNC_3(VAR_8, VAR_9, VAR_16 ? VAR_12 : VAR_10, VAR_13 | VAR_16);
            if (VAR_17 >= 0)
                VAR_17 = FUNC_3(VAR_8, VAR_9, VAR_11, VAR_13 | (VAR_16^VAR_1));
        }
        return VAR_17;
    }


    return -1;
}
