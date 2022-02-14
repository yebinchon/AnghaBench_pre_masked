
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int buffer ;
struct TYPE_3__ {int errorCode; int display; } ;
struct TYPE_4__ {TYPE_1__ x11; } ;


 int FUNC_0 (int ,int ,char*,int) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (int,char*,char const*,char*) ;

void FUNC_2(int VAR_1, const char* VAR_2)
{
    char VAR_3[8192];
    FUNC_0(VAR_0.x11.display, VAR_0.x11.errorCode,
                  VAR_3, sizeof(VAR_3));

    FUNC_1(VAR_1, "%s: %s", VAR_2, VAR_3);
}
