
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_pool_metadata {int bm; int bdev; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct dm_pool_metadata*,int) ;
 int FUNC_4 (int ,int,int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct dm_pool_metadata *VAR_4, bool VAR_5)
{
 int VAR_6;

 VAR_4->bm = FUNC_4(VAR_4->bdev, VAR_2 << VAR_0,
       VAR_3,
       VAR_1);
 if (FUNC_1(VAR_4->bm)) {
  FUNC_0("could not create block manager");
  return FUNC_2(VAR_4->bm);
 }

 VAR_6 = FUNC_3(VAR_4, VAR_5);
 if (VAR_6)
  FUNC_5(VAR_4->bm);

 return VAR_6;
}
