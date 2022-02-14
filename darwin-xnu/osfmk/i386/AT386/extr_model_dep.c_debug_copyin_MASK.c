
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef size_t uint64_t ;
typedef size_t uint32_t ;
typedef scalar_t__ ppnum_t ;
typedef int pmap_t ;
typedef int boolean_t ;


 size_t FUNC_0 (size_t,size_t) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (size_t,size_t,size_t) ;
 size_t FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,size_t) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 size_t FUNC_5 (scalar_t__) ;

__attribute__((used)) static boolean_t
FUNC_6(pmap_t VAR_2, uint64_t VAR_3, void *VAR_4, size_t VAR_5)
{
        size_t VAR_6 = VAR_5;
        char *VAR_7 = VAR_4;

        while (VAR_6) {
                ppnum_t VAR_8 = FUNC_3(VAR_2, VAR_3);
                uint64_t VAR_9 = FUNC_5(VAR_8) | (VAR_3 & VAR_0);
                uint64_t VAR_10 = FUNC_2((vm_offset_t)VAR_7);
                uint64_t VAR_11 = VAR_1 - (VAR_9 & VAR_0);
                uint64_t VAR_12 = VAR_1 - (VAR_10 & VAR_0);
                size_t VAR_13 = (uint32_t) FUNC_0(VAR_11, VAR_12);
                VAR_13 = FUNC_0(VAR_13, VAR_6);

                if (VAR_8 && FUNC_4(VAR_8) && VAR_10) {
                        FUNC_1(VAR_9, VAR_10, VAR_13);
                }
                else
                        break;
                VAR_3 += VAR_13;
                VAR_7 += VAR_13;
                VAR_6 -= VAR_13;
        }
        return (VAR_6 == 0);
}
