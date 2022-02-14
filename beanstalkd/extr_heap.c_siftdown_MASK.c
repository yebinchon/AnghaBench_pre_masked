
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Heap ;


 scalar_t__ FUNC_0 (int *,size_t,size_t) ;
 int FUNC_1 (int *,size_t,size_t) ;

__attribute__((used)) static void
FUNC_2(Heap *VAR_0, size_t VAR_1)
{
    for (;;) {
        size_t VAR_2 = (VAR_1-1) / 2;

        if (VAR_1 == 0 || FUNC_0(VAR_0, VAR_2, VAR_1)) {
            return;
        }

        FUNC_1(VAR_0, VAR_1, VAR_2);
        VAR_1 = VAR_2;
    }
}
