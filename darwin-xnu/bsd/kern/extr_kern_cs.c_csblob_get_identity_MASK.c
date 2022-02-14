
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cs_blob {int dummy; } ;
struct TYPE_2__ {scalar_t__ identOffset; } ;
typedef TYPE_1__ CS_CodeDirectory ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct cs_blob*,int ,int ) ;
 int FUNC_1 (scalar_t__) ;

const char *
FUNC_2(struct cs_blob *VAR_2)
{
 const CS_CodeDirectory *VAR_3;

 VAR_3 = (const CS_CodeDirectory *)FUNC_0(VAR_2, VAR_1, VAR_0);
 if (VAR_3 == ((void*)0))
  return ((void*)0);

 if (VAR_3->identOffset == 0)
  return ((void*)0);

 return ((const char *)VAR_3) + FUNC_1(VAR_3->identOffset);
}
