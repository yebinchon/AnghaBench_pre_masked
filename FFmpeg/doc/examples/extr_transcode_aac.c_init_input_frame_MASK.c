
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(AVFrame **VAR_2)
{
    if (!(*VAR_2 = FUNC_1())) {
        FUNC_2(VAR_1, "Could not allocate input frame\n");
        return FUNC_0(VAR_0);
    }
    return 0;
}
