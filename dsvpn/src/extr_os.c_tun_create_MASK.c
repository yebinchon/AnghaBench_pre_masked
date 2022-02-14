
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {int ifr_flags; char* ifr_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int,int ,struct ifreq*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ,char*,char*) ;
 int VAR_6 ;

int FUNC_5(char VAR_7[VAR_2], const char *VAR_8)
{
    struct ifreq VAR_9;
    int VAR_10;
    int VAR_11;

    VAR_10 = FUNC_3("/dev/net/tun", VAR_3);
    if (VAR_10 == -1) {
        FUNC_1(VAR_6, "tun module not present. See https://sk.tl/2RdReigK\n");
        return -1;
    }
    VAR_9.ifr_flags = VAR_1 | VAR_0;
    FUNC_4(VAR_9.ifr_name, VAR_2, "%s", VAR_8 == ((void*)0) ? "" : VAR_8);
    if (FUNC_2(VAR_10, VAR_4, &VAR_9) != 0) {
        VAR_11 = VAR_5;
        (void) FUNC_0(VAR_10);
        VAR_5 = VAR_11;
        return -1;
    }
    FUNC_4(VAR_7, VAR_2, "%s", VAR_9.ifr_name);

    return VAR_10;
}
