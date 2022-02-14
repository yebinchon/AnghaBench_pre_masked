
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int png_time ;
struct TYPE_8__ {char* key; int text; void* compression; } ;
typedef TYPE_1__ png_text ;
typedef scalar_t__ png_structp ;
typedef scalar_t__ png_infop ;
struct TYPE_9__ {int blue; int green; int red; } ;
typedef TYPE_2__ png_color_16 ;
struct TYPE_10__ {int pnmtype; double gamma; int have_text; scalar_t__ info_ptr; scalar_t__ png_ptr; int url; int email; int copyright; int desc; int author; int title; int modtime; scalar_t__ have_time; int bg_blue; int bg_green; int bg_red; scalar_t__ have_bg; int sample_depth; int height; int width; scalar_t__ interlaced; int outfile; int jmpbuf; } ;
typedef TYPE_3__ mainprog_info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,TYPE_3__*,int ,int *) ;
 int FUNC_3 (scalar_t__*,scalar_t__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__,scalar_t__,int ,int ,int ,int,int,int ,int ) ;
 int FUNC_7 (scalar_t__,scalar_t__,TYPE_2__*) ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (scalar_t__,scalar_t__,double) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__,scalar_t__,int *) ;
 int FUNC_12 (scalar_t__,scalar_t__,TYPE_1__*,int) ;
 int FUNC_13 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_14 (int ) ;
 int VAR_15 ;

int FUNC_15(mainprog_info *VAR_16)
{
    png_structp VAR_17;
    png_infop VAR_18;
    int VAR_19, VAR_20;




    VAR_17 = FUNC_2(FUNC_4(((void*)0)), VAR_16,
      VAR_15, ((void*)0));
    if (!VAR_17)
        return 4;

    VAR_18 = FUNC_1(VAR_17);
    if (!VAR_18) {
        FUNC_3(&VAR_17, ((void*)0));
        return 4;
    }
    if (FUNC_14(VAR_16->jmpbuf)) {
        FUNC_3(&VAR_17, &VAR_18);
        return 2;
    }




    FUNC_5(VAR_17, VAR_16->outfile);
    FUNC_8(VAR_17, VAR_14);
    if (VAR_16->pnmtype == 5)
        VAR_19 = VAR_0;
    else if (VAR_16->pnmtype == 6)
        VAR_19 = VAR_1;
    else if (VAR_16->pnmtype == 8)
        VAR_19 = VAR_2;
    else {
        FUNC_3(&VAR_17, &VAR_18);
        return 11;
    }

    VAR_20 = VAR_16->interlaced? VAR_5 :
                                               VAR_6;

    FUNC_6(VAR_17, VAR_18, VAR_16->width, VAR_16->height,
      VAR_16->sample_depth, VAR_19, VAR_20,
      VAR_3, VAR_4);

    if (VAR_16->gamma > 0.0)
        FUNC_9(VAR_17, VAR_18, VAR_16->gamma);

    if (VAR_16->have_bg) {
        png_color_16 VAR_21;

        VAR_21.red = VAR_16->bg_red;
        VAR_21.green = VAR_16->bg_green;
        VAR_21.blue = VAR_16->bg_blue;
        FUNC_7(VAR_17, VAR_18, &VAR_21);
    }

    if (VAR_16->have_time) {
        png_time VAR_22;

        FUNC_0(&VAR_22, VAR_16->modtime);
        FUNC_11(VAR_17, VAR_18, &VAR_22);
    }

    if (VAR_16->have_text) {
        png_text VAR_23[6];
        int VAR_24 = 0;

        if (VAR_16->have_text & VAR_12) {
            VAR_23[VAR_24].compression = VAR_7;
            VAR_23[VAR_24].key = "Title";
            VAR_23[VAR_24].text = VAR_16->title;
            ++VAR_24;
        }
        if (VAR_16->have_text & VAR_8) {
            VAR_23[VAR_24].compression = VAR_7;
            VAR_23[VAR_24].key = "Author";
            VAR_23[VAR_24].text = VAR_16->author;
            ++VAR_24;
        }
        if (VAR_16->have_text & VAR_10) {
            VAR_23[VAR_24].compression = VAR_7;
            VAR_23[VAR_24].key = "Description";
            VAR_23[VAR_24].text = VAR_16->desc;
            ++VAR_24;
        }
        if (VAR_16->have_text & VAR_9) {
            VAR_23[VAR_24].compression = VAR_7;
            VAR_23[VAR_24].key = "Copyright";
            VAR_23[VAR_24].text = VAR_16->copyright;
            ++VAR_24;
        }
        if (VAR_16->have_text & VAR_11) {
            VAR_23[VAR_24].compression = VAR_7;
            VAR_23[VAR_24].key = "E-mail";
            VAR_23[VAR_24].text = VAR_16->email;
            ++VAR_24;
        }
        if (VAR_16->have_text & VAR_13) {
            VAR_23[VAR_24].compression = VAR_7;
            VAR_23[VAR_24].key = "URL";
            VAR_23[VAR_24].text = VAR_16->url;
            ++VAR_24;
        }
        FUNC_12(VAR_17, VAR_18, VAR_23, VAR_24);
    }




    FUNC_13(VAR_17, VAR_18);
    FUNC_10(VAR_17);





    VAR_16->png_ptr = VAR_17;
    VAR_16->info_ptr = VAR_18;




    return 0;
}
