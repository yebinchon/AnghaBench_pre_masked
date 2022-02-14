
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ZSTD_CCtx_params ;


 unsigned int FUNC_0 (unsigned int const,unsigned int) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static unsigned
FUNC_3(ZSTD_CCtx_params VAR_0, size_t VAR_1, unsigned VAR_2)
{
    FUNC_2(VAR_2>0);
    { size_t const VAR_3 = (size_t)1 << FUNC_1(VAR_0);
        size_t const VAR_4 = VAR_3 << 2;
        size_t const VAR_5 = VAR_4 * VAR_2;
        unsigned const VAR_6 = (unsigned)(VAR_1 / VAR_5) + 1;
        unsigned const VAR_7 = VAR_6 * VAR_2;
        unsigned const VAR_8 = (unsigned)(VAR_1 / VAR_3) + 1;
        unsigned const VAR_9 = FUNC_0(VAR_8, VAR_2);
        return (VAR_6>1) ? VAR_7 : VAR_9;
} }
