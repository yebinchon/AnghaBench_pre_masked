
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int iv; int data; } ;
struct pohmelfs_crypto_thread {int page; TYPE_1__ eng; int size; TYPE_3__* psb; } ;
struct pohmelfs_crypto_input_action_data {int page; int iv; int size; TYPE_2__* e; } ;
struct TYPE_6__ {int crypto_attached_size; } ;
struct TYPE_5__ {int data; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct pohmelfs_crypto_thread *VAR_0, void *VAR_1)
{
 struct pohmelfs_crypto_input_action_data *VAR_2 = VAR_1;

 FUNC_0(VAR_0->eng.data, VAR_2->e->data, VAR_0->psb->crypto_attached_size);

 VAR_0->size = VAR_2->size;
 VAR_0->eng.iv = VAR_2->iv;

 VAR_0->page = VAR_2->page;
 return 0;
}
