
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int get_format; int hw_device_ctx; } ;
struct TYPE_11__ {TYPE_1__** streams; } ;
struct TYPE_10__ {int codecpar; } ;
typedef TYPE_1__ AVStream ;
typedef int AVCodec ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int ,int,int,int **,int ) ;
 TYPE_3__* FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,int *,int *) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (TYPE_2__**,char const*,int *,int *) ;
 TYPE_3__* VAR_2 ;
 int FUNC_9 (int ,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;

__attribute__((used)) static int FUNC_10(const char *VAR_8)
{
    int VAR_9;
    AVCodec *VAR_10 = ((void*)0);
    AVStream *VAR_11 = ((void*)0);

    if ((VAR_9 = FUNC_8(&VAR_5, VAR_8, ((void*)0), ((void*)0))) < 0) {
        FUNC_9(VAR_6, "Cannot open input file '%s', Error code: %s\n",
                VAR_8, FUNC_2(VAR_9));
        return VAR_9;
    }

    if ((VAR_9 = FUNC_7(VAR_5, ((void*)0))) < 0) {
        FUNC_9(VAR_6, "Cannot find input stream information. Error code: %s\n",
                FUNC_2(VAR_9));
        return VAR_9;
    }

    VAR_9 = FUNC_3(VAR_5, VAR_0, -1, -1, &VAR_10, 0);
    if (VAR_9 < 0) {
        FUNC_9(VAR_6, "Cannot find a video stream in the input file. "
                "Error code: %s\n", FUNC_2(VAR_9));
        return VAR_9;
    }
    VAR_7 = VAR_9;

    if (!(VAR_2 = FUNC_4(VAR_10)))
        return FUNC_0(VAR_1);

    VAR_11 = VAR_5->streams[VAR_7];
    if ((VAR_9 = FUNC_6(VAR_2, VAR_11->codecpar)) < 0) {
        FUNC_9(VAR_6, "avcodec_parameters_to_context error. Error code: %s\n",
                FUNC_2(VAR_9));
        return VAR_9;
    }

    VAR_2->hw_device_ctx = FUNC_1(VAR_4);
    if (!VAR_2->hw_device_ctx) {
        FUNC_9(VAR_6, "A hardware device reference create failed.\n");
        return FUNC_0(VAR_1);
    }
    VAR_2->get_format = VAR_3;

    if ((VAR_9 = FUNC_5(VAR_2, VAR_10, ((void*)0))) < 0)
        FUNC_9(VAR_6, "Failed to open codec for decoding. Error code: %s\n",
                FUNC_2(VAR_9));

    return VAR_9;
}
