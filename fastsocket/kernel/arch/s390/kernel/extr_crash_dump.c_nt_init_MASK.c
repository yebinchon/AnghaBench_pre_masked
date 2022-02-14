
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int n_namesz; int n_descsz; int n_type; } ;
typedef int Elf64_Word ;
typedef TYPE_1__ Elf64_Nhdr ;


 void* FUNC_0 (void*,int) ;
 int FUNC_1 (void*,void*,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static void *FUNC_4(void *VAR_0, Elf64_Word VAR_1, void *VAR_2, int VAR_3,
       const char *VAR_4)
{
 Elf64_Nhdr *VAR_5;
 u64 VAR_6;

 VAR_5 = (Elf64_Nhdr *)VAR_0;
 VAR_5->n_namesz = FUNC_3(VAR_4) + 1;
 VAR_5->n_descsz = VAR_3;
 VAR_5->n_type = VAR_1;
 VAR_6 = sizeof(Elf64_Nhdr);

 FUNC_1(VAR_0 + VAR_6, VAR_4, VAR_5->n_namesz);
 VAR_6 = FUNC_2(VAR_6 + VAR_5->n_namesz, 4);

 FUNC_1(VAR_0 + VAR_6, VAR_2, VAR_5->n_descsz);
 VAR_6 = FUNC_2(VAR_6 + VAR_5->n_descsz, 4);

 return FUNC_0(VAR_0, VAR_6);
}
