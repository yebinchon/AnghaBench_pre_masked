
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int addr_conv_t ;



__attribute__((used)) static size_t FUNC_0(int VAR_0)
{
 size_t VAR_1;

 VAR_1 = sizeof(struct page *) * (VAR_0+2) + sizeof(addr_conv_t) * (VAR_0+2);

 return VAR_1;
}
