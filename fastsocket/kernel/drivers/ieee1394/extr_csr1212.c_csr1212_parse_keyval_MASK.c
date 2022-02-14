
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct csr1212_keyval_img {int* data; int crc; int length; } ;
struct TYPE_7__ {int len; int data; } ;
struct TYPE_5__ {int len; } ;
struct TYPE_8__ {TYPE_3__ leaf; TYPE_1__ directory; } ;
struct TYPE_6__ {int type; int id; } ;
struct csr1212_keyval {size_t offset; int valid; TYPE_4__ value; TYPE_2__ key; } ;
struct csr1212_csr_rom_cache {size_t offset; int * data; } ;


 int VAR_0 ;


 int FUNC_0 (size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (size_t) ;
 int FUNC_3 (int*,int,int ,int *) ;
 int FUNC_4 (struct csr1212_keyval*,int,size_t) ;
 int FUNC_5 (int ,int*,size_t) ;
 size_t FUNC_6 (int) ;

int FUNC_7(struct csr1212_keyval *VAR_3,
    struct csr1212_csr_rom_cache *VAR_4)
{
 struct csr1212_keyval_img *VAR_5;
 int VAR_6;
 int VAR_7 = VAR_1;
 int VAR_8;

 VAR_5 = (struct csr1212_keyval_img*)
  &VAR_4->data[FUNC_2(VAR_3->offset - VAR_4->offset)];
 VAR_8 = FUNC_1(VAR_5->length);


 FUNC_3(VAR_5->data, VAR_8, VAR_5->crc, &VAR_4->data[3]);

 switch (VAR_3->key.type) {
 case 129:
  for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
   u32 VAR_9 = VAR_5->data[VAR_6];




   if (VAR_9 == 0x0)
    continue;
   VAR_7 = FUNC_4(VAR_3, VAR_9,
     VAR_3->offset + FUNC_6(VAR_6 + 1));
  }
  VAR_3->value.directory.len = VAR_8;
  break;

 case 128:
  if (VAR_3->key.id != VAR_0) {
   size_t VAR_10 = FUNC_6(VAR_8);

   VAR_3->value.leaf.data = FUNC_0(VAR_10);
   if (!VAR_3->value.leaf.data) {
    VAR_7 = -VAR_2;
    goto out;
   }

   VAR_3->value.leaf.len = VAR_8;
   FUNC_5(VAR_3->value.leaf.data, VAR_5->data, VAR_10);
  }
  break;
 }

 VAR_3->valid = 1;
out:
 return VAR_7;
}
