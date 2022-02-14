
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ int64_t ;
struct TYPE_21__ {int flags; int version; scalar_t__ blocksize; scalar_t__ final; scalar_t__ initial; int samples; } ;
struct TYPE_18__ {scalar_t__ pos; scalar_t__ apetag_start; int multichannel; int chan; int chmask; int bpp; int rate; TYPE_6__ header; int block_parsed; int block_header; } ;
typedef TYPE_1__ WVContext ;
struct TYPE_20__ {TYPE_1__* priv_data; } ;
struct TYPE_19__ {int seekable; } ;
typedef TYPE_2__ AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_3__*,int ,char*,...) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_8 (TYPE_2__*,int) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_3__*,char*,...) ;
 int FUNC_11 (TYPE_6__*,int ) ;
 int* VAR_11 ;

__attribute__((used)) static int FUNC_12(AVFormatContext *VAR_12, AVIOContext *VAR_13)
{
    WVContext *VAR_14 = VAR_12->priv_data;
    int VAR_15;
    int VAR_16, VAR_17, VAR_18;
    uint32_t VAR_19, VAR_20;

    VAR_14->pos = FUNC_9(VAR_13);


    if (VAR_14->apetag_start && VAR_14->pos >= VAR_14->apetag_start)
        return VAR_0;

    VAR_15 = FUNC_3(VAR_13, VAR_14->block_header, VAR_9);
    if (VAR_15 != VAR_9)
        return (VAR_15 < 0) ? VAR_15 : VAR_0;

    VAR_15 = FUNC_11(&VAR_14->header, VAR_14->block_header);
    if (VAR_15 < 0) {
        FUNC_0(VAR_12, VAR_6, "Invalid block header.\n");
        return VAR_15;
    }

    if (VAR_14->header.flags & VAR_8) {
        FUNC_10(VAR_12, "WV DSD");
        return VAR_2;
    }

    if (VAR_14->header.version < 0x402 || VAR_14->header.version > 0x410) {
        FUNC_10(VAR_12, "WV version 0x%03X",
                                      VAR_14->header.version);
        return VAR_2;
    }



    if (!VAR_14->header.samples)
        return 0;

    VAR_20 = VAR_14->header.flags;
    VAR_17 = ((VAR_20 & 3) + 1) << 3;
    VAR_18 = 1 + !(VAR_20 & VAR_10);
    VAR_19 = VAR_20 & VAR_10 ? VAR_4 : VAR_5;
    VAR_16 = VAR_11[(VAR_20 >> 23) & 0xF];
    VAR_14->multichannel = !(VAR_14->header.initial && VAR_14->header.final);
    if (VAR_14->multichannel) {
        VAR_18 = VAR_14->chan;
        VAR_19 = VAR_14->chmask;
    }
    if ((VAR_16 == -1 || !VAR_18) && !VAR_14->block_parsed) {
        int64_t VAR_21 = FUNC_9(VAR_13) + VAR_14->header.blocksize;
        if (!(VAR_13->seekable & VAR_3)) {
            FUNC_0(VAR_12, VAR_6,
                   "Cannot determine additional parameters\n");
            return VAR_1;
        }
        while (FUNC_9(VAR_13) < VAR_21 && !FUNC_1(VAR_13)) {
            int VAR_22, VAR_23;
            VAR_22 = FUNC_2(VAR_13);
            VAR_23 = (VAR_22 & 0x80) ? FUNC_5(VAR_13) : FUNC_2(VAR_13);
            VAR_23 <<= 1;
            if (VAR_22 & 0x40)
                VAR_23--;
            switch (VAR_22 & 0x3F) {
            case 0xD:
                if (VAR_23 <= 1) {
                    FUNC_0(VAR_12, VAR_6,
                           "Insufficient channel information\n");
                    return VAR_1;
                }
                VAR_18 = FUNC_2(VAR_13);
                switch (VAR_23 - 2) {
                case 0:
                    VAR_19 = FUNC_2(VAR_13);
                    break;
                case 1:
                    VAR_19 = FUNC_4(VAR_13);
                    break;
                case 2:
                    VAR_19 = FUNC_5(VAR_13);
                    break;
                case 3:
                    VAR_19 = FUNC_6(VAR_13);
                    break;
                case 4:
                    FUNC_8(VAR_13, 1);
                    VAR_18 |= (FUNC_2(VAR_13) & 0xF) << 8;
                    VAR_18 += 1;
                    VAR_19 = FUNC_5(VAR_13);
                    break;
                case 5:
                    FUNC_8(VAR_13, 1);
                    VAR_18 |= (FUNC_2(VAR_13) & 0xF) << 8;
                    VAR_18 += 1;
                    VAR_19 = FUNC_6(VAR_13);
                    break;
                default:
                    FUNC_0(VAR_12, VAR_6,
                           "Invalid channel info size %d\n", VAR_23);
                    return VAR_1;
                }
                break;
            case 0x27:
                VAR_16 = FUNC_5(VAR_13);
                break;
            default:
                FUNC_8(VAR_13, VAR_23);
            }
            if (VAR_22 & 0x40)
                FUNC_8(VAR_13, 1);
        }
        if (VAR_16 == -1) {
            FUNC_0(VAR_12, VAR_6,
                   "Cannot determine custom sampling rate\n");
            return VAR_1;
        }
        FUNC_7(VAR_13, VAR_21 - VAR_14->header.blocksize, VAR_7);
    }
    if (!VAR_14->bpp)
        VAR_14->bpp = VAR_17;
    if (!VAR_14->chan)
        VAR_14->chan = VAR_18;
    if (!VAR_14->chmask)
        VAR_14->chmask = VAR_19;
    if (!VAR_14->rate)
        VAR_14->rate = VAR_16;

    if (VAR_20 && VAR_17 != VAR_14->bpp) {
        FUNC_0(VAR_12, VAR_6,
               "Bits per sample differ, this block: %i, header block: %i\n",
               VAR_17, VAR_14->bpp);
        return VAR_1;
    }
    if (VAR_20 && !VAR_14->multichannel && VAR_18 != VAR_14->chan) {
        FUNC_0(VAR_12, VAR_6,
               "Channels differ, this block: %i, header block: %i\n",
               VAR_18, VAR_14->chan);
        return VAR_1;
    }
    if (VAR_20 && VAR_16 != -1 && VAR_16 != VAR_14->rate) {
        FUNC_0(VAR_12, VAR_6,
               "Sampling rate differ, this block: %i, header block: %i\n",
               VAR_16, VAR_14->rate);
        return VAR_1;
    }
    return 0;
}
