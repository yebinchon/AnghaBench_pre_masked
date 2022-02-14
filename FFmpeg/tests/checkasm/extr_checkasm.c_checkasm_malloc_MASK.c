
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int funcs; } ;


 void* FUNC_0 (int,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void *FUNC_4(size_t VAR_2)
{
    void *VAR_3 = FUNC_0(1, VAR_2);
    if (!VAR_3) {
        FUNC_3(VAR_1, "checkasm: malloc failed\n");
        FUNC_1(VAR_0.funcs);
        FUNC_2(1);
    }
    return VAR_3;
}
