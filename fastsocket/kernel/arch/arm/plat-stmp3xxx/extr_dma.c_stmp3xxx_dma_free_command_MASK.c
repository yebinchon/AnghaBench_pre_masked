
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stmp3xxx_dma_descriptor {int * next_descr; int * virtual_buf_ptr; scalar_t__ handle; int * command; } ;
struct TYPE_2__ {int pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (int ,int *,scalar_t__) ;

int FUNC_4(int VAR_3,
         struct stmp3xxx_dma_descriptor *VAR_4)
{
 int VAR_5 = 0;

 if (!FUNC_1(VAR_3)) {
  VAR_5 = -VAR_1;
  goto out;
 }
 if (!FUNC_0(VAR_3)) {
  VAR_5 = -VAR_0;
  goto out;
 }


 FUNC_3(VAR_2[VAR_3].pool, VAR_4->command,
        VAR_4->handle);


 VAR_4->command = ((void*)0);
 VAR_4->handle = 0;
 VAR_4->virtual_buf_ptr = ((void*)0);
 VAR_4->next_descr = ((void*)0);

 FUNC_2(VAR_5);
out:
 return VAR_5;
}
