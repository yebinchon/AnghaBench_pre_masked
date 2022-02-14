
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 double VAR_0 ;
 int FUNC_0 (char*,double,...) ;

__attribute__((used)) static void inline FUNC_1(uint64_t VAR_1)
{
    FUNC_0("Counter: 0x%08x%08x\n", (uint32_t) (VAR_1 >> 32),
                                    (uint32_t) (VAR_1));
    FUNC_0("Time   : %.8f s\n", (double) VAR_1 / VAR_0);
}
