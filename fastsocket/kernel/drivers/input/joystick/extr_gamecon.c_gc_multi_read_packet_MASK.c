
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gc {TYPE_1__* pd; } ;
struct TYPE_2__ {int port; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct gc *VAR_0, int VAR_1, unsigned char *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  FUNC_1(VAR_0->pd->port, ~(1 << VAR_3));
  VAR_2[VAR_3] = FUNC_0(VAR_0->pd->port) ^ 0x7f;
 }
}
