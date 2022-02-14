
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct address_space {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct address_space *VAR_1)
{
 int VAR_2 = (unsigned long) VAR_1 << (VAR_0 - 8);
 return VAR_2 & 0x3FF000;
}
