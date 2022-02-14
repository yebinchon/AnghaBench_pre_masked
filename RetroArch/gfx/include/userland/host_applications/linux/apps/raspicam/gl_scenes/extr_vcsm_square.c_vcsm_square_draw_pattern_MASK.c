
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_1(unsigned char *VAR_2)
{
    static unsigned VAR_3;

    unsigned char *VAR_4 = (unsigned char *) VAR_2;
    unsigned VAR_5 = VAR_1 > 32 ? 32 : VAR_1;
    int VAR_6 = 0;
    size_t VAR_7 = VAR_1 << 2;

    VAR_3 = (VAR_3 + 1) % (VAR_1 - VAR_5);
    for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
        FUNC_0(VAR_4 + (VAR_3 << 2), ~0, VAR_5 << 2);
        VAR_4 += VAR_7;
    }
}
