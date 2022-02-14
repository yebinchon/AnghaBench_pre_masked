
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (int ) ;
 int FUNC_1 (double) ;

__attribute__((used)) static
void FUNC_2(int VAR_0,int * VAR_1)
{
    int VAR_2=4;
    double VAR_3;
    VAR_3 = FUNC_0( FUNC_1((double)VAR_0) );


    do {
        while (VAR_0 % VAR_2) {
            switch (VAR_2) {
                case 4: VAR_2 = 2; break;
                case 2: VAR_2 = 3; break;
                default: VAR_2 += 2; break;
            }
            if (VAR_2 > VAR_3)
                VAR_2 = VAR_0;
        }
        VAR_0 /= VAR_2;
        *VAR_1++ = VAR_2;
        *VAR_1++ = VAR_0;
    } while (VAR_0 > 1);
}
