
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* entryData; } ;
typedef TYPE_1__ DIR_ENTRY ;


 size_t VAR_0 ;
 int FUNC_0 (char const*,TYPE_1__*) ;

int FUNC_1(const char *VAR_1) {
 DIR_ENTRY VAR_2;
 if (!FUNC_0(VAR_1,&VAR_2)) return -1;

 return VAR_2.entryData[VAR_0];
}
