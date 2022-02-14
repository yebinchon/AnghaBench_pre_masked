
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; } ;
typedef TYPE_1__ CS_GenericBlob ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(const CS_GenericBlob *VAR_1, size_t VAR_2)
{
 if (VAR_2 < sizeof(CS_GenericBlob) || VAR_2 < FUNC_0(VAR_1->length))
  return VAR_0;
 return 0;
}
