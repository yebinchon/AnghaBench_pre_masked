
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char gchar ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;

gchar* FUNC_0(bool* VAR_4) {
    if (VAR_4[VAR_2])
        return "i386";
    else if (VAR_4[VAR_3])
        return "x86_64";
    else if (VAR_4[VAR_1])
        return "armhf";
    else if (VAR_4[VAR_0])
        return "aarch64";
    else
        return "all";
}
