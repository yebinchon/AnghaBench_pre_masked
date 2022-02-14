
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbg_parser {int log; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sbg_parser*,char) ;
 int FUNC_2 (struct sbg_parser*,double*) ;
 scalar_t__ FUNC_3 (int ,double,double,int*) ;

__attribute__((used)) static int FUNC_4(struct sbg_parser *VAR_2, int *VAR_3)
{
    double VAR_4;

    if (!FUNC_1(VAR_2, '/'))
        return 0;
    if (!FUNC_2(VAR_2, &VAR_4))
        return VAR_0;
    if (FUNC_3(VAR_2->log, VAR_4, 0.01, VAR_3))
        return FUNC_0(VAR_1);
    return 1;
}
