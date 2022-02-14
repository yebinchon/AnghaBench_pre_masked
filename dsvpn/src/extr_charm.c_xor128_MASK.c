
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __m128i ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static inline void FUNC_3(void *VAR_0, const void *VAR_1)
{





    unsigned char * VAR_2 = (unsigned char *) VAR_0;
    const unsigned char *VAR_3 = (const unsigned char *) VAR_1;
    size_t VAR_4;

    for (VAR_4 = 0; VAR_4 < 16; VAR_4++) {
        VAR_2[VAR_4] ^= VAR_3[VAR_4];
    }

}
