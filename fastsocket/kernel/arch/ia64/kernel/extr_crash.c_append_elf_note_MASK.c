
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elf_note {int n_namesz; size_t n_descsz; unsigned int n_type; } ;
typedef int Elf64_Word ;


 int FUNC_0 (int *,void*,size_t) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static inline Elf64_Word
*FUNC_2(Elf64_Word *VAR_0, char *VAR_1, unsigned VAR_2, void *VAR_3,
  size_t VAR_4)
{
 struct elf_note *VAR_5 = (struct elf_note *)VAR_0;
 VAR_5->n_namesz = FUNC_1(VAR_1) + 1;
 VAR_5->n_descsz = VAR_4;
 VAR_5->n_type = VAR_2;
 VAR_0 += (sizeof(*VAR_5) + 3)/4;
 FUNC_0(VAR_0, VAR_1, VAR_5->n_namesz);
 VAR_0 += (VAR_5->n_namesz + 3)/4;
 FUNC_0(VAR_0, VAR_3, VAR_4);
 VAR_0 += (VAR_4 + 3)/4;
 return VAR_0;
}
