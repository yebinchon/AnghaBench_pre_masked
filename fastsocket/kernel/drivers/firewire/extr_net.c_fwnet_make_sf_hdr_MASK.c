
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfc2734_header {int w0; int w1; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;

__attribute__((used)) static inline void FUNC_4(struct rfc2734_header *VAR_0,
  unsigned VAR_1, unsigned VAR_2, unsigned VAR_3, unsigned VAR_4)
{
 VAR_0->w0 = FUNC_3(VAR_1)
    | FUNC_0(VAR_2)
    | FUNC_2(VAR_3);
 VAR_0->w1 = FUNC_1(VAR_4);
}
