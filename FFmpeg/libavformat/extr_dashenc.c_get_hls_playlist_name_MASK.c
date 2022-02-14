
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,char*,...) ;

__attribute__((used)) static void FUNC_1(char *VAR_0, int VAR_1,
                                  const char *VAR_2, int VAR_3) {
    if (VAR_2)
        FUNC_0(VAR_0, VAR_1, "%smedia_%d.m3u8", VAR_2, VAR_3);
    else
        FUNC_0(VAR_0, VAR_1, "media_%d.m3u8", VAR_3);
}
