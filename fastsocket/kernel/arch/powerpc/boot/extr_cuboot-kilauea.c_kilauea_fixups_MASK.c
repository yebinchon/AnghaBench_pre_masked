
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bi_enet1addr; int bi_enetaddr; int bi_memsize; int bi_memstart; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(void)
{
 unsigned long VAR_2 = 33333333;

 FUNC_2(VAR_2, VAR_0);
 FUNC_1(VAR_1.bi_memstart, VAR_1.bi_memsize);
 FUNC_3("/plb/opb/ebc");
 FUNC_0("ethernet0", VAR_1.bi_enetaddr);
 FUNC_0("ethernet1", VAR_1.bi_enet1addr);
}
