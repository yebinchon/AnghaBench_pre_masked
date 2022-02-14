
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cs_blob {TYPE_1__* csb_cd; } ;
struct TYPE_2__ {scalar_t__ version; scalar_t__ teamOffset; } ;
typedef TYPE_1__ CS_CodeDirectory ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static const char *
FUNC_2(struct cs_blob *VAR_2)
{
 const CS_CodeDirectory *VAR_3;

 VAR_3 = VAR_2->csb_cd;

 if (FUNC_0(VAR_3->version) < VAR_0)
  return ((void*)0);

 if (VAR_3->teamOffset == 0)
  return ((void*)0);

 const char *VAR_4 = ((const char *)VAR_3) + FUNC_0(VAR_3->teamOffset);
 if (VAR_1 > 1)
  FUNC_1("found team-id %s in cdblob\n", VAR_4);

 return VAR_4;
}
