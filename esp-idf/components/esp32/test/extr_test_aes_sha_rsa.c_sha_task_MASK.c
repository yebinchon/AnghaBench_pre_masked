
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xSemaphoreHandle ;
typedef int output ;
typedef int input ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned char*,unsigned char*,int,char*) ;
 int FUNC_2 (int ,unsigned char const*,int,unsigned char*) ;
 int VAR_2 ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;
 int FUNC_4 (unsigned char*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(void *VAR_3)
{
    xSemaphoreHandle *VAR_4 = (xSemaphoreHandle *) VAR_3;
    FUNC_0(VAR_1, "sha_task is started");
    const char *VAR_5 = "Space!#$%&()*+,-.0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[]^_abcdefghijklmnopqrstuvwxyz~DEL0123456789";
    unsigned char VAR_6[64];
    unsigned char VAR_7[64];
    FUNC_2(VAR_0, (const unsigned char *)VAR_5, sizeof(VAR_5), VAR_6);
    FUNC_3(VAR_7, VAR_6, sizeof(VAR_6));
    while (VAR_2 == 0) {
        FUNC_4(VAR_6, 0, sizeof(VAR_6));
        FUNC_2(VAR_0, (const unsigned char *)VAR_5, sizeof(VAR_5), VAR_6);
        FUNC_1(VAR_6, VAR_7, sizeof(VAR_6), "SHA256 must match");
    }
    FUNC_6(*VAR_4);
    FUNC_5(((void*)0));
}
