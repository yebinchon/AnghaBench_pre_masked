
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_8__ {TYPE_1__* iformat; } ;
struct TYPE_7__ {int read_seek; scalar_t__ read_seek2; } ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int,int ,int ,int ,int) ;
 int FUNC_2 (TYPE_2__*,int,int ,int) ;

int FUNC_3(AVFormatContext *VAR_3, int VAR_4,
                  int64_t VAR_5, int VAR_6)
{
    int VAR_7;

    if (VAR_3->iformat->read_seek2 && !VAR_3->iformat->read_seek) {
        int64_t VAR_8 = VAR_2, VAR_9 = VAR_1;
        if ((VAR_6 & VAR_0))
            VAR_9 = VAR_5;
        else
            VAR_8 = VAR_5;
        return FUNC_1(VAR_3, VAR_4, VAR_8, VAR_5, VAR_9,
                                  VAR_6 & ~VAR_0);
    }

    VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);

    if (VAR_7 >= 0)
        VAR_7 = FUNC_0(VAR_3);

    return VAR_7;
}
