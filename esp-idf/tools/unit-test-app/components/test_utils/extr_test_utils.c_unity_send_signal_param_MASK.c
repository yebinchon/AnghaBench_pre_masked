
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,...) ;

void FUNC_1(const char* VAR_0, const char *VAR_1)
{
    if (VAR_1 == ((void*)0)) {
        FUNC_0("Send signal: [%s]!\n", VAR_0);
    } else {
        FUNC_0("Send signal: [%s][%s]!\n", VAR_0, VAR_1);
    }
}
