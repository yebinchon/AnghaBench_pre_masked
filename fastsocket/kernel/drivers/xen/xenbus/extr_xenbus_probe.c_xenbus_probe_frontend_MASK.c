
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int root; } ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (int ,char*,int ,char const*,char const*) ;
 int FUNC_2 (char*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 (TYPE_1__*,char const*,char*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_3, const char *VAR_4)
{
 char *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_1, "%s/%s/%s",
        VAR_2.root, VAR_3, VAR_4);
 if (!VAR_5)
  return -VAR_0;

 FUNC_0("%s", VAR_5);

 VAR_6 = FUNC_3(&VAR_2, VAR_3, VAR_5);
 FUNC_2(VAR_5);
 return VAR_6;
}
