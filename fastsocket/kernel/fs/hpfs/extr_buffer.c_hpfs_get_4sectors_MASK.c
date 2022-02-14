
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct quad_buffer_head {void* data; TYPE_1__** bh; } ;
struct TYPE_3__ {int b_data; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct super_block*,unsigned int,TYPE_1__**) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (void*,int ,int) ;
 int FUNC_5 (char*) ;

void *FUNC_6(struct super_block *VAR_1, unsigned VAR_2,
                          struct quad_buffer_head *VAR_3)
{
 FUNC_1();

 if (VAR_2 & 3) {
  FUNC_5("HPFS: hpfs_get_4sectors: unaligned read\n");
  return ((void*)0);
 }


 if (!(VAR_3->data = FUNC_3(2048, VAR_0))) {
  FUNC_5("HPFS: hpfs_get_4sectors: out of memory\n");
  return ((void*)0);
 }
 if (!(FUNC_2(VAR_1, VAR_2, &VAR_3->bh[0]))) goto bail0;
 if (!(FUNC_2(VAR_1, VAR_2 + 1, &VAR_3->bh[1]))) goto bail1;
 if (!(FUNC_2(VAR_1, VAR_2 + 2, &VAR_3->bh[2]))) goto bail2;
 if (!(FUNC_2(VAR_1, VAR_2 + 3, &VAR_3->bh[3]))) goto bail3;
 FUNC_4(VAR_3->data, VAR_3->bh[0]->b_data, 512);
 FUNC_4(VAR_3->data + 512, VAR_3->bh[1]->b_data, 512);
 FUNC_4(VAR_3->data + 2*512, VAR_3->bh[2]->b_data, 512);
 FUNC_4(VAR_3->data + 3*512, VAR_3->bh[3]->b_data, 512);
 return VAR_3->data;

 bail3: FUNC_0(VAR_3->bh[2]);
 bail2: FUNC_0(VAR_3->bh[1]);
 bail1: FUNC_0(VAR_3->bh[0]);
 bail0:
 return ((void*)0);
}
