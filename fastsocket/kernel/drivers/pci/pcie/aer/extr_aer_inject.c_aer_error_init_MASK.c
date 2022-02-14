
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct aer_error {unsigned int bus; unsigned int devfn; int pos_cap_err; int domain; int list; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct aer_error *VAR_0, u16 VAR_1,
      unsigned int VAR_2, unsigned int VAR_3,
      int VAR_4)
{
 FUNC_0(&VAR_0->list);
 VAR_0->domain = VAR_1;
 VAR_0->bus = VAR_2;
 VAR_0->devfn = VAR_3;
 VAR_0->pos_cap_err = VAR_4;
}
