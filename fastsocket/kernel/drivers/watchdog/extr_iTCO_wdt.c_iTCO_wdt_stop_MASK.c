
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int io_lock; int smi_res; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 () ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(void)
{
 unsigned int VAR_2;

 FUNC_4(&VAR_1.io_lock);

 FUNC_0(VAR_1.smi_res);


 VAR_2 = FUNC_2(VAR_0);
 VAR_2 |= 0x0800;
 FUNC_3(VAR_2, VAR_0);
 VAR_2 = FUNC_2(VAR_0);


 FUNC_1();

 FUNC_5(&VAR_1.io_lock);

 if ((VAR_2 & 0x0800) == 0)
  return -1;
 return 0;
}
