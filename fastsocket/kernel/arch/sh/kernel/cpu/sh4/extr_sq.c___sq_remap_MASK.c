
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_struct {int phys_addr; scalar_t__ addr; } ;
struct sq_mapping {int addr; scalar_t__ size; int sq_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct vm_struct* FUNC_0 (scalar_t__,int ,int ,int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (unsigned long,scalar_t__,int,int ) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct sq_mapping *VAR_6, unsigned long VAR_7)
{
 FUNC_2(((VAR_6->addr >> 26) << 2) & 0x1c, VAR_3);
 FUNC_2(((VAR_6->addr >> 26) << 2) & 0x1c, VAR_4);


 return 0;
}
