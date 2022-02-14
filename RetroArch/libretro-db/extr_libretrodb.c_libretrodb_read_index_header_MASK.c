
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int next; int key_size; int name; } ;
typedef TYPE_1__ libretrodb_index_t ;
typedef int RFILE ;


 int FUNC_0 (int *,char*,int ,int*,char*,int *,char*,int *,int *) ;

__attribute__((used)) static int FUNC_1(RFILE *VAR_0, libretrodb_index_t *VAR_1)
{
   uint64_t VAR_2 = 50;
   return FUNC_0(VAR_0,
         "name", VAR_1->name, &VAR_2,
         "key_size", &VAR_1->key_size,
         "next", &VAR_1->next, ((void*)0));
}
