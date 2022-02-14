
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char** paths; } ;
typedef int StorageBinLogReader ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (int const,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(const int VAR_1)
{
 char *VAR_2;
 StorageBinLogReader VAR_3;
 int VAR_4;

 VAR_2 = VAR_0.paths[VAR_1];
 if ((VAR_4=FUNC_0(VAR_2, &VAR_3)) != 0)
 {
  FUNC_2(&VAR_3);
  return VAR_4;
 }

 VAR_4 = FUNC_1(VAR_1, &VAR_3);

 FUNC_2(&VAR_3);
 return VAR_4;
}
