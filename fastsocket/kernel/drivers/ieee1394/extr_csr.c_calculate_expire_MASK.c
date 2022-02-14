
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csr_control {int split_timeout_hi; int split_timeout_lo; int expire; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static inline void FUNC_2(struct csr_control *VAR_1)
{
 unsigned int VAR_2 = (VAR_1->split_timeout_hi & 7) * 1000000 +
        (VAR_1->split_timeout_lo >> 19) * 125;

 VAR_1->expire = FUNC_1(VAR_2 > 100000 ? VAR_2 : 100000);
 FUNC_0("CSR: setting expire to %lu, HZ=%u", VAR_1->expire, VAR_0);
}
