
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t SelectedState ;


 size_t VAR_0 ;

__attribute__((used)) static __inline__ const char *
FUNC_0(SelectedState VAR_1)
{
    static const char * VAR_2[] = { "UNSELECTED", "SELECTED", "STANDBY" };

    if (VAR_1 <= VAR_0) {
 return (VAR_2[VAR_1]);
    }
    return ("<unknown>");
}
