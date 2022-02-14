
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfs4_deviceid {scalar_t__ data; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline u32
FUNC_0(const struct nfs4_deviceid *VAR_2)
{
 unsigned char *VAR_3 = (unsigned char *)VAR_2->data;
 unsigned int VAR_4 = VAR_0;
 u32 VAR_5 = 0;

 while (VAR_4--) {
  VAR_5 *= 37;
  VAR_5 += *VAR_3++;
 }
 return VAR_5 & VAR_1;
}
