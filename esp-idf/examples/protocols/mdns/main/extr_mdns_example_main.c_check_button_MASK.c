
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    static bool VAR_1 = 1;
    bool VAR_2 = FUNC_0(VAR_0);
    if (!VAR_2 && VAR_1) {
        FUNC_1("esp32");
        FUNC_2("_arduino", "_tcp");
        FUNC_2("_http", "_tcp");
        FUNC_2("_printer", "_tcp");
        FUNC_2("_ipp", "_tcp");
        FUNC_2("_afpovertcp", "_tcp");
        FUNC_2("_smb", "_tcp");
        FUNC_2("_ftp", "_tcp");
        FUNC_2("_nfs", "_tcp");
    }
    VAR_1 = VAR_2;
}
