
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disassemble_info {int dummy; } ;
typedef scalar_t__ bfd_vma ;


 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(bfd_vma VAR_0, struct disassemble_info *VAR_1)
{
  const char *VAR_2;

  FUNC_1("%08x", (int)VAR_0);

  VAR_2 = FUNC_0(VAR_0);
  if (VAR_2 != ((void*)0))
    FUNC_1(" <%s>", VAR_2);
}
