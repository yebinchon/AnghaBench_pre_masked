
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int xSemaphoreHandle ;
typedef int output2 ;
typedef int output ;
typedef int input ;
struct TYPE_4__ {int key_bytes; int key; } ;
typedef TYPE_1__ esp_aes_context ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (unsigned char const*,unsigned char*,int,char*) ;
 int FUNC_2 (TYPE_1__*,unsigned char*,unsigned char*) ;
 int FUNC_3 (TYPE_1__*,unsigned char const*,unsigned char*) ;
 int VAR_1 ;
 int FUNC_4 (unsigned char*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(void *VAR_2)
{
    xSemaphoreHandle *VAR_3 = (xSemaphoreHandle *) VAR_2;
    FUNC_0(VAR_0, "aes_task is started");
    esp_aes_context VAR_4 = {
            .key_bytes = 16,
            .key = {101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116}
    };
    const unsigned char VAR_5[16] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    unsigned char VAR_6[16];
    unsigned char VAR_7[16];
    while (VAR_1 == 0) {
        FUNC_4(VAR_6, 0, sizeof(VAR_6));
        FUNC_4(VAR_6, 0, sizeof(VAR_7));
        FUNC_3(&VAR_4, VAR_5, VAR_6);
        FUNC_2(&VAR_4, VAR_6, VAR_7);
        FUNC_1(VAR_5, VAR_7, sizeof(VAR_5), "AES must match");
    }
    FUNC_6(*VAR_3);
    FUNC_5(((void*)0));
}
