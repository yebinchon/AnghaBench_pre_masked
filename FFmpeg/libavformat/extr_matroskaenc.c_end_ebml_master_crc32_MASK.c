
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int crc ;
struct TYPE_3__ {scalar_t__ write_crc; } ;
typedef TYPE_1__ MatroskaMuxContext ;
typedef int AVIOContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int,int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int **) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,int ,int *,int) ;
 int FUNC_7 (int *,int,int ) ;

__attribute__((used)) static void FUNC_8(AVIOContext *VAR_3, AVIOContext **VAR_4, MatroskaMuxContext *VAR_5)
{
    uint8_t *VAR_6, VAR_7[4];
    int VAR_8, VAR_9 = 0;

    VAR_8 = FUNC_4(*VAR_4, &VAR_6);
    FUNC_7(VAR_3, VAR_8, 0);
    if (VAR_5->write_crc) {
        VAR_9 = 6;
        FUNC_0(VAR_7, FUNC_1(FUNC_2(VAR_0), VAR_2, VAR_6 + VAR_9, VAR_8 - VAR_9) ^ VAR_2);
        FUNC_6(VAR_3, VAR_1, VAR_7, sizeof(VAR_7));
    }
    FUNC_5(VAR_3, VAR_6 + VAR_9, VAR_8 - VAR_9);

    FUNC_3(VAR_6);
    *VAR_4 = ((void*)0);
}
