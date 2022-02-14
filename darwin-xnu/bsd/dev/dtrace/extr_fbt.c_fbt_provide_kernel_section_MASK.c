
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef uintptr_t uint64_t ;
typedef unsigned int uint32_t ;
struct modctl {int mod_modname; } ;
typedef int machine_inst_t ;
struct TYPE_7__ {uintptr_t addr; int flags; scalar_t__ size; } ;
typedef TYPE_2__ kernel_section_t ;
struct TYPE_6__ {int n_strx; } ;
struct TYPE_8__ {int n_type; uintptr_t n_value; int n_sect; int n_desc; TYPE_1__ n_un; } ;
typedef TYPE_3__ kernel_nlist_t ;


 scalar_t__ FUNC_0 (struct modctl*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (struct modctl*,int ,char const*,int *,int *) ;

__attribute__((used)) static void
FUNC_3(struct modctl *VAR_6, kernel_section_t *VAR_7, kernel_nlist_t *VAR_8, uint32_t VAR_9, const char *VAR_10)
{
 uintptr_t VAR_11 = (uintptr_t)VAR_7->addr;
 uintptr_t VAR_12 = (uintptr_t)VAR_7->size + VAR_7->addr;
 unsigned int VAR_13;

 if ((VAR_7->flags & VAR_5) != VAR_5) {
  return;
 }

 for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
  uint8_t VAR_14 = VAR_8[VAR_13].n_type & (VAR_4 | VAR_2);
  const char *VAR_15 = VAR_10 + VAR_8[VAR_13].n_un.n_strx;
  uint64_t VAR_16;

  if (VAR_8[VAR_13].n_value < VAR_11 || VAR_8[VAR_13].n_value > VAR_12)
   continue;


  if (((VAR_3 | VAR_2) != VAR_14 && (VAR_0 | VAR_2) != VAR_14))
   continue;

  if (0 == VAR_8[VAR_13].n_un.n_strx)
   continue;


  if (*VAR_15 == '_')
   VAR_15 += 1;
  if (FUNC_0(VAR_6) && FUNC_1(VAR_15))
   continue;





  if (VAR_13 == VAR_9 - 1) {
   VAR_16 = VAR_12;
  }
  else {
   VAR_16 = VAR_8[VAR_13 + 1].n_value;
  }

  FUNC_2(VAR_6, VAR_6->mod_modname, VAR_15, (machine_inst_t*)VAR_8[VAR_13].n_value, (machine_inst_t*)VAR_16);
 }

}
