
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int data; } ;
typedef TYPE_1__ AVPacket ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *,int ,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__**) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (char*) ;

int FUNC_9(void)
{
    AVPacket VAR_2;
    AVPacket *VAR_3 = ((void*)0);
    int VAR_4 = 0;

    if(FUNC_7(&VAR_2) < 0){
        FUNC_8("failed to initialize variables\n");
        return 1;
    }

    VAR_3 = FUNC_3(&VAR_2);

    if(!VAR_3) {
        FUNC_1(((void*)0), VAR_0,"av_packet_clone failed to clone AVPacket\n");
        return 1;
    }

    if(FUNC_0(VAR_3, 20) < 0){
        FUNC_1(((void*)0), VAR_0, "av_grow_packet failed\n");
        return 1;
    }
    if(FUNC_0(VAR_3, VAR_1) == 0){
        FUNC_8( "av_grow_packet failed to return error "
                "when \"grow_by\" parameter is too large.\n" );
        VAR_4 = 1;
    }

    if(FUNC_2(VAR_3, VAR_1) == 0){
        FUNC_8( "av_new_packet failed to return error "
                "when \"size\" parameter is too large.\n" );
        VAR_4 = 1;
    }

    if(FUNC_5(VAR_3, VAR_3->data, VAR_1) == 0){
        FUNC_8("av_packet_from_data failed to return error "
                "when \"size\" parameter is too large.\n" );
        VAR_4 = 1;
    }

    FUNC_4(&VAR_3);
    FUNC_6(&VAR_2);


    return VAR_4;
}
