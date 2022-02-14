
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int AVPacket ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (int) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *,int ,int *,int) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*,char*) ;
 int FUNC_7 (int *,int const*,int) ;
 int VAR_2 ;
 int FUNC_8 (int const*) ;

__attribute__((used)) static int FUNC_9(AVPacket* VAR_3)
{
    const uint8_t *VAR_4 = ((void*)0);
    int VAR_5 = 0, VAR_6;
    uint8_t *VAR_7 = ((void*)0);



    VAR_4 = FUNC_4(VAR_0);


    VAR_6 = FUNC_8(VAR_4);

    if(!(VAR_7 = FUNC_2(VAR_6))){
        VAR_5 = FUNC_0(VAR_1);
        FUNC_6(VAR_2, "Error occurred: %s\n", FUNC_1(VAR_5));
        FUNC_5(1);
    }

    FUNC_7(VAR_7, VAR_4, VAR_6);


    VAR_5 = FUNC_3(VAR_3, VAR_0,
                                        VAR_7, VAR_6);
    if(VAR_5 < 0){
        FUNC_6(VAR_2,
                "Error occurred in av_packet_add_side_data: %s\n",
                FUNC_1(VAR_5));
    }

    return VAR_5;
}
