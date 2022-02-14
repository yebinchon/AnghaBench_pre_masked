
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct INFTLrecord {int nb_blocks; int lastEUN; int nb_boot_blocks; int LastFreeEUN; int numfreeEUNs; int firstEUN; int numvunits; int cylinders; int sectors; int heads; int EraseSize; int * PUtable; int * VUtable; } ;


 int FUNC_0 (char*,...) ;

void FUNC_1(struct INFTLrecord *VAR_0)
{
 int VAR_1;

 FUNC_0("-------------------------------------------"
  "----------------------------------\n");

 FUNC_0("VUtable[%d] ->", VAR_0->nb_blocks);
 for (VAR_1 = 0; VAR_1 < VAR_0->nb_blocks; VAR_1++) {
  if ((VAR_1 % 8) == 0)
   FUNC_0("\n%04x: ", VAR_1);
  FUNC_0("%04x ", VAR_0->VUtable[VAR_1]);
 }

 FUNC_0("\n-------------------------------------------"
  "----------------------------------\n");

 FUNC_0("PUtable[%d-%d=%d] ->", VAR_0->firstEUN, VAR_0->lastEUN, VAR_0->nb_blocks);
 for (VAR_1 = 0; VAR_1 <= VAR_0->lastEUN; VAR_1++) {
  if ((VAR_1 % 8) == 0)
   FUNC_0("\n%04x: ", VAR_1);
  FUNC_0("%04x ", VAR_0->PUtable[VAR_1]);
 }

 FUNC_0("\n-------------------------------------------"
  "----------------------------------\n");

 FUNC_0("INFTL ->\n"
  "  EraseSize       = %d\n"
  "  h/s/c           = %d/%d/%d\n"
  "  numvunits       = %d\n"
  "  firstEUN        = %d\n"
  "  lastEUN         = %d\n"
  "  numfreeEUNs     = %d\n"
  "  LastFreeEUN     = %d\n"
  "  nb_blocks       = %d\n"
  "  nb_boot_blocks  = %d",
  VAR_0->EraseSize, VAR_0->heads, VAR_0->sectors, VAR_0->cylinders,
  VAR_0->numvunits, VAR_0->firstEUN, VAR_0->lastEUN, VAR_0->numfreeEUNs,
  VAR_0->LastFreeEUN, VAR_0->nb_blocks, VAR_0->nb_boot_blocks);

 FUNC_0("\n-------------------------------------------"
  "----------------------------------\n");
}
