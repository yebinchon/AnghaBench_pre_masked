
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_drv {int dummy; } ;
struct fw_sec {int data; int offset; int size; } ;
struct fw_desc {int * data; int len; int offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int ,int ) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct iwl_drv *VAR_2, struct fw_desc *VAR_3,
        struct fw_sec *VAR_4)
{
 void *VAR_5;

 VAR_3->data = ((void*)0);

 if (!VAR_4 || !VAR_4->size)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_4->size);
 if (!VAR_5)
  return -VAR_1;

 VAR_3->len = VAR_4->size;
 VAR_3->offset = VAR_4->offset;
 FUNC_0(VAR_5, VAR_4->data, VAR_3->len);
 VAR_3->data = VAR_5;

 return 0;
}
