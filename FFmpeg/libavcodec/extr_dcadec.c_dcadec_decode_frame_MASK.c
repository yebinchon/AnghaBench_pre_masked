
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_11__ ;
typedef struct TYPE_19__ TYPE_10__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_26__ {scalar_t__ nreschsets; int nchsets; TYPE_1__* chset; } ;
struct TYPE_25__ {int err_recognition; TYPE_3__* priv_data; } ;
struct TYPE_24__ {int size; int * data; } ;
struct TYPE_20__ {int sample_rate; int filter_mode; int frame_size; } ;
struct TYPE_19__ {TYPE_2__* assets; } ;
struct TYPE_23__ {int packet; scalar_t__ core_only; TYPE_11__ core; TYPE_6__ xll; int lbr; TYPE_10__ exss; int * buffer; int buffer_size; } ;
struct TYPE_22__ {int extension_mask; } ;
struct TYPE_21__ {int freq; } ;
typedef TYPE_2__ DCAExssAsset ;
typedef TYPE_3__ DCAContext ;
typedef TYPE_4__ AVPacket ;
typedef int AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (int ,int) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (int **,int *,int) ;
 int FUNC_4 (TYPE_5__*,int ,char*) ;
 int FUNC_5 (int *,int,int *,int ) ;
 int FUNC_6 (TYPE_11__*,int) ;
 int FUNC_7 (TYPE_11__*,int *) ;
 int FUNC_8 (TYPE_11__*,int *,int) ;
 int FUNC_9 (TYPE_11__*,int *,TYPE_2__*) ;
 int FUNC_10 (TYPE_10__*,int *,int) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *,TYPE_2__*) ;
 int FUNC_13 (TYPE_6__*,int *) ;
 int FUNC_14 (TYPE_6__*,int *,TYPE_2__*) ;

__attribute__((used)) static int FUNC_15(AVCodecContext *VAR_20, void *VAR_21,
                               int *VAR_22, AVPacket *VAR_23)
{
    DCAContext *VAR_24 = VAR_20->priv_data;
    AVFrame *VAR_25 = VAR_21;
    uint8_t *VAR_26 = VAR_23->data;
    int VAR_27 = VAR_23->size;
    int VAR_28, VAR_29, VAR_30 = VAR_24->packet;
    uint32_t VAR_31;

    if (VAR_27 < VAR_19 || VAR_27 > VAR_18) {
        FUNC_4(VAR_20, VAR_2, "Invalid packet size\n");
        return VAR_0;
    }


    VAR_31 = FUNC_1(VAR_26);
    if (VAR_31 != VAR_14 && VAR_31 != VAR_15) {
        FUNC_3(&VAR_24->buffer, &VAR_24->buffer_size, VAR_27);
        if (!VAR_24->buffer)
            return FUNC_0(VAR_17);

        for (VAR_28 = 0, VAR_29 = VAR_0; VAR_28 < VAR_27 - VAR_19 + 1 && VAR_29 < 0; VAR_28++)
            VAR_29 = FUNC_5(VAR_26 + VAR_28, VAR_27 - VAR_28, VAR_24->buffer, VAR_24->buffer_size);

        if (VAR_29 < 0) {
            FUNC_4(VAR_20, VAR_2, "Not a valid DCA frame\n");
            return VAR_29;
        }

        VAR_26 = VAR_24->buffer;
        VAR_27 = VAR_29;
    }

    VAR_24->packet = 0;


    if (FUNC_1(VAR_26) == VAR_14) {
        int VAR_32;

        if ((VAR_29 = FUNC_8(&VAR_24->core, VAR_26, VAR_27)) < 0)
            return VAR_29;

        VAR_24->packet |= VAR_8;


        VAR_32 = FUNC_2(VAR_24->core.frame_size, 4);
        if (VAR_27 - 4 > VAR_32) {
            VAR_26 += VAR_32;
            VAR_27 -= VAR_32;
        }
    }

    if (!VAR_24->core_only) {
        DCAExssAsset *VAR_33 = ((void*)0);


        if (FUNC_1(VAR_26) == VAR_15) {
            if ((VAR_29 = FUNC_10(&VAR_24->exss, VAR_26, VAR_27)) < 0) {
                if (VAR_20->err_recognition & VAR_1)
                    return VAR_29;
            } else {
                VAR_24->packet |= VAR_9;
                VAR_33 = &VAR_24->exss.assets[0];
            }
        }


        if (VAR_33 && (VAR_33->extension_mask & VAR_6)) {
            if ((VAR_29 = FUNC_14(&VAR_24->xll, VAR_26, VAR_33)) < 0) {

                if (VAR_29 == FUNC_0(VAR_16)
                    && (VAR_30 & VAR_13)
                    && (VAR_24->packet & VAR_8))
                    VAR_24->packet |= VAR_13 | VAR_11;
                else if (VAR_29 == FUNC_0(VAR_17) || (VAR_20->err_recognition & VAR_1))
                    return VAR_29;
            } else {
                VAR_24->packet |= VAR_13;
            }
        }


        if (VAR_33 && (VAR_33->extension_mask & VAR_5)) {
            if ((VAR_29 = FUNC_12(&VAR_24->lbr, VAR_26, VAR_33)) < 0) {
                if (VAR_29 == FUNC_0(VAR_17) || (VAR_20->err_recognition & VAR_1))
                    return VAR_29;
            } else {
                VAR_24->packet |= VAR_10;
            }
        }


        if ((VAR_24->packet & VAR_8)
            && (VAR_29 = FUNC_9(&VAR_24->core, VAR_26, VAR_33)) < 0)
            return VAR_29;
    }


    if (VAR_24->packet & VAR_10) {
        if ((VAR_29 = FUNC_11(&VAR_24->lbr, VAR_25)) < 0)
            return VAR_29;
    } else if (VAR_24->packet & VAR_13) {
        if (VAR_24->packet & VAR_8) {
            int VAR_34 = -1;


            if (VAR_24->xll.chset[0].freq == 96000 && VAR_24->core.sample_rate == 48000)
                VAR_34 = 1;

            if ((VAR_29 = FUNC_6(&VAR_24->core, VAR_34)) < 0)
                return VAR_29;




            if (!(VAR_30 & VAR_12) && VAR_24->xll.nreschsets > 0
                && VAR_24->xll.nchsets > 1) {
                FUNC_4(VAR_20, VAR_3, "Forcing XLL recovery mode\n");
                VAR_24->packet |= VAR_11;
            }


            VAR_24->packet |= VAR_12;
        }

        if ((VAR_29 = FUNC_13(&VAR_24->xll, VAR_25)) < 0) {

            if (!(VAR_24->packet & VAR_8))
                return VAR_29;
            if (VAR_29 != VAR_0 || (VAR_20->err_recognition & VAR_1))
                return VAR_29;
            if ((VAR_29 = FUNC_7(&VAR_24->core, VAR_25)) < 0)
                return VAR_29;
        }
    } else if (VAR_24->packet & VAR_8) {
        if ((VAR_29 = FUNC_7(&VAR_24->core, VAR_25)) < 0)
            return VAR_29;
        if (VAR_24->core.filter_mode & VAR_7)
            VAR_24->packet |= VAR_12;
    } else {
        FUNC_4(VAR_20, VAR_2, "No valid DCA sub-stream found\n");
        if (VAR_24->core_only)
            FUNC_4(VAR_20, VAR_4, "Consider disabling 'core_only' option\n");
        return VAR_0;
    }

    *VAR_22 = 1;

    return VAR_23->size;
}
