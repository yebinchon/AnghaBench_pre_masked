
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dmfl; int dmlen; int drga; int dmea; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 TYPE_1__ VAR_0 ;
 int* VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3 (void)
{
  if (VAR_0.dmfl & 0x20)
    {

      FUNC_0 ("scsp dma: scsp_ram(%08lx) <- reg(%08lx) * %08lx\n",
               VAR_0.dmea, VAR_0.drga, VAR_0.dmlen);
    }
  else
    {

      FUNC_0 ("scsp dma: scsp_ram(%08lx) -> reg(%08lx) * %08lx\n",
               VAR_0.dmea, VAR_0.drga, VAR_0.dmlen);
    }

  VAR_1[0x16 ^ 3] &= 0xE0;

  FUNC_2 (0x10);
  FUNC_1 (0x10);
}
