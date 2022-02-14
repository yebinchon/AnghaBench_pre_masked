
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int flv_size; int duration; int * flv_data; } ;
typedef TYPE_1__ RTMPContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int **) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int **,int) ;
 int FUNC_5 (int **,int) ;
 int FUNC_6 (int **,int) ;
 int FUNC_7 (int **,int ) ;
 int FUNC_8 (int **,char*,int) ;
 int FUNC_9 (int **,int ) ;
 int FUNC_10 (int *,int *,int) ;

__attribute__((used)) static int FUNC_11(RTMPContext *VAR_7)
{




    uint8_t* VAR_8;

    uint8_t* VAR_9 = VAR_7->flv_data;

    if (!(VAR_7->flv_data = FUNC_3(VAR_7->flv_size + 55))) {
        VAR_7->flv_data = VAR_9;
        return FUNC_0(VAR_4);
    }


    FUNC_10(VAR_7->flv_data, VAR_9, 13);

    FUNC_10(VAR_7->flv_data + 13 + 55, VAR_9 + 13, VAR_7->flv_size - 13);

    VAR_7->flv_size += 55;

    FUNC_2(&VAR_9);

    VAR_8 = VAR_7->flv_data + 13;
    FUNC_9(&VAR_8, VAR_5);
    FUNC_5(&VAR_8, 40);
    FUNC_5(&VAR_8, 0);
    FUNC_6(&VAR_8, 0);


    FUNC_9(&VAR_8, VAR_2);

    FUNC_4(&VAR_8, 10);
    FUNC_8(&VAR_8, "onMetaData", 10);


    FUNC_9(&VAR_8, VAR_0);
    FUNC_6(&VAR_8, 1);


    FUNC_4(&VAR_8, 8);
    FUNC_8(&VAR_8, "duration", 8);
    FUNC_9(&VAR_8, VAR_1);
    FUNC_7(&VAR_8, FUNC_1(VAR_7->duration));


    FUNC_4(&VAR_8, 0);
    FUNC_9(&VAR_8, VAR_3);
    FUNC_6(&VAR_8, 40 + VAR_6);

    return 0;
}
