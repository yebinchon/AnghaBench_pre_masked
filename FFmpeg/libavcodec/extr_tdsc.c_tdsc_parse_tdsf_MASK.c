
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int width; int height; int * data; } ;
struct TYPE_9__ {int width; int height; TYPE_1__* priv_data; } ;
struct TYPE_8__ {int width; int height; TYPE_7__* refframe; int gbc; } ;
typedef TYPE_1__ TDSCContext ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_7__*,int) ;
 int FUNC_1 (TYPE_2__*,int ,char*,int,int,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (TYPE_2__*,int,int) ;
 int FUNC_6 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_3, int VAR_4)
{
    TDSCContext *VAR_5 = VAR_3->priv_data;
    int VAR_6, VAR_7, VAR_8, VAR_9 = !VAR_5->refframe->data[0];



    if (FUNC_3(&VAR_5->gbc) != VAR_2)
        return VAR_0;


    VAR_7 = FUNC_3(&VAR_5->gbc);
    VAR_8 = -FUNC_3(&VAR_5->gbc);

    if (FUNC_2(&VAR_5->gbc) != 1 ||
        FUNC_2(&VAR_5->gbc) != 24)
        return VAR_0;

    FUNC_4(&VAR_5->gbc, 24);


    if (VAR_3->width != VAR_7 || VAR_3->height != VAR_8) {
        FUNC_1(VAR_3, VAR_1, "Size update %dx%d -> %d%d.\n",
               VAR_3->width, VAR_3->height, VAR_5->width, VAR_5->height);
        VAR_6 = FUNC_5(VAR_3, VAR_7, VAR_8);
        if (VAR_6 < 0)
            return VAR_6;
        VAR_9 = 1;
    }
    VAR_5->refframe->width = VAR_5->width = VAR_7;
    VAR_5->refframe->height = VAR_5->height = VAR_8;


    if (VAR_9) {
        VAR_6 = FUNC_0(VAR_5->refframe, 32);
        if (VAR_6 < 0)
            return VAR_6;
    }


    return FUNC_6(VAR_3, VAR_4);
}
