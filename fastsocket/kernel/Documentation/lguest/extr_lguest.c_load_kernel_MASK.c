
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int hdr ;
struct TYPE_4__ {int e_ident; } ;
typedef TYPE_1__ Elf32_Ehdr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 unsigned long FUNC_1 (int) ;
 unsigned long FUNC_2 (int,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int,TYPE_1__*,int) ;

__attribute__((used)) static unsigned long FUNC_5(int VAR_2)
{
 Elf32_Ehdr VAR_3;


 if (FUNC_4(VAR_2, &VAR_3, sizeof(VAR_3)) != sizeof(VAR_3))
  FUNC_0(1, "Reading kernel");


 if (FUNC_3(VAR_3.e_ident, VAR_0, VAR_1) == 0)
  return FUNC_2(VAR_2, &VAR_3);


 return FUNC_1(VAR_2);
}
