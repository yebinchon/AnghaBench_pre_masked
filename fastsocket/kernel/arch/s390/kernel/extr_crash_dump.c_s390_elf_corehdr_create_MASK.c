
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
typedef size_t u32 ;
typedef int Elf64_Phdr ;


 int FUNC_0 (int) ;
 void* FUNC_1 (void*,int) ;
 unsigned long FUNC_2 (void*,void*) ;
 void* FUNC_3 (void*,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 void* FUNC_6 (size_t) ;
 int FUNC_7 (int *,unsigned long) ;
 void* FUNC_8 (int *,void*,unsigned long) ;
 scalar_t__ FUNC_9 (unsigned long) ;

__attribute__((used)) static void FUNC_10(char **VAR_0, size_t *VAR_1)
{
 Elf64_Phdr *VAR_2, *VAR_3;
 int VAR_4;
 void *VAR_5, *VAR_6;
 u32 VAR_7;
 u64 VAR_8;

 VAR_4 = FUNC_5();

 VAR_7 = 0x1000 + FUNC_4() * 0x300 +
  VAR_4 * sizeof(Elf64_Phdr);
 VAR_6 = FUNC_6(VAR_7);

 VAR_5 = FUNC_3(VAR_6, VAR_4);

 VAR_2 = VAR_5;
 VAR_5 = FUNC_1(VAR_5, sizeof(Elf64_Phdr));
 VAR_3 = VAR_5;
 VAR_5 = FUNC_1(VAR_5, sizeof(Elf64_Phdr) * VAR_4);

 VAR_8 = FUNC_2(VAR_5, VAR_6);
 VAR_5 = FUNC_8(VAR_2, VAR_5, ((unsigned long) VAR_6) + VAR_8);

 VAR_8 = FUNC_2(VAR_5, VAR_6);
 FUNC_7(VAR_3, ((unsigned long) VAR_6) + VAR_8);
 *VAR_1 = VAR_8;
 *VAR_0 = (void *) FUNC_9((unsigned long) VAR_6);
 FUNC_0(*VAR_1 > VAR_7);
}
