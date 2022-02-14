
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Writer ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int const** VAR_2 ;

__attribute__((used)) static int FUNC_1(const Writer *VAR_3)
{
    static int VAR_4 = 0;

    if (VAR_4 == VAR_1)
        return FUNC_0(VAR_0);

    VAR_2[VAR_4++] = VAR_3;
    return 0;
}
