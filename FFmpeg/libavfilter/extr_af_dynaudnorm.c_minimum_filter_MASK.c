
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cqueue ;


 double VAR_0 ;
 double FUNC_0 (double,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static double FUNC_3(cqueue *VAR_1)
{
    double VAR_2 = VAR_0;
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < FUNC_2(VAR_1); VAR_3++) {
        VAR_2 = FUNC_0(VAR_2, FUNC_1(VAR_1, VAR_3));
    }

    return VAR_2;
}
