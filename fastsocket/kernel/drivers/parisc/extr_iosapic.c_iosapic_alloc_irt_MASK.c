
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irt_entry {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ) ;

__attribute__((used)) static struct irt_entry *FUNC_1(int VAR_1)
{
 unsigned long VAR_2;






 VAR_2 = (unsigned long)FUNC_0(sizeof(struct irt_entry) * VAR_1 + 8, VAR_0);
 VAR_2 = (VAR_2 + 7UL) & ~7UL;
 return (struct irt_entry *)VAR_2;
}
