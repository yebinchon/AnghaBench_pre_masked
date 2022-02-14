
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct map_info {int map_priv_2; } ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (int,char*,unsigned long,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct map_info*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct map_info *VAR_0, u8 VAR_1, unsigned long VAR_2)
{
 caddr_t VAR_3 = (caddr_t)VAR_0->map_priv_2;

 if(FUNC_1(VAR_0))
  return;

 FUNC_0(3, "adr = 0x%08lx (%p)  data = 0x%02x", VAR_2, VAR_3 + VAR_2, VAR_1);
 FUNC_2(VAR_1, VAR_3 + VAR_2);
}
