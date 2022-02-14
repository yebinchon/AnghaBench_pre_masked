
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_14__ {scalar_t__ codec_id; scalar_t__ extradata; scalar_t__ extradata_size; } ;
struct TYPE_13__ {int nb_streams; TYPE_3__** streams; } ;
struct TYPE_12__ {TYPE_9__* codecpar; } ;
struct TYPE_11__ {int size; } ;
struct TYPE_10__ {TYPE_8__* fc; } ;
typedef TYPE_1__ MOVContext ;
typedef TYPE_2__ MOVAtom ;
typedef TYPE_3__ AVStream ;
typedef int AVIOContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;
 int VAR_7 ;
 int FUNC_3 (float,char,char,char) ;
 scalar_t__ FUNC_4 (char,char,char,char) ;
 int FUNC_5 (scalar_t__*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,scalar_t__,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (TYPE_8__*,TYPE_9__*,int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (TYPE_1__*,int *,TYPE_2__) ;

__attribute__((used)) static int FUNC_13(MOVContext *VAR_8, AVIOContext *VAR_9, MOVAtom VAR_10)
{
    AVStream *VAR_11;
    int VAR_12;

    if (VAR_8->fc->nb_streams < 1)
        return 0;
    VAR_11 = VAR_8->fc->streams[VAR_8->fc->nb_streams-1];

    if ((uint64_t)VAR_10.size > (1<<30))
        return VAR_1;

    if (VAR_11->codecpar->codec_id == VAR_3 ||
        VAR_11->codecpar->codec_id == VAR_4 ||
        VAR_11->codecpar->codec_id == VAR_5) {

        FUNC_5(&VAR_11->codecpar->extradata);
        VAR_12 = FUNC_10(VAR_8->fc, VAR_11->codecpar, VAR_9, VAR_10.size);
        if (VAR_12 < 0)
            return VAR_12;
    } else if (VAR_10.size > 8) {
        if (VAR_11->codecpar->codec_id == VAR_2 && VAR_10.size >= 24) {
            uint64_t VAR_13;
            VAR_12 = FUNC_11(VAR_9, 8);
            if (VAR_12 < 0)
                return VAR_12;
            VAR_13 = FUNC_7(VAR_9);
            VAR_10.size -= 8;
            if ( (VAR_13 & 0xFFFFFFFF) == FUNC_3('f','r','m','a')
                && VAR_13 >> 32 <= VAR_10.size
                && VAR_13 >> 32 >= 8) {
                FUNC_9(VAR_9, -8);
                VAR_10.size += 8;
            } else if (!VAR_11->codecpar->extradata_size) {

                VAR_11->codecpar->extradata = FUNC_6(36 + VAR_6);
                if (!VAR_11->codecpar->extradata)
                    return FUNC_0(VAR_7);
                VAR_11->codecpar->extradata_size = 36;
                FUNC_1(VAR_11->codecpar->extradata , 36);
                FUNC_1(VAR_11->codecpar->extradata + 4, FUNC_4('a','l','a','c'));
                FUNC_2(VAR_11->codecpar->extradata + 12, VAR_13);
                FUNC_8(VAR_9, VAR_11->codecpar->extradata + 20, 16);
                FUNC_9(VAR_9, VAR_10.size - 24);
                return 0;
            }
        }
        if ((VAR_12 = FUNC_12(VAR_8, VAR_9, VAR_10)) < 0)
            return VAR_12;
    } else
        FUNC_9(VAR_9, VAR_10.size);
    return 0;
}
