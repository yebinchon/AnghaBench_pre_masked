
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectbundle {int dummy; } ;
struct conncache {int hash; } ;


 void* FUNC_0 (int *,char*,int ,struct connectbundle*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static bool FUNC_2(struct conncache *VAR_2,
                                 char *VAR_3,
                                 struct connectbundle *VAR_4)
{
  void *VAR_5 = FUNC_0(&VAR_2->hash, VAR_3, FUNC_1(VAR_3), VAR_4);

  return VAR_5?VAR_1:VAR_0;
}
