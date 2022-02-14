
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ bfd_vma ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 char* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (char*,...) ;

void FUNC_4(void *VAR_2, int VAR_3)
{
  bfd_vma VAR_4, VAR_5 = (bfd_vma)(long)VAR_2;
  const char *VAR_6;

  if (!VAR_1)
    FUNC_0();

  VAR_4 = VAR_5 + VAR_3;
  while (VAR_5 < VAR_4) {
    VAR_6 = FUNC_1(VAR_5);
    if (VAR_6 != ((void*)0))
      FUNC_3("%s:\n", VAR_6);

    FUNC_3("   %08lx ", (long)VAR_5);
    VAR_5 += FUNC_2(VAR_5, &VAR_0);
    FUNC_3("\n");
  }
}
