
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sh_link; void* sh_entsize; void* sh_addralign; void* sh_info; void* sh_size; void* sh_offset; void* sh_addr; void* sh_flags; void* sh_type; void* sh_name; } ;
struct section {TYPE_1__ shdr; struct section* link; } ;
struct TYPE_7__ {int e_shnum; int e_shoff; } ;
struct TYPE_6__ {int sh_entsize; int sh_addralign; int sh_info; int sh_link; int sh_size; int sh_offset; int sh_addr; int sh_flags; int sh_type; int sh_name; } ;
typedef int FILE ;
typedef TYPE_2__ Elf32_Shdr ;


 int VAR_0 ;
 struct section* FUNC_0 (int,int) ;
 int FUNC_1 (char*,int,...) ;
 TYPE_4__ VAR_1 ;
 void* FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*,int,int,int *) ;
 scalar_t__ FUNC_4 (int *,int ,int ) ;
 struct section* VAR_3 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(FILE *VAR_4)
{
 int VAR_5;
 Elf32_Shdr VAR_6;

 VAR_3 = FUNC_0(VAR_1.e_shnum, sizeof(struct section));
 if (!VAR_3) {
  FUNC_1("Unable to allocate %d section headers\n",
      VAR_1.e_shnum);
 }
 if (FUNC_4(VAR_4, VAR_1.e_shoff, VAR_0) < 0) {
  FUNC_1("Seek to %d failed: %s\n",
   VAR_1.e_shoff, FUNC_5(VAR_2));
 }
 for (VAR_5 = 0; VAR_5 < VAR_1.e_shnum; VAR_5++) {
  struct section *VAR_7 = &VAR_3[VAR_5];
  if (FUNC_3(&VAR_6, sizeof VAR_6, 1, VAR_4) != 1)
   FUNC_1("Cannot read ELF section headers %d/%d: %s\n",
       VAR_5, VAR_1.e_shnum, FUNC_5(VAR_2));
  VAR_7->shdr.sh_name = FUNC_2(VAR_6.sh_name);
  VAR_7->shdr.sh_type = FUNC_2(VAR_6.sh_type);
  VAR_7->shdr.sh_flags = FUNC_2(VAR_6.sh_flags);
  VAR_7->shdr.sh_addr = FUNC_2(VAR_6.sh_addr);
  VAR_7->shdr.sh_offset = FUNC_2(VAR_6.sh_offset);
  VAR_7->shdr.sh_size = FUNC_2(VAR_6.sh_size);
  VAR_7->shdr.sh_link = FUNC_2(VAR_6.sh_link);
  VAR_7->shdr.sh_info = FUNC_2(VAR_6.sh_info);
  VAR_7->shdr.sh_addralign = FUNC_2(VAR_6.sh_addralign);
  VAR_7->shdr.sh_entsize = FUNC_2(VAR_6.sh_entsize);
  if (VAR_7->shdr.sh_link < VAR_1.e_shnum)
   VAR_7->link = &VAR_3[VAR_7->shdr.sh_link];
 }

}
