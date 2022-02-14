
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ textCopyFormatId; } ;
typedef scalar_t__ Oid ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__,char*) ;
 TYPE_1__ VAR_1 ;

Oid
FUNC_2(void)
{
 if (VAR_1.textCopyFormatId == VAR_0)
 {
  Oid VAR_2 = FUNC_0();
  VAR_1.textCopyFormatId = FUNC_1(VAR_2, "text");
 }

 return VAR_1.textCopyFormatId;
}
