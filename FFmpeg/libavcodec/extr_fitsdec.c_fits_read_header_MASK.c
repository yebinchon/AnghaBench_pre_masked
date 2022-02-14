
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int naxis; int* naxisn; int bitpix; int data_min; int bzero; int bscale; int data_max; scalar_t__ rgb; int data_max_found; int data_min_found; scalar_t__ blank_found; } ;
typedef TYPE_1__ FITSHeader ;
typedef int AVDictionary ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,char*,...) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *,TYPE_1__*,int const*,int ***) ;
 int FUNC_4 (int const*,TYPE_1__*,int const*) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_5, const uint8_t **VAR_6, FITSHeader *VAR_7,
                            const uint8_t *VAR_8, AVDictionary **VAR_9)
{
    const uint8_t *VAR_10 = *VAR_6;
    int VAR_11, VAR_12, VAR_13, VAR_14;
    size_t VAR_15;

    VAR_11 = 1;
    FUNC_2(VAR_7, VAR_4);
    do {
        if (VAR_8 - VAR_10 < 80)
            return VAR_0;
        VAR_14 = FUNC_3(VAR_5, VAR_7, VAR_10, &VAR_9);
        VAR_10 += 80;
        VAR_11++;
    } while (!VAR_14);
    if (VAR_14 < 0)
        return VAR_14;

    VAR_12 = (((VAR_11 + 35) / 36) * 36 - VAR_11) * 80;
    if (VAR_8 - VAR_10 < VAR_12)
        return VAR_0;
    VAR_10 += VAR_12;

    if (VAR_7->rgb && (VAR_7->naxis != 3 || (VAR_7->naxisn[2] != 3 && VAR_7->naxisn[2] != 4))) {
        FUNC_1(VAR_5, VAR_1, "File contains RGB image but NAXIS = %d and NAXIS3 = %d\n", VAR_7->naxis, VAR_7->naxisn[2]);
        return VAR_0;
    }

    if (!VAR_7->rgb && VAR_7->naxis != 2) {
        FUNC_1(VAR_5, VAR_1, "unsupported number of dimensions, NAXIS = %d\n", VAR_7->naxis);
        return VAR_0;
    }

    if (VAR_7->blank_found && (VAR_7->bitpix == -32 || VAR_7->bitpix == -64)) {
        FUNC_1(VAR_5, VAR_2, "BLANK keyword found but BITPIX = %d\n. Ignoring BLANK", VAR_7->bitpix);
        VAR_7->blank_found = 0;
    }

    VAR_15 = FUNC_0(VAR_7->bitpix) >> 3;
    for (VAR_13 = 0; VAR_13 < VAR_7->naxis; VAR_13++) {
        if (VAR_15 == 0 || VAR_7->naxisn[VAR_13] > VAR_3 / VAR_15) {
            FUNC_1(VAR_5, VAR_1, "unsupported size of FITS image");
            return VAR_0;
        }
        VAR_15 *= VAR_7->naxisn[VAR_13];
    }

    if (VAR_8 - VAR_10 < VAR_15)
        return VAR_0;
    *VAR_6 = VAR_10;

    if (!VAR_7->rgb && (!VAR_7->data_min_found || !VAR_7->data_max_found)) {
        VAR_14 = FUNC_4(VAR_10, VAR_7, VAR_8);
        if (VAR_14 < 0) {
            FUNC_1(VAR_5, VAR_1, "invalid BITPIX, %d\n", VAR_7->bitpix);
            return VAR_14;
        }
    } else {




        VAR_7->data_min = (VAR_7->data_min - VAR_7->bzero) / VAR_7->bscale;
        VAR_7->data_max = (VAR_7->data_max - VAR_7->bzero) / VAR_7->bscale;
    }
    if (!VAR_7->rgb && VAR_7->data_min >= VAR_7->data_max) {
        if (VAR_7->data_min > VAR_7->data_max) {
            FUNC_1(VAR_5, VAR_1, "data min/max (%g %g) is invalid\n", VAR_7->data_min, VAR_7->data_max);
            return VAR_0;
        }
        FUNC_1(VAR_5, VAR_2, "data min/max indicates a blank image\n");
        VAR_7->data_max ++;
    }

    return 0;
}
