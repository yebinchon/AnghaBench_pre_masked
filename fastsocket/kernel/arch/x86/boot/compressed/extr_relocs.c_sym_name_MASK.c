
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sh_name; } ;
struct TYPE_7__ {TYPE_1__ shdr; } ;
struct TYPE_6__ {int st_name; size_t st_shndx; } ;
typedef TYPE_2__ Elf32_Sym ;


 char* FUNC_0 (int ) ;
 TYPE_4__* VAR_0 ;

__attribute__((used)) static const char *FUNC_1(const char *VAR_1, Elf32_Sym *VAR_2)
{
 const char *VAR_3;
 VAR_3 = "<noname>";
 if (VAR_2->st_name) {
  VAR_3 = VAR_1 + VAR_2->st_name;
 }
 else {
  VAR_3 = FUNC_0(VAR_0[VAR_2->st_shndx].shdr.sh_name);
 }
 return VAR_3;
}
