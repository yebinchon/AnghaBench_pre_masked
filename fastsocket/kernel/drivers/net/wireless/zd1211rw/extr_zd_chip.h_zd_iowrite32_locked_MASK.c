
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zd_addr_t ;
typedef int u32 ;
struct zd_ioreq32 {int value; int addr; } ;
struct zd_chip {int dummy; } ;


 int FUNC_0 (struct zd_chip*,struct zd_ioreq32*,int) ;

__attribute__((used)) static inline int FUNC_1(struct zd_chip *VAR_0, u32 VAR_1,
                               zd_addr_t VAR_2)
{
 struct zd_ioreq32 VAR_3;

 VAR_3.addr = VAR_2;
 VAR_3.value = VAR_1;

 return FUNC_0(VAR_0, &VAR_3, 1);
}
