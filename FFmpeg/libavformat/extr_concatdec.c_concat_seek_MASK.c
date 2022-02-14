
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_8__ {TYPE_1__* priv_data; } ;
struct TYPE_7__ {scalar_t__ eof; int * cur_file; TYPE_2__* avf; } ;
typedef int ConcatFile ;
typedef TYPE_1__ ConcatContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__**) ;
 int FUNC_2 (TYPE_2__*,int,int ,int ,int ,int,TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_3, int VAR_4,
                       int64_t VAR_5, int64_t VAR_6, int64_t VAR_7, int VAR_8)
{
    ConcatContext *VAR_9 = VAR_3->priv_data;
    ConcatFile *VAR_10 = VAR_9->cur_file;
    AVFormatContext *VAR_11 = VAR_9->avf;
    int VAR_12;

    if (VAR_8 & (VAR_0 | VAR_1))
        return FUNC_0(VAR_2);
    VAR_9->avf = ((void*)0);
    if ((VAR_12 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_11)) < 0) {
        if (VAR_9->cur_file != VAR_10) {
            if (VAR_9->avf)
                FUNC_1(&VAR_9->avf);
        }
        VAR_9->avf = VAR_11;
        VAR_9->cur_file = VAR_10;
    } else {
        if (VAR_9->cur_file != VAR_10) {
            FUNC_1(&VAR_11);
        }
        VAR_9->eof = 0;
    }
    return VAR_12;
}
