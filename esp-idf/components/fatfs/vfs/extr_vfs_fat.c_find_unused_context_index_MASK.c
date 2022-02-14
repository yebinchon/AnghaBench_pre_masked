
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static size_t FUNC_0(void)
{
    for(size_t VAR_2=0; VAR_2<VAR_0; VAR_2++) {
        if (!VAR_1[VAR_2]) {
            return VAR_2;
        }
    }
    return VAR_0;
}
