
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int maddr; } ;
typedef TYPE_1__ xmaddr_t ;
typedef int u64 ;
struct desc_struct {int dummy; } ;


 int FUNC_0 () ;


 int FUNC_1 (int ,int ) ;
 TYPE_1__ FUNC_2 (struct desc_struct*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct desc_struct *VAR_0, int VAR_1,
    const void *VAR_2, int VAR_3)
{
 FUNC_3();

 switch (VAR_3) {
 case 129:
 case 128:

  break;

 default: {
  xmaddr_t VAR_4 = FUNC_2(&VAR_0[VAR_1]);

  FUNC_5();
  if (FUNC_1(VAR_4.maddr, *(u64 *)VAR_2))
   FUNC_0();
 }

 }

 FUNC_4();
}
