
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct block_header {int prev; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct block_header *VAR_1, u16 VAR_2)
{
 VAR_1->prev = VAR_2 | (VAR_1->prev & VAR_0);
}
