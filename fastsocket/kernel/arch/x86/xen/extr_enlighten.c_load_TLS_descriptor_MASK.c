
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int maddr; } ;
typedef TYPE_1__ xmaddr_t ;
struct thread_struct {int * tls_array; } ;
struct multicall_space {int mc; } ;
struct desc_struct {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 struct multicall_space FUNC_1 (int ) ;
 TYPE_1__ FUNC_2 (struct desc_struct*) ;
 struct desc_struct* FUNC_3 (unsigned int) ;

__attribute__((used)) static void FUNC_4(struct thread_struct *VAR_1,
    unsigned int VAR_2, unsigned int VAR_3)
{
 struct desc_struct *VAR_4 = FUNC_3(VAR_2);
 xmaddr_t VAR_5 = FUNC_2(&VAR_4[VAR_0+VAR_3]);
 struct multicall_space VAR_6 = FUNC_1(0);

 FUNC_0(VAR_6.mc, VAR_5.maddr, VAR_1->tls_array[VAR_3]);
}
