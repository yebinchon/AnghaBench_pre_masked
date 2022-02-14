
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; } ;
typedef TYPE_1__ FDFSStorageIdInfo ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int FUNC_2(const char *VAR_1, const char *VAR_2, char *VAR_3)

{
 FDFSStorageIdInfo *VAR_4;
 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (VAR_4 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_1(VAR_3, VAR_4->id);
 return 0;
}
