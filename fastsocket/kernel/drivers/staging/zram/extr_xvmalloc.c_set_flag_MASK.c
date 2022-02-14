
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_header {int prev; } ;
typedef enum blockflags { ____Placeholder_blockflags } blockflags ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct block_header *VAR_0, enum blockflags VAR_1)
{
 VAR_0->prev |= FUNC_0(VAR_1);
}
