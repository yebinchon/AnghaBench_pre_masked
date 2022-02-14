
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfi_private {scalar_t__ mfr; scalar_t__ id; } ;
struct cfi_pri_intelext {char MinorVersion; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_0(struct cfi_private *VAR_2,
      struct cfi_pri_intelext *VAR_3)
{
 if (VAR_2->mfr == VAR_0 &&
   VAR_2->id == VAR_1 && VAR_3->MinorVersion == '3')
  VAR_3->MinorVersion = '1';
}
