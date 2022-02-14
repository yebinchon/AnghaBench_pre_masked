
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct nouveau_object {int dummy; } ;
struct nouveau_client {int debug; int name; int device; int root; } ;
struct TYPE_4__ {int usecount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int VAR_2 ;
 int FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*,int ,int ,TYPE_1__*,int *) ;
 int FUNC_4 (int *,int *,int *,int ,int ,int ,int,void**) ;
 int FUNC_5 (struct nouveau_object*,int *) ;
 TYPE_1__* FUNC_6 (struct nouveau_client*) ;
 int FUNC_7 (int ,int,char*,char const*) ;

int
FUNC_8(const char *VAR_4, u64 VAR_5, const char *VAR_6,
         const char *VAR_7, int VAR_8, void **VAR_9)
{
 struct nouveau_object *VAR_10;
 struct nouveau_client *VAR_11;
 int VAR_12;

 VAR_10 = (void *)FUNC_2(VAR_5);
 if (!VAR_10)
  return -VAR_0;

 VAR_12 = FUNC_4(((void*)0), ((void*)0), &VAR_2,
         VAR_1, VAR_3,
         0, VAR_8, VAR_9);
 VAR_11 = *VAR_9;
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_3(FUNC_6(VAR_11), ~0, ~0,
        FUNC_6(VAR_11), &VAR_11->root);
 if (VAR_12)
  return VAR_12;


 FUNC_0(&FUNC_6(VAR_11)->usecount, 2);

 FUNC_5(VAR_10, &VAR_11->device);
 FUNC_7(VAR_11->name, sizeof(VAR_11->name), "%s", VAR_4);
 VAR_11->debug = FUNC_1(VAR_7, "CLIENT");
 return 0;
}
