
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hstate {int dummy; } ;
typedef int pte_t ;
typedef int hugepd_t ;


 int FUNC_0 (int) ;
 unsigned int FUNC_1 (struct hstate*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (unsigned int) ;

__attribute__((used)) static inline pte_t *FUNC_4(hugepd_t *VAR_0, unsigned long VAR_1,
        struct hstate *VAR_2)
{
 unsigned int VAR_3 = FUNC_1(VAR_2);
 int VAR_4 = FUNC_3(VAR_3);
 unsigned long VAR_5 = ((VAR_1 >> VAR_3) & (FUNC_0(VAR_4)-1));
 pte_t *VAR_6 = FUNC_2(*VAR_0);

 return VAR_6 + VAR_5;
}
