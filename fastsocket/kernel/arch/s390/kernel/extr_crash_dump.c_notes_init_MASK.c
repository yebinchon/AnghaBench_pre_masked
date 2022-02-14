
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct save_area_s390x {scalar_t__ pref_reg; } ;
struct TYPE_6__ {struct save_area_s390x s390x; } ;
struct TYPE_5__ {unsigned long p_filesz; unsigned long p_memsz; int p_offset; int p_type; } ;
typedef TYPE_1__ Elf64_Phdr ;


 scalar_t__ FUNC_0 (void*,void*) ;
 int VAR_0 ;
 void* FUNC_1 (void*,struct save_area_s390x*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 void* FUNC_3 (void*) ;
 void* FUNC_4 (void*) ;
 int FUNC_5 (int ) ;
 TYPE_2__** VAR_1 ;

__attribute__((used)) static void *FUNC_6(Elf64_Phdr *VAR_2, void *VAR_3, u64 VAR_4)
{
 struct save_area_s390x *VAR_5;
 void *VAR_6 = VAR_3;
 int VAR_7;

 VAR_3 = FUNC_3(VAR_3);

 for (VAR_7 = 0; VAR_1[VAR_7]; VAR_7++) {
  VAR_5 = &VAR_1[VAR_7]->s390x;
  if (VAR_5->pref_reg == 0)
   continue;
  VAR_3 = FUNC_1(VAR_3, VAR_5);
 }
 VAR_3 = FUNC_4(VAR_3);
 FUNC_2(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->p_type = VAR_0;
 VAR_2->p_offset = FUNC_5(VAR_4);
 VAR_2->p_filesz = (unsigned long) FUNC_0(VAR_3, VAR_6);
 VAR_2->p_memsz = VAR_2->p_filesz;
 return VAR_3;
}
