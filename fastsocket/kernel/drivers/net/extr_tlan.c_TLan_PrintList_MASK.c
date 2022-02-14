
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* buffer; int frameSize; int cStat; int forward; } ;
struct TYPE_4__ {int address; int count; } ;
typedef TYPE_2__ TLanList ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1( TLanList *VAR_0, char *VAR_1, int VAR_2)
{
 int VAR_3;

 FUNC_0( "TLAN:   %s List %d at %p\n", VAR_1, VAR_2, VAR_0 );
 FUNC_0( "TLAN:      Forward    = 0x%08x\n", VAR_0->forward );
 FUNC_0( "TLAN:      CSTAT      = 0x%04hx\n", VAR_0->cStat );
 FUNC_0( "TLAN:      Frame Size = 0x%04hx\n", VAR_0->frameSize );

 for ( VAR_3 = 0; VAR_3 < 2; VAR_3++ ) {
  FUNC_0( "TLAN:      Buffer[%d].count, addr = 0x%08x, 0x%08x\n",
   VAR_3, VAR_0->buffer[VAR_3].count, VAR_0->buffer[VAR_3].address );
 }

}
