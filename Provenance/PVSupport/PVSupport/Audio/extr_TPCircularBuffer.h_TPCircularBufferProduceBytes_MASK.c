
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int TPCircularBuffer ;


 void* FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (void*,void const*,int ) ;

__attribute__((used)) static __inline__ __attribute__((always_inline)) bool FUNC_3(TPCircularBuffer *VAR_0, const void* VAR_1, int32_t VAR_2) {
    int32_t VAR_3;
    void *VAR_4 = FUNC_0(VAR_0, &VAR_3);
    if ( VAR_3 < VAR_2 ) return 0;
    FUNC_2(VAR_4, VAR_1, VAR_2);
    FUNC_1(VAR_0, VAR_2);
    return 1;
}
