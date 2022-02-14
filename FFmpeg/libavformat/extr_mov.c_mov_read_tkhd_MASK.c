
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int rotate_buf ;
typedef int const int64_t ;
typedef int int32_t ;
struct TYPE_9__ {int id; int sample_aspect_ratio; int metadata; int disposition; TYPE_2__* priv_data; } ;
struct TYPE_8__ {int const** movie_display_matrix; TYPE_1__* fc; } ;
struct TYPE_7__ {int width; int height; int* display_matrix; } ;
struct TYPE_6__ {int nb_streams; TYPE_4__** streams; } ;
typedef TYPE_2__ MOVStreamContext ;
typedef TYPE_3__ MOVContext ;
typedef int MOVAtom ;
typedef TYPE_4__ AVStream ;
typedef int AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int**) ;
 int VAR_4 ;
 int FUNC_2 (double,int ) ;
 int FUNC_3 (int *,char*,char*,int ) ;
 double FUNC_4 (int*) ;
 int FUNC_5 (int**) ;
 int* FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 double FUNC_12 (double) ;
 double FUNC_13 (int,int) ;
 int FUNC_14 (double) ;
 int FUNC_15 (char*,int,char*,double) ;

__attribute__((used)) static int FUNC_16(MOVContext *VAR_5, AVIOContext *VAR_6, MOVAtom VAR_7)
{
    int VAR_8, VAR_9, VAR_10;
    int VAR_11;
    int VAR_12;
    int VAR_13[3][3];
    int VAR_14[3][3] = { { 0 } };
    AVStream *VAR_15;
    MOVStreamContext *VAR_16;
    int VAR_17;
    int VAR_18;

    if (VAR_5->fc->nb_streams < 1)
        return 0;
    VAR_15 = VAR_5->fc->streams[VAR_5->fc->nb_streams-1];
    VAR_16 = VAR_15->priv_data;



    if (VAR_15->id != -1)
        return VAR_0;

    VAR_17 = FUNC_7(VAR_6);
    VAR_18 = FUNC_9(VAR_6);
    VAR_15->disposition |= (VAR_18 & VAR_4) ? VAR_1 : 0;

    if (VAR_17 == 1) {
        FUNC_11(VAR_6);
        FUNC_11(VAR_6);
    } else {
        FUNC_10(VAR_6);
        FUNC_10(VAR_6);
    }
    VAR_15->id = (int)FUNC_10(VAR_6);
    FUNC_10(VAR_6);


    (VAR_17 == 1) ? FUNC_11(VAR_6) : FUNC_10(VAR_6);
    FUNC_10(VAR_6);
    FUNC_10(VAR_6);

    FUNC_8(VAR_6);
    FUNC_8(VAR_6);
    FUNC_8(VAR_6);
    FUNC_8(VAR_6);





    for (VAR_8 = 0; VAR_8 < 3; VAR_8++) {
        VAR_13[VAR_8][0] = FUNC_10(VAR_6);
        VAR_13[VAR_8][1] = FUNC_10(VAR_6);
        VAR_13[VAR_8][2] = FUNC_10(VAR_6);
    }

    VAR_11 = FUNC_10(VAR_6);
    VAR_12 = FUNC_10(VAR_6);
    VAR_16->width = VAR_11 >> 16;
    VAR_16->height = VAR_12 >> 16;


    for (VAR_8 = 0; VAR_8 < 3; VAR_8++) {
        const int VAR_19[3] = { 16, 16, 30 };
        for (VAR_9 = 0; VAR_9 < 3; VAR_9++) {
            for (VAR_10 = 0; VAR_10 < 3; VAR_10++) {
                VAR_14[VAR_8][VAR_9] +=
                    ((int64_t) VAR_13[VAR_8][VAR_10] *
                     VAR_5->movie_display_matrix[VAR_10][VAR_9]) >> VAR_19[VAR_10];
            }
        }
    }


    if (!FUNC_1(VAR_14)) {
        double VAR_20;

        FUNC_5(&VAR_16->display_matrix);
        VAR_16->display_matrix = FUNC_6(sizeof(int32_t) * 9);
        if (!VAR_16->display_matrix)
            return FUNC_0(VAR_2);

        for (VAR_8 = 0; VAR_8 < 3; VAR_8++)
            for (VAR_9 = 0; VAR_9 < 3; VAR_9++)
                VAR_16->display_matrix[VAR_8 * 3 + VAR_9] = VAR_14[VAR_8][VAR_9];
    }



    if (VAR_11 && VAR_12 && VAR_16->display_matrix) {
        double VAR_21[2];

        for (VAR_8 = 0; VAR_8 < 2; VAR_8++)
            VAR_21[VAR_8] = FUNC_13(VAR_16->display_matrix[0 + VAR_8],
                                      VAR_16->display_matrix[3 + VAR_8]);

        if (VAR_21[0] > 0 && VAR_21[1] > 0 &&
            VAR_21[0] < (1<<24) && VAR_21[1] < (1<<24) &&
            FUNC_12((VAR_21[0] / VAR_21[1]) - 1.0) > 0.01)
            VAR_15->sample_aspect_ratio = FUNC_2(
                VAR_21[0] / VAR_21[1],
                VAR_3);
    }
    return 0;
}
