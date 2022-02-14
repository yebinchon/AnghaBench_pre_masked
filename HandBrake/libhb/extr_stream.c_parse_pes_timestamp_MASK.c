
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ int64_t ;
typedef int bitbuf_t ;


 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,int) ;

__attribute__((used)) static int64_t FUNC_2( bitbuf_t *VAR_0 )
{
    int64_t VAR_1;

    VAR_1 = ( (uint64_t) FUNC_0(VAR_0, 3) << 30 ) +
                         FUNC_1(VAR_0, 1) +
                       ( FUNC_0(VAR_0, 15) << 15 ) +
                         FUNC_1(VAR_0, 1) +
                         FUNC_0(VAR_0, 15);
    FUNC_1(VAR_0, 1);
    return VAR_1;
}
