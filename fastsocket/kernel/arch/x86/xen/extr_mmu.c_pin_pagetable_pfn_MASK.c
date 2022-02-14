
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mfn; } ;
struct mmuext_op {unsigned int cmd; TYPE_1__ arg1; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct mmuext_op*,int,int *,int ) ;
 int FUNC_2 (unsigned long) ;

__attribute__((used)) static void FUNC_3(unsigned VAR_1, unsigned long VAR_2)
{
 struct mmuext_op VAR_3;
 VAR_3.cmd = VAR_1;
 VAR_3.arg1.mfn = FUNC_2(VAR_2);
 if (FUNC_1(&VAR_3, 1, ((void*)0), VAR_0))
  FUNC_0();
}
