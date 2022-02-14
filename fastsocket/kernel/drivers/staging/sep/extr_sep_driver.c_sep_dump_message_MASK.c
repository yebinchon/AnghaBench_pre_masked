
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sep_device {scalar_t__ shared_addr; } ;


 int FUNC_0 (char*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct sep_device *VAR_0)
{
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < 12 * 4; VAR_1 += 4)
  FUNC_0("Word %d of the message is %u\n", VAR_1, *((u32 *) (VAR_0->shared_addr + VAR_1)));
}
