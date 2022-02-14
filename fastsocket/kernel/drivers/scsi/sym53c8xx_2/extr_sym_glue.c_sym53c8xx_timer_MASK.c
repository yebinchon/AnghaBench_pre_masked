
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* host; } ;
struct sym_hcb {TYPE_2__ s; } ;
struct TYPE_3__ {int host_lock; } ;


 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (struct sym_hcb*) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_0)
{
 struct sym_hcb *VAR_1 = (struct sym_hcb *)VAR_0;
 unsigned long VAR_2;

 FUNC_0(VAR_1->s.host->host_lock, VAR_2);
 FUNC_2(VAR_1);
 FUNC_1(VAR_1->s.host->host_lock, VAR_2);
}
