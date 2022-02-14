
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ int64_t ;
struct TYPE_6__ {scalar_t__ is_streamed; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_7__ {scalar_t__ off; scalar_t__ filesize; scalar_t__ end_off; TYPE_1__* hd; int * buffer; int * buf_end; int * buf_ptr; } ;
typedef TYPE_2__ HTTPContext ;
typedef int AVDictionary ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int **) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int **) ;
 int FUNC_4 (int *,int *,int) ;

__attribute__((used)) static int64_t FUNC_5(URLContext *VAR_8, int64_t VAR_9, int VAR_10, int VAR_11)
{
    HTTPContext *VAR_12 = VAR_8->priv_data;
    URLContext *VAR_13 = VAR_12->hd;
    uint64_t VAR_14 = VAR_12->off;
    uint8_t VAR_15[VAR_1];
    int VAR_16, VAR_17;
    AVDictionary *VAR_18 = ((void*)0);

    if (VAR_10 == VAR_0)
        return VAR_12->filesize;
    else if (!VAR_11 &&
             ((VAR_10 == VAR_4 && VAR_9 == 0) ||
              (VAR_10 == VAR_6 && VAR_9 == VAR_12->off)))
        return VAR_12->off;
    else if ((VAR_12->filesize == VAR_7 && VAR_10 == VAR_5))
        return FUNC_0(VAR_3);

    if (VAR_10 == VAR_4)
        VAR_9 += VAR_12->off;
    else if (VAR_10 == VAR_5)
        VAR_9 += VAR_12->filesize;
    else if (VAR_10 != VAR_6)
        return FUNC_0(VAR_2);
    if (VAR_9 < 0)
        return FUNC_0(VAR_2);
    VAR_12->off = VAR_9;

    if (VAR_12->off && VAR_8->is_streamed)
        return FUNC_0(VAR_3);


    if (VAR_12->end_off || VAR_12->filesize != VAR_7) {
        uint64_t VAR_19 = VAR_12->end_off ? VAR_12->end_off : VAR_12->filesize;
        if (VAR_12->off >= VAR_19)
            return VAR_12->off;
    }


    VAR_16 = VAR_12->buf_end - VAR_12->buf_ptr;
    FUNC_4(VAR_15, VAR_12->buf_ptr, VAR_16);
    VAR_12->hd = ((void*)0);


    if ((VAR_17 = FUNC_3(VAR_8, &VAR_18)) < 0) {
        FUNC_1(&VAR_18);
        FUNC_4(VAR_12->buffer, VAR_15, VAR_16);
        VAR_12->buf_ptr = VAR_12->buffer;
        VAR_12->buf_end = VAR_12->buffer + VAR_16;
        VAR_12->hd = VAR_13;
        VAR_12->off = VAR_14;
        return VAR_17;
    }
    FUNC_1(&VAR_18);
    FUNC_2(VAR_13);
    return VAR_9;
}
