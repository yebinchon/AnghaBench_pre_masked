
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 size_t FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (void*,void const*,size_t) ;

__attribute__((used)) static size_t FUNC_3(void* VAR_2, size_t VAR_3,
                          const void* VAR_4, size_t VAR_5)
{
    FUNC_0(5, "ZSTD_copyRawBlock");
    if (VAR_2 == ((void*)0)) {
        if (VAR_5 == 0) return 0;
        return FUNC_1(VAR_0);
    }
    if (VAR_5 > VAR_3) return FUNC_1(VAR_1);
    FUNC_2(VAR_2, VAR_4, VAR_5);
    return VAR_5;
}
