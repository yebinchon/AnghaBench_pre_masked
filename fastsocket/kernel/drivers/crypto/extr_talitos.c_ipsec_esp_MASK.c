
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct talitos_ptr {unsigned int j_extent; void* len; } ;
struct talitos_desc {int hdr; struct talitos_ptr* ptr; } ;
struct talitos_edesc {int src_nents; int dst_nents; int dma_len; scalar_t__ dma_link_tbl; struct talitos_ptr* link_tbl; int dst_is_chained; struct talitos_desc desc; int src_is_chained; } ;
struct talitos_ctx {unsigned int authsize; unsigned int authkeylen; char key; unsigned int enckeylen; char* iv; struct device* dev; } ;
struct device {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {unsigned int cryptlen; unsigned int assoclen; char* iv; scalar_t__ src; scalar_t__ dst; int assoc; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (unsigned int) ;
 struct talitos_ctx* FUNC_1 (struct crypto_aead*) ;
 unsigned int FUNC_2 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_3 (struct aead_request*) ;
 int FUNC_4 (struct device*,scalar_t__,int ,int ) ;
 int FUNC_5 (struct device*,struct talitos_edesc*,struct aead_request*) ;
 int FUNC_6 (struct talitos_edesc*) ;
 int FUNC_7 (struct device*,struct talitos_ptr*,unsigned int,char*,int ,int ) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__,int,unsigned int,struct talitos_ptr*) ;
 char* FUNC_10 (int ) ;
 int FUNC_11 (struct device*,scalar_t__,int,int ,int ) ;
 int FUNC_12 (struct device*,struct talitos_desc*,void (*) (struct device*,struct talitos_desc*,void*,int),struct aead_request*) ;
 int FUNC_13 (struct talitos_ptr*,scalar_t__) ;

__attribute__((used)) static int FUNC_14(struct talitos_edesc *VAR_7, struct aead_request *VAR_8,
       u8 *VAR_9, u64 VAR_10,
       void (*VAR_11) (struct device *VAR_12,
           struct talitos_desc *VAR_13,
           void *VAR_14, int VAR_15))
{
 struct crypto_aead *VAR_16 = FUNC_3(VAR_8);
 struct talitos_ctx *VAR_17 = FUNC_1(VAR_16);
 struct device *VAR_18 = VAR_17->dev;
 struct talitos_desc *VAR_19 = &VAR_7->desc;
 unsigned int VAR_20 = VAR_8->cryptlen;
 unsigned int VAR_21 = VAR_17->authsize;
 unsigned int VAR_22 = FUNC_2(VAR_16);
 int VAR_23, VAR_24;
 int VAR_25;


 FUNC_7(VAR_18, &VAR_19->ptr[0], VAR_17->authkeylen, &VAR_17->key,
          0, VAR_5);

 FUNC_7(VAR_18, &VAR_19->ptr[1], VAR_8->assoclen + VAR_22,
          FUNC_10(VAR_8->assoc), 0, VAR_5);

 FUNC_7(VAR_18, &VAR_19->ptr[2], VAR_22, VAR_9 ?: VAR_8->iv, 0,
          VAR_5);


 FUNC_7(VAR_18, &VAR_19->ptr[3], VAR_17->enckeylen,
          (char *)&VAR_17->key + VAR_17->authkeylen, 0,
          VAR_5);







 VAR_19->ptr[4].len = FUNC_0(VAR_20);
 VAR_19->ptr[4].j_extent = VAR_21;

 VAR_23 = FUNC_11(VAR_18, VAR_8->src, VAR_7->src_nents ? : 1,
      (VAR_8->src == VAR_8->dst) ? VAR_3
          : VAR_5,
      VAR_7->src_is_chained);

 if (VAR_23 == 1) {
  FUNC_13(&VAR_19->ptr[4], FUNC_8(VAR_8->src));
 } else {
  VAR_25 = VAR_20;

  if (VAR_7->desc.hdr & VAR_0)
   VAR_25 = VAR_20 + VAR_21;

  VAR_23 = FUNC_9(VAR_8->src, VAR_23, VAR_25,
       &VAR_7->link_tbl[0]);
  if (VAR_23 > 1) {
   VAR_19->ptr[4].j_extent |= VAR_1;
   FUNC_13(&VAR_19->ptr[4], VAR_7->dma_link_tbl);
   FUNC_4(VAR_18, VAR_7->dma_link_tbl,
         VAR_7->dma_len,
         VAR_3);
  } else {

   FUNC_13(&VAR_19->ptr[4],
           FUNC_8(VAR_8->src));
  }
 }


 VAR_19->ptr[5].len = FUNC_0(VAR_20);
 VAR_19->ptr[5].j_extent = VAR_21;

 if (VAR_8->src != VAR_8->dst)
  VAR_23 = FUNC_11(VAR_18, VAR_8->dst,
       VAR_7->dst_nents ? : 1,
       VAR_4,
       VAR_7->dst_is_chained);

 if (VAR_23 == 1) {
  FUNC_13(&VAR_19->ptr[5], FUNC_8(VAR_8->dst));
 } else {
  struct talitos_ptr *VAR_26 =
   &VAR_7->link_tbl[VAR_7->src_nents + 1];

  FUNC_13(&VAR_19->ptr[5], VAR_7->dma_link_tbl +
          (VAR_7->src_nents + 1) *
          sizeof(struct talitos_ptr));
  VAR_23 = FUNC_9(VAR_8->dst, VAR_23, VAR_20,
       VAR_26);


  VAR_26 += VAR_23 - 1;
  VAR_26->j_extent = 0;
  VAR_23++;
  VAR_26++;
  VAR_26->j_extent = VAR_2;
  VAR_26->len = FUNC_0(VAR_21);


  FUNC_13(VAR_26, VAR_7->dma_link_tbl +
          (VAR_7->src_nents + VAR_7->dst_nents + 2) *
          sizeof(struct talitos_ptr));
  VAR_19->ptr[5].j_extent |= VAR_1;
  FUNC_4(VAR_17->dev, VAR_7->dma_link_tbl,
        VAR_7->dma_len, VAR_3);
 }


 FUNC_7(VAR_18, &VAR_19->ptr[6], VAR_22, VAR_17->iv, 0,
          VAR_4);

 VAR_24 = FUNC_12(VAR_18, VAR_19, VAR_11, VAR_8);
 if (VAR_24 != -VAR_6) {
  FUNC_5(VAR_18, VAR_7, VAR_8);
  FUNC_6(VAR_7);
 }
 return VAR_24;
}
