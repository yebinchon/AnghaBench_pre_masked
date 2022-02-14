
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct CodaFid {int* opaque; } ;


 int FUNC_0 (char*,char*,int,int,int,int) ;

char * FUNC_1(struct CodaFid *VAR_0)
{
 static char VAR_1[60];

  FUNC_0(VAR_1, "(%08x.%08x.%08x.%08x)", VAR_0->opaque[0], VAR_0->opaque[1], VAR_0->opaque[2], VAR_0->opaque[3]);

 return VAR_1;
}
