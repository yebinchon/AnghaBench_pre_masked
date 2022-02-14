
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int8_t ;
struct TYPE_16__ {int fontID; int font; } ;
struct TYPE_15__ {char* font; void* fontID; } ;
struct TYPE_14__ {int extradata_size; int * extradata; } ;
struct TYPE_11__ {int bold; int italic; int underline; int font; void* color; int fontsize; void* back_color; int alignment; } ;
struct TYPE_13__ {int ftab_entries; TYPE_9__** ftab; TYPE_1__ d; TYPE_8__* ftab_temp; scalar_t__ count_f; } ;
struct TYPE_12__ {int style_flag; } ;
typedef TYPE_2__ StyleBox ;
typedef TYPE_3__ MovTextContext ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int *) ;
 void* FUNC_2 (int *) ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (TYPE_9__***,scalar_t__*,TYPE_8__*) ;
 char* FUNC_4 (int) ;
 TYPE_8__* FUNC_5 (int) ;
 int FUNC_6 (char*,int *,int) ;
 int FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_14, MovTextContext *VAR_15)
{
    uint8_t *VAR_16 = VAR_14->extradata;
    int VAR_17, VAR_18, VAR_19;
    int8_t VAR_20, VAR_21;
    int VAR_22;
    StyleBox VAR_23;

    VAR_15->count_f = 0;
    VAR_15->ftab_entries = 0;
    VAR_18 = VAR_3;
    if (VAR_14->extradata_size < VAR_18)
        return -1;


    VAR_16 += 4;

    VAR_21 = *VAR_16++;
    VAR_20 = *VAR_16++;
    if (VAR_21 == 0) {
        if (VAR_20 == 0)
            VAR_15->d.alignment = VAR_12;
        if (VAR_20 == 1)
            VAR_15->d.alignment = VAR_6;
        if (VAR_20 == -1)
            VAR_15->d.alignment = VAR_1;
    }
    if (VAR_21 == 1) {
        if (VAR_20 == 0)
            VAR_15->d.alignment = VAR_11;
        if (VAR_20 == 1)
            VAR_15->d.alignment = VAR_5;
        if (VAR_20 == -1)
            VAR_15->d.alignment = VAR_0;
    }
    if (VAR_21 == -1) {
        if (VAR_20 == 0)
            VAR_15->d.alignment = VAR_13;
        if (VAR_20 == 1)
            VAR_15->d.alignment = VAR_7;
        if (VAR_20 == -1)
            VAR_15->d.alignment = VAR_2;
    }

    VAR_15->d.back_color = FUNC_2(VAR_16);
    VAR_16 += 4;

    VAR_16 += 8;

    VAR_16 += 4;

    VAR_22 = FUNC_1(VAR_16);
    VAR_16 += 2;

    VAR_23.style_flag = *VAR_16++;
    VAR_15->d.bold = VAR_23.style_flag & VAR_8;
    VAR_15->d.italic = VAR_23.style_flag & VAR_9;
    VAR_15->d.underline = VAR_23.style_flag & VAR_10;

    VAR_15->d.fontsize = *VAR_16++;

    VAR_15->d.color = FUNC_2(VAR_16);
    VAR_16 += 4;


    VAR_16 += 4;

    VAR_16 += 4;

    VAR_15->ftab_entries = FUNC_1(VAR_16);
    VAR_16 += 2;

    for (VAR_17 = 0; VAR_17 < VAR_15->ftab_entries; VAR_17++) {

        VAR_18 += 3;
        if (VAR_14->extradata_size < VAR_18) {
            FUNC_7(VAR_15);
            VAR_15->ftab_entries = 0;
            return -1;
        }
        VAR_15->ftab_temp = FUNC_5(sizeof(*VAR_15->ftab_temp));
        if (!VAR_15->ftab_temp) {
            FUNC_7(VAR_15);
            return FUNC_0(VAR_4);
        }
        VAR_15->ftab_temp->fontID = FUNC_1(VAR_16);
        VAR_16 += 2;
        VAR_19 = *VAR_16++;

        VAR_18 = VAR_18 + VAR_19;
        if (VAR_14->extradata_size < VAR_18) {
            FUNC_7(VAR_15);
            VAR_15->ftab_entries = 0;
            return -1;
        }
        VAR_15->ftab_temp->font = FUNC_4(VAR_19 + 1);
        if (!VAR_15->ftab_temp->font) {
            FUNC_7(VAR_15);
            return FUNC_0(VAR_4);
        }
        FUNC_6(VAR_15->ftab_temp->font, VAR_16, VAR_19);
        VAR_15->ftab_temp->font[VAR_19] = '\0';
        FUNC_3(&VAR_15->ftab, &VAR_15->count_f, VAR_15->ftab_temp);
        if (!VAR_15->ftab) {
            FUNC_7(VAR_15);
            return FUNC_0(VAR_4);
        }
        VAR_15->ftab_temp = ((void*)0);
        VAR_16 = VAR_16 + VAR_19;
    }
    for (VAR_17 = 0; VAR_17 < VAR_15->ftab_entries; VAR_17++) {
        if (VAR_22 == VAR_15->ftab[VAR_17]->fontID)
            VAR_15->d.font = VAR_15->ftab[VAR_17]->font;
    }
    return 0;
}
