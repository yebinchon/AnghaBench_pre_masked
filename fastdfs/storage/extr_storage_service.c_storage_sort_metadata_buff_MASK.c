
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FDFSMetaData ;


 int FUNC_0 (int *,int,char*,int*) ;
 int * FUNC_1 (char*,int*,int*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (void*,int,int,int ) ;

__attribute__((used)) static int FUNC_4(char *VAR_1, const int VAR_2)
{
 FDFSMetaData *VAR_3;
 int VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_3 = FUNC_1(VAR_1, &VAR_4, &VAR_6);
 if (VAR_3 == ((void*)0))
 {
  return VAR_6;
 }

 FUNC_3((void *)VAR_3, VAR_4, sizeof(FDFSMetaData), VAR_0);


 FUNC_0(VAR_3, VAR_4, VAR_1, &VAR_5);
 FUNC_2(VAR_3);

 return 0;
}
