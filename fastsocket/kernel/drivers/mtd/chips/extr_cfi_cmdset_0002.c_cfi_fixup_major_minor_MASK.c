
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfi_private {scalar_t__ mfr; int id; } ;
struct cfi_pri_amdstd {char MajorVersion; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct cfi_private *VAR_1,
      struct cfi_pri_amdstd *VAR_2)
{
 if (VAR_1->mfr == VAR_0 && VAR_1->id == 0x257e &&
     VAR_2->MajorVersion == '0')
  VAR_2->MajorVersion = '1';
}
