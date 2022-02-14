
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,unsigned int,unsigned int) ;
 int FUNC_2 (int ,char*,char const*,unsigned int,char*) ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 (int ,int ,int ,unsigned int,unsigned int,int ,int ,int ,unsigned char*) ;
 unsigned int FUNC_5 (unsigned char**,unsigned int*,unsigned int*,char const*) ;
 char* FUNC_6 (unsigned int) ;
 int VAR_3 ;

void FUNC_7(const char *VAR_4) {
    unsigned int VAR_5;
    unsigned char *VAR_6;
    unsigned int VAR_7, VAR_8;
    VAR_5 = FUNC_5(&VAR_6, &VAR_7, &VAR_8, VAR_4);
    if (VAR_5) {
        FUNC_2(VAR_3, "load_png_texture %s failed, error %u: %s\n", VAR_4, VAR_5, FUNC_6(VAR_5));
        FUNC_0(1);
    }
    FUNC_1(VAR_6, VAR_7, VAR_8);
    FUNC_4(VAR_1, 0, VAR_0, VAR_7, VAR_8, 0, VAR_0,
        VAR_2, VAR_6);
    FUNC_3(VAR_6);
}
