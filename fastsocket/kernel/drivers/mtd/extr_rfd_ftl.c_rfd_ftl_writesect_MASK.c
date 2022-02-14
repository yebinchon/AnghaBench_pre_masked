
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_long ;
struct partition {int reserved_block; size_t sector_count; size_t* sector_map; } ;
struct mtd_blktrans_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mtd_blktrans_dev*,size_t,char*,size_t*) ;
 int FUNC_1 (struct partition*,size_t) ;
 int FUNC_2 (char*,size_t) ;

__attribute__((used)) static int FUNC_3(struct mtd_blktrans_dev *VAR_3, u_long VAR_4, char *VAR_5)
{
 struct partition *VAR_6 = (struct partition*)VAR_3;
 u_long VAR_7;
 int VAR_8;
 int VAR_9 = 0;

 FUNC_2("rfd_ftl_writesect(sector=0x%lx)\n", VAR_4);

 if (VAR_6->reserved_block == -1) {
  VAR_9 = -VAR_0;
  goto err;
 }

 if (VAR_4 >= VAR_6->sector_count) {
  VAR_9 = -VAR_1;
  goto err;
 }

 VAR_7 = VAR_6->sector_map[VAR_4];

 for (VAR_8=0; VAR_8<VAR_2; VAR_8++) {
  if (!VAR_5[VAR_8])
   continue;

  VAR_9 = FUNC_0(VAR_3, VAR_4, VAR_5, &VAR_7);
  if (VAR_9)
   goto err;
  break;
 }

 if (VAR_8 == VAR_2)
  VAR_6->sector_map[VAR_4] = -1;

 if (VAR_7 != -1)
  VAR_9 = FUNC_1(VAR_6, VAR_7);

err:
 return VAR_9;
}
