
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct AVTWOFISH {int dummy; } ;


 struct AVTWOFISH* FUNC_0 () ;
 int FUNC_1 (struct AVTWOFISH*,int *,int const*,unsigned int,int *,int ) ;
 int FUNC_2 (struct AVTWOFISH*,int ,int) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(uint8_t *VAR_1,
                              const uint8_t *VAR_2, unsigned VAR_3)
{
    static struct AVTWOFISH *VAR_4;
    if (!VAR_4 && !(VAR_4 = FUNC_0()))
        FUNC_3("out of memory");
    FUNC_2(VAR_4, VAR_0, 128);
    FUNC_1(VAR_4, VAR_1, VAR_2, VAR_3 >> 4, ((void*)0), 0);
}
