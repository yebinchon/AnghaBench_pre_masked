
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0( const void *VAR_0, const void *VAR_1, size_t VAR_2 )
{
    size_t VAR_3;
    const unsigned char *VAR_4 = (const unsigned char *) VAR_0;
    const unsigned char *VAR_5 = (const unsigned char *) VAR_1;
    unsigned char VAR_6 = 0;

    for( VAR_3 = 0; VAR_3 < VAR_2; VAR_3++ )
        VAR_6 |= VAR_4[VAR_3] ^ VAR_5[VAR_3];

    return( VAR_6 );
}
