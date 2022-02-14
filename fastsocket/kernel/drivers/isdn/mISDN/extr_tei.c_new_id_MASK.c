
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct manager {int nextid; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u_int
FUNC_0(struct manager *VAR_2)
{
 u_int VAR_3;

 VAR_3 = VAR_2->nextid++;
 if (VAR_3 == 0x7fff)
  VAR_2->nextid = 1;
 VAR_3 <<= 16;
 VAR_3 |= VAR_0 << 8;
 VAR_3 |= VAR_1;
 return VAR_3;
}
