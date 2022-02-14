
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool {struct block_device* md_dev; struct mapped_device* pool_md; } ;
struct mapped_device {int dummy; } ;
struct block_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pool* FUNC_0 (int ) ;
 int FUNC_1 (struct pool*) ;
 struct pool* FUNC_2 (struct mapped_device*) ;
 struct pool* FUNC_3 (struct block_device*) ;
 struct pool* FUNC_4 (struct mapped_device*,struct block_device*,unsigned long,int,char**) ;

__attribute__((used)) static struct pool *FUNC_5(struct mapped_device *VAR_2,
    struct block_device *VAR_3,
    unsigned long VAR_4, int VAR_5,
    char **VAR_6, int *VAR_7)
{
 struct pool *VAR_8 = FUNC_3(VAR_3);

 if (VAR_8) {
  if (VAR_8->pool_md != VAR_2) {
   *VAR_6 = "metadata device already in use by a pool";
   return FUNC_0(-VAR_0);
  }
  FUNC_1(VAR_8);

 } else {
  VAR_8 = FUNC_2(VAR_2);
  if (VAR_8) {
   if (VAR_8->md_dev != VAR_3) {
    *VAR_6 = "different pool cannot replace a pool";
    return FUNC_0(-VAR_1);
   }
   FUNC_1(VAR_8);

  } else {
   VAR_8 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
   *VAR_7 = 1;
  }
 }

 return VAR_8;
}
