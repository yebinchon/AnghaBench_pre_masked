
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct dm_crypt_io {TYPE_1__* target; } ;
struct crypt_config {int page_pool; int bs; } ;
struct bio {int bi_size; } ;
typedef int gfp_t ;
struct TYPE_2__ {struct crypt_config* private; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bio*,struct page*,unsigned int,int ) ;
 struct bio* FUNC_1 (int,unsigned int,int ) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct dm_crypt_io*,struct bio*) ;
 struct page* FUNC_4 (int ,int) ;
 int FUNC_5 (struct page*,int ) ;

__attribute__((used)) static struct bio *FUNC_6(struct dm_crypt_io *VAR_6, unsigned VAR_7,
          unsigned *VAR_8)
{
 struct crypt_config *VAR_9 = VAR_6->target->private;
 struct bio *VAR_10;
 unsigned int VAR_11 = (VAR_7 + VAR_2 - 1) >> VAR_1;
 gfp_t VAR_12 = VAR_0 | VAR_3;
 unsigned VAR_13, VAR_14;
 struct page *VAR_15;

 VAR_10 = FUNC_1(VAR_0, VAR_11, VAR_9->bs);
 if (!VAR_10)
  return ((void*)0);

 FUNC_3(VAR_6, VAR_10);
 *VAR_8 = 0;

 for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
  VAR_15 = FUNC_4(VAR_9->page_pool, VAR_12);
  if (!VAR_15) {
   *VAR_8 = 1;
   break;
  }






  VAR_12 = (VAR_12 | VAR_4) & ~VAR_5;

  VAR_14 = (VAR_7 > VAR_2) ? VAR_2 : VAR_7;

  if (!FUNC_0(VAR_10, VAR_15, VAR_14, 0)) {
   FUNC_5(VAR_15, VAR_9->page_pool);
   break;
  }

  VAR_7 -= VAR_14;
 }

 if (!VAR_10->bi_size) {
  FUNC_2(VAR_10);
  return ((void*)0);
 }

 return VAR_10;
}
