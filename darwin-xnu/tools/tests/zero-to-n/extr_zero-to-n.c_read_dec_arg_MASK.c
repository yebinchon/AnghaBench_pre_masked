
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,char*) ;
 TYPE_1__* VAR_1 ;
 char* VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (char*,char**,int) ;

__attribute__((used)) static uint32_t
FUNC_2()
{
 char *VAR_4;


 uint32_t VAR_5 = (uint32_t)FUNC_1(VAR_2, &VAR_4, 10);

 if (VAR_4 == VAR_2 || *VAR_4)
  FUNC_0(VAR_0, "arg --%s requires a decimal number, found \"%s\"",
       VAR_1[VAR_3].name, VAR_2);

 return VAR_5;
}
