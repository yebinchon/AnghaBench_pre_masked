
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectdata {int data; } ;
struct connectbundle {int dummy; } ;
struct conncache {int hash; } ;
typedef int key ;


 int FUNC_0 (int ) ;
 struct connectbundle* FUNC_1 (int *,char*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct connectdata*,char*,int,char const**) ;
 int FUNC_3 (char*) ;

struct connectbundle *FUNC_4(struct connectdata *VAR_1,
                                                 struct conncache *VAR_2,
                                                 const char **VAR_3)
{
  struct connectbundle *VAR_4 = ((void*)0);
  FUNC_0(VAR_1->data);
  if(VAR_2) {
    char VAR_5[VAR_0];
    FUNC_2(VAR_1, VAR_5, sizeof(VAR_5), VAR_3);
    VAR_4 = FUNC_1(&VAR_2->hash, VAR_5, FUNC_3(VAR_5));
  }

  return VAR_4;
}
