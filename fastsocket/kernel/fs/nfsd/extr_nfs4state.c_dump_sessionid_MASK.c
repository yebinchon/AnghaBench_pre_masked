
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfs4_sessionid {int * data; } ;


 int FUNC_0 (char*,char const*,int ,int ,int ,int ) ;

__attribute__((used)) static inline void
FUNC_1(const char *VAR_0, struct nfs4_sessionid *VAR_1)
{
 u32 *VAR_2 = (u32 *)(&VAR_1->data[0]);
 FUNC_0("%s: %u:%u:%u:%u\n", VAR_0, VAR_2[0], VAR_2[1], VAR_2[2], VAR_2[3]);
}
