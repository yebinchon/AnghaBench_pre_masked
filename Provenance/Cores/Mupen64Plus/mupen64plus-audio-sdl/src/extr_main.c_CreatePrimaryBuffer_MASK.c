
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,unsigned int) ;
 long long VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned char*) ;
 scalar_t__ FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned char*,unsigned char*,unsigned int) ;
 int FUNC_6 (unsigned char*,int ,unsigned int) ;
 unsigned char* VAR_5 ;
 unsigned int VAR_6 ;
 long long VAR_7 ;

__attribute__((used)) static void FUNC_7(void)
{
    unsigned int VAR_8 = (unsigned int) ((long long) VAR_4 * VAR_0 * VAR_7 /
                                                   (VAR_3 * 100)) * VAR_2;
    if (VAR_5 == ((void*)0))
    {
        FUNC_0(VAR_1, "Allocating memory for audio buffer: %i bytes.", VAR_8);
        VAR_5 = (unsigned char*) FUNC_4(VAR_8);
        FUNC_6(VAR_5, 0, VAR_8);
        VAR_6 = VAR_8;
    }
    else if (VAR_8 > VAR_6)
    {
        unsigned char *VAR_9 = (unsigned char*) FUNC_4(VAR_8);
        unsigned char *VAR_10 = VAR_5;
        FUNC_1();
        FUNC_5(VAR_9, VAR_10, VAR_6);
        FUNC_6(VAR_9 + VAR_6, 0, VAR_8 - VAR_6);
        VAR_5 = VAR_9;
        VAR_6 = VAR_8;
        FUNC_2();
        FUNC_3(VAR_10);
    }
}
