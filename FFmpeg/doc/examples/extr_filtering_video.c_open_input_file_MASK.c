
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__** streams; } ;
struct TYPE_6__ {int codecpar; } ;
typedef int AVCodec ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ,int,int,int **,int ) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (TYPE_2__**,char const*,int *,int *) ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 size_t VAR_5 ;

__attribute__((used)) static int FUNC_8(const char *VAR_6)
{
    int VAR_7;
    AVCodec *VAR_8;

    if ((VAR_7 = FUNC_7(&VAR_4, VAR_6, ((void*)0), ((void*)0))) < 0) {
        FUNC_2(((void*)0), VAR_1, "Cannot open input file\n");
        return VAR_7;
    }

    if ((VAR_7 = FUNC_6(VAR_4, ((void*)0))) < 0) {
        FUNC_2(((void*)0), VAR_1, "Cannot find stream information\n");
        return VAR_7;
    }


    VAR_7 = FUNC_1(VAR_4, VAR_0, -1, -1, &VAR_8, 0);
    if (VAR_7 < 0) {
        FUNC_2(((void*)0), VAR_1, "Cannot find a video stream in the input file\n");
        return VAR_7;
    }
    VAR_5 = VAR_7;


    VAR_3 = FUNC_3(VAR_8);
    if (!VAR_3)
        return FUNC_0(VAR_2);
    FUNC_5(VAR_3, VAR_4->streams[VAR_5]->codecpar);


    if ((VAR_7 = FUNC_4(VAR_3, VAR_8, ((void*)0))) < 0) {
        FUNC_2(((void*)0), VAR_1, "Cannot open video decoder\n");
        return VAR_7;
    }

    return 0;
}
