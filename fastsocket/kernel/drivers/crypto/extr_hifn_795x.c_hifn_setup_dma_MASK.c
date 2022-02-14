
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {unsigned int offset; unsigned int length; } ;
struct page {int dummy; } ;
struct TYPE_2__ {int flags; struct scatterlist* cache; } ;
struct hifn_request_context {TYPE_1__ walk; } ;
struct hifn_device {int dummy; } ;
struct hifn_context {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct hifn_device*,struct hifn_context*,struct hifn_request_context*,void*,unsigned int) ;
 int FUNC_2 (struct hifn_device*,struct page*,unsigned int,unsigned int,int) ;
 int FUNC_3 (struct hifn_device*) ;
 int FUNC_4 (struct hifn_device*,struct page*,unsigned int,unsigned int,int) ;
 unsigned int FUNC_5 (unsigned int,unsigned int) ;
 struct page* FUNC_6 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_7(struct hifn_device *VAR_1,
  struct hifn_context *VAR_2, struct hifn_request_context *VAR_3,
  struct scatterlist *VAR_4, struct scatterlist *VAR_5,
  unsigned int VAR_6, void *VAR_7)
{
 struct scatterlist *VAR_8;
 struct page *VAR_9, *VAR_10;
 unsigned int VAR_11, VAR_12;
 unsigned int VAR_13, VAR_14;

 VAR_13 = VAR_6;
 while (VAR_13) {
  VAR_9 = FUNC_6(VAR_4);
  VAR_11 = VAR_4->offset;
  VAR_14 = FUNC_5(VAR_4->length, VAR_13);

  FUNC_4(VAR_1, VAR_9, VAR_11, VAR_14, VAR_13 - VAR_14 == 0);

  VAR_4++;
  VAR_13 -= VAR_14;
 }

 VAR_8 = &VAR_3->walk.cache[0];
 VAR_13 = VAR_6;
 while (VAR_13) {
  if (VAR_8->length && VAR_3->walk.flags & VAR_0) {
   FUNC_0(!FUNC_6(VAR_8));
   VAR_10 = FUNC_6(VAR_8);
   VAR_12 = 0;
   VAR_14 = VAR_8->length;
  } else {
   FUNC_0(!FUNC_6(VAR_5));
   VAR_10 = FUNC_6(VAR_5);
   VAR_12 = VAR_5->offset;
   VAR_14 = VAR_5->length;
  }
  VAR_14 = FUNC_5(VAR_14, VAR_13);

  FUNC_2(VAR_1, VAR_10, VAR_12, VAR_14, VAR_13 - VAR_14 == 0);

  VAR_5++;
  VAR_8++;
  VAR_13 -= VAR_14;
 }

 FUNC_1(VAR_1, VAR_2, VAR_3, VAR_7, VAR_6);
 FUNC_3(VAR_1);
 return 0;
}
