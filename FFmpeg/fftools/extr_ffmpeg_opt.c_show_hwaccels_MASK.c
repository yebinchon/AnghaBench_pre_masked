
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum AVHWDeviceType { ____Placeholder_AVHWDeviceType } AVHWDeviceType ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int FUNC_3(void *VAR_2, const char *VAR_3, const char *VAR_4)
{
    enum AVHWDeviceType VAR_5 = VAR_0;
    int VAR_6;

    FUNC_2("Hardware acceleration methods:\n");
    while ((VAR_5 = FUNC_1(VAR_5)) !=
           VAR_0)
        FUNC_2("%s\n", FUNC_0(VAR_5));
    for (VAR_6 = 0; VAR_1[VAR_6].name; VAR_6++)
        FUNC_2("%s\n", VAR_1[VAR_6].name);
    FUNC_2("\n");
    return 0;
}
