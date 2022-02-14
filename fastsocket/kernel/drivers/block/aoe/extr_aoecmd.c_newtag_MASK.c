
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
struct aoedev {int lasttag; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct aoedev *VAR_1)
{
 register ulong VAR_2;

 VAR_2 = VAR_0 & 0xffff;
 return VAR_2 |= (++VAR_1->lasttag & 0x7fff) << 16;
}
