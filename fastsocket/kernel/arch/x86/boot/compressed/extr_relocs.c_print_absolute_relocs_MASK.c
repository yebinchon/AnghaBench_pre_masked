
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ sh_type; size_t sh_info; int sh_flags; int sh_size; } ;
struct section {char* strtab; TYPE_3__* reltab; TYPE_1__ shdr; struct section* link; TYPE_2__* symtab; } ;
struct TYPE_9__ {int e_shnum; } ;
struct TYPE_8__ {int r_info; int r_offset; } ;
struct TYPE_7__ {scalar_t__ st_shndx; int st_value; } ;
typedef TYPE_2__ Elf32_Sym ;
typedef TYPE_3__ Elf32_Rel ;


 size_t FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_5__ VAR_3 ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (char*,...) ;
 char* FUNC_4 (int ) ;
 struct section* VAR_4 ;
 char* FUNC_5 (char*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(void)
{
 int VAR_5, VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_3.e_shnum; VAR_5++) {
  struct section *VAR_7 = &VAR_4[VAR_5];
  struct section *VAR_8, *VAR_9;
  char *VAR_10;
  Elf32_Sym *VAR_11;
  int VAR_12;
  if (VAR_7->shdr.sh_type != VAR_2) {
   continue;
  }
  VAR_9 = VAR_7->link;
  VAR_8 = &VAR_4[VAR_7->shdr.sh_info];
  if (!(VAR_8->shdr.sh_flags & VAR_0)) {
   continue;
  }
  VAR_11 = VAR_9->symtab;
  VAR_10 = VAR_9->link->strtab;
  for (VAR_12 = 0; VAR_12 < VAR_7->shdr.sh_size/sizeof(Elf32_Rel); VAR_12++) {
   Elf32_Rel *VAR_13;
   Elf32_Sym *VAR_14;
   const char *VAR_15;
   VAR_13 = &VAR_7->reltab[VAR_12];
   VAR_14 = &VAR_11[FUNC_0(VAR_13->r_info)];
   VAR_15 = FUNC_5(VAR_10, VAR_14);
   if (VAR_14->st_shndx != VAR_1) {
    continue;
   }
   if (FUNC_2(VAR_15))
    continue;

   if (!VAR_6) {
    FUNC_3("WARNING: Absolute relocations"
     " present\n");
    FUNC_3("Offset     Info     Type     Sym.Value "
     "Sym.Name\n");
    VAR_6 = 1;
   }

   FUNC_3("%08x %08x %10s %08x  %s\n",
    VAR_13->r_offset,
    VAR_13->r_info,
    FUNC_4(FUNC_1(VAR_13->r_info)),
    VAR_14->st_value,
    VAR_15);
  }
 }

 if (VAR_6)
  FUNC_3("\n");
}
