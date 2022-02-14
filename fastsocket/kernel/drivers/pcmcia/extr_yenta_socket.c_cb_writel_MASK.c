
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct yenta_socket {unsigned int base; } ;


 int FUNC_0 (char*,struct yenta_socket*,unsigned int,int ) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,unsigned int) ;

__attribute__((used)) static inline void FUNC_3(struct yenta_socket *VAR_0, unsigned VAR_1, u32 VAR_2)
{
 FUNC_0("%04x %08x\n", VAR_0, VAR_1, VAR_2);
 FUNC_2(VAR_2, VAR_0->base + VAR_1);
 FUNC_1(VAR_0->base + VAR_1);
}
