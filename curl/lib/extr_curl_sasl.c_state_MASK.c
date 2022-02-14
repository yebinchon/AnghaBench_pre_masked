
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectdata {int data; } ;
struct SASL {size_t state; } ;
typedef size_t saslstate ;


 int FUNC_0 (int ,char*,void*,char const* const,char const* const) ;

__attribute__((used)) static void FUNC_1(struct SASL *VAR_0, struct connectdata *VAR_1,
                  saslstate VAR_2)
{
  (void) VAR_1;


  VAR_0->state = VAR_2;
}
