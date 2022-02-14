
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct talitos_ptr {int dummy; } ;
struct talitos_desc {TYPE_1__* ptr; } ;
struct talitos_edesc {int src_nents; int dma_len; scalar_t__ dma_link_tbl; struct talitos_ptr* link_tbl; int dst_is_chained; scalar_t__ dst_nents; int src_is_chained; struct talitos_desc desc; } ;
struct talitos_ctx {unsigned int keylen; char* iv; struct device* dev; int key; } ;
struct device {int dummy; } ;
struct crypto_ablkcipher {int dummy; } ;
struct ablkcipher_request {unsigned int nbytes; char* info; scalar_t__ src; scalar_t__ dst; } ;
struct TYPE_3__ {int j_extent; void* len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,struct talitos_edesc*,struct ablkcipher_request*) ;
 void* FUNC_1 (unsigned int) ;
 struct talitos_ctx* FUNC_2 (struct crypto_ablkcipher*) ;
 unsigned int FUNC_3 (struct crypto_ablkcipher*) ;
 struct crypto_ablkcipher* FUNC_4 (struct ablkcipher_request*) ;
 int FUNC_5 (struct device*,scalar_t__,int ,int ) ;
 int FUNC_6 (struct talitos_edesc*) ;
 int FUNC_7 (struct device*,TYPE_1__*,unsigned int,char*,int ,int ) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__,int,unsigned int,struct talitos_ptr*) ;
 int FUNC_10 (struct device*,scalar_t__,int,int ,int ) ;
 int FUNC_11 (struct device*,struct talitos_desc*,void (*) (struct device*,struct talitos_desc*,void*,int),struct ablkcipher_request*) ;
 int FUNC_12 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct talitos_edesc *VAR_5,
      struct ablkcipher_request *VAR_6,
      u8 *VAR_7,
      void (*VAR_8) (struct device *VAR_9,
          struct talitos_desc *VAR_10,
          void *VAR_11, int VAR_12))
{
 struct crypto_ablkcipher *VAR_13 = FUNC_4(VAR_6);
 struct talitos_ctx *VAR_14 = FUNC_2(VAR_13);
 struct device *VAR_15 = VAR_14->dev;
 struct talitos_desc *VAR_16 = &VAR_5->desc;
 unsigned int VAR_17 = VAR_6->nbytes;
 unsigned int VAR_18;
 int VAR_19, VAR_20;


 VAR_16->ptr[0].len = 0;
 FUNC_12(&VAR_16->ptr[0], 0);
 VAR_16->ptr[0].j_extent = 0;


 VAR_18 = FUNC_3(VAR_13);
 FUNC_7(VAR_15, &VAR_16->ptr[1], VAR_18, VAR_7 ?: VAR_6->info, 0,
          VAR_3);


 FUNC_7(VAR_15, &VAR_16->ptr[2], VAR_14->keylen,
          (char *)&VAR_14->key, 0, VAR_3);




 VAR_16->ptr[3].len = FUNC_1(VAR_17);
 VAR_16->ptr[3].j_extent = 0;

 VAR_19 = FUNC_10(VAR_15, VAR_6->src, VAR_5->src_nents ? : 1,
      (VAR_6->src == VAR_6->dst) ? VAR_1
          : VAR_3,
      VAR_5->src_is_chained);

 if (VAR_19 == 1) {
  FUNC_12(&VAR_16->ptr[3], FUNC_8(VAR_6->src));
 } else {
  VAR_19 = FUNC_9(VAR_6->src, VAR_19, VAR_17,
       &VAR_5->link_tbl[0]);
  if (VAR_19 > 1) {
   FUNC_12(&VAR_16->ptr[3], VAR_5->dma_link_tbl);
   VAR_16->ptr[3].j_extent |= VAR_0;
   FUNC_5(VAR_15, VAR_5->dma_link_tbl,
         VAR_5->dma_len,
         VAR_1);
  } else {

   FUNC_12(&VAR_16->ptr[3],
           FUNC_8(VAR_6->src));
  }
 }


 VAR_16->ptr[4].len = FUNC_1(VAR_17);
 VAR_16->ptr[4].j_extent = 0;

 if (VAR_6->src != VAR_6->dst)
  VAR_19 = FUNC_10(VAR_15, VAR_6->dst,
       VAR_5->dst_nents ? : 1,
       VAR_2,
       VAR_5->dst_is_chained);

 if (VAR_19 == 1) {
  FUNC_12(&VAR_16->ptr[4], FUNC_8(VAR_6->dst));
 } else {
  struct talitos_ptr *VAR_21 =
   &VAR_5->link_tbl[VAR_5->src_nents + 1];

  FUNC_12(&VAR_16->ptr[4], VAR_5->dma_link_tbl +
           (VAR_5->src_nents + 1) *
           sizeof(struct talitos_ptr));
  VAR_16->ptr[4].j_extent |= VAR_0;
  VAR_19 = FUNC_9(VAR_6->dst, VAR_19, VAR_17,
       VAR_21);
  FUNC_5(VAR_14->dev, VAR_5->dma_link_tbl,
        VAR_5->dma_len, VAR_1);
 }


 FUNC_7(VAR_15, &VAR_16->ptr[5], VAR_18, VAR_14->iv, 0,
          VAR_2);


 VAR_16->ptr[6].len = 0;
 FUNC_12(&VAR_16->ptr[6], 0);
 VAR_16->ptr[6].j_extent = 0;

 VAR_20 = FUNC_11(VAR_15, VAR_16, VAR_8, VAR_6);
 if (VAR_20 != -VAR_4) {
  FUNC_0(VAR_15, VAR_5, VAR_6);
  FUNC_6(VAR_5);
 }
 return VAR_20;
}
