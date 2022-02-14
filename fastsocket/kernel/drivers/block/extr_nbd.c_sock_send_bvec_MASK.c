
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nbd_device {int dummy; } ;
struct bio_vec {int bv_offset; int bv_page; int bv_len; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nbd_device*,int,void*,int ,int) ;

__attribute__((used)) static inline int FUNC_3(struct nbd_device *VAR_0, struct bio_vec *VAR_1,
  int VAR_2)
{
 int VAR_3;
 void *VAR_4 = FUNC_0(VAR_1->bv_page);
 VAR_3 = FUNC_2(VAR_0, 1, VAR_4 + VAR_1->bv_offset, VAR_1->bv_len, VAR_2);
 FUNC_1(VAR_1->bv_page);
 return VAR_3;
}
