
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ sh_type; int sh_size; } ;
struct section {TYPE_3__* symtab; TYPE_2__ shdr; TYPE_1__* link; } ;
struct TYPE_9__ {int e_shnum; } ;
struct TYPE_8__ {scalar_t__ st_shndx; int st_value; int st_size; int st_other; int st_info; } ;
struct TYPE_6__ {char* strtab; } ;
typedef TYPE_3__ Elf32_Sym ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_5__ VAR_2 ;
 int FUNC_3 (char*,...) ;
 struct section* VAR_3 ;
 char* FUNC_4 (int ) ;
 char* FUNC_5 (char*,TYPE_3__*) ;
 char* FUNC_6 (int ) ;
 char* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(void)
{
 int VAR_4;
 FUNC_3("Absolute symbols\n");
 FUNC_3(" Num:    Value Size  Type       Bind        Visibility  Name\n");
 for (VAR_4 = 0; VAR_4 < VAR_2.e_shnum; VAR_4++) {
  struct section *VAR_5 = &VAR_3[VAR_4];
  char *VAR_6;
  Elf32_Sym *VAR_7;
  int VAR_8;

  if (VAR_5->shdr.sh_type != VAR_1) {
   continue;
  }
  VAR_7 = VAR_5->symtab;
  VAR_6 = VAR_5->link->strtab;
  for (VAR_8 = 0; VAR_8 < VAR_5->shdr.sh_size/sizeof(Elf32_Sym); VAR_8++) {
   Elf32_Sym *VAR_9;
   const char *VAR_10;
   VAR_9 = &VAR_5->symtab[VAR_8];
   VAR_10 = FUNC_5(VAR_6, VAR_9);
   if (VAR_9->st_shndx != VAR_0) {
    continue;
   }
   FUNC_3("%5d %08x %5d %10s %10s %12s %s\n",
    VAR_8, VAR_9->st_value, VAR_9->st_size,
    FUNC_6(FUNC_1(VAR_9->st_info)),
    FUNC_4(FUNC_0(VAR_9->st_info)),
    FUNC_7(FUNC_2(VAR_9->st_other)),
    VAR_10);
  }
 }
 FUNC_3("\n");
}
