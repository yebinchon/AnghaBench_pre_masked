
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {char* name; int next; int key_size; } ;
typedef TYPE_1__ libretrodb_index_t ;
typedef int RFILE ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*,scalar_t__) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(RFILE *VAR_0, libretrodb_index_t *VAR_1)
{
   FUNC_1(VAR_0, 3);
   FUNC_2(VAR_0, "name", FUNC_0("name"));
   FUNC_2(VAR_0, VAR_1->name, (uint32_t)FUNC_4(VAR_1->name));
   FUNC_2(VAR_0, "key_size", (uint32_t)FUNC_0("key_size"));
   FUNC_3(VAR_0, VAR_1->key_size);
   FUNC_2(VAR_0, "next", FUNC_0("next"));
   FUNC_3(VAR_0, VAR_1->next);
}
