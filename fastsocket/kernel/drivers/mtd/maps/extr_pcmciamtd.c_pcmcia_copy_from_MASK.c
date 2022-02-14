
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_info {int map_priv_2; } ;
typedef int ssize_t ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (int,char*,void*,unsigned long,int ) ;
 scalar_t__ FUNC_1 (struct map_info*) ;
 int FUNC_2 (void*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(struct map_info *VAR_0, void *VAR_1, unsigned long VAR_2, ssize_t VAR_3)
{
 caddr_t VAR_4 = (caddr_t)VAR_0->map_priv_2;

 if(FUNC_1(VAR_0))
  return;

 FUNC_0(3, "to = %p from = %lu len = %u", VAR_1, VAR_2, VAR_3);
 FUNC_2(VAR_1, VAR_4 + VAR_2, VAR_3);
}
