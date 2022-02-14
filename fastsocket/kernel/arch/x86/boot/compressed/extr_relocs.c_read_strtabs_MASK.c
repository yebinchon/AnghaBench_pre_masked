
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sh_type; scalar_t__ sh_size; int sh_offset; } ;
struct section {TYPE_1__ shdr; int strtab; } ;
struct TYPE_4__ {int e_shnum; } ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,scalar_t__,...) ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int,scalar_t__,int *) ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 struct section* VAR_4 ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(FILE *VAR_5)
{
 int VAR_6;
 for (VAR_6 = 0; VAR_6 < VAR_2.e_shnum; VAR_6++) {
  struct section *VAR_7 = &VAR_4[VAR_6];
  if (VAR_7->shdr.sh_type != VAR_1) {
   continue;
  }
  VAR_7->strtab = FUNC_3(VAR_7->shdr.sh_size);
  if (!VAR_7->strtab) {
   FUNC_0("malloc of %d bytes for strtab failed\n",
    VAR_7->shdr.sh_size);
  }
  if (FUNC_2(VAR_5, VAR_7->shdr.sh_offset, VAR_0) < 0) {
   FUNC_0("Seek to %d failed: %s\n",
    VAR_7->shdr.sh_offset, FUNC_4(VAR_3));
  }
  if (FUNC_1(VAR_7->strtab, 1, VAR_7->shdr.sh_size, VAR_5)
      != VAR_7->shdr.sh_size) {
   FUNC_0("Cannot read symbol table: %s\n",
    FUNC_4(VAR_3));
  }
 }
}
