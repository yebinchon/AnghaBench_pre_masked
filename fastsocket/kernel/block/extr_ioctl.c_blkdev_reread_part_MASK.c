
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {int dummy; } ;
struct block_device {int bd_mutex; struct block_device* bd_contains; struct gendisk* bd_disk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct gendisk*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct gendisk*,struct block_device*) ;

__attribute__((used)) static int FUNC_5(struct block_device *VAR_4)
{
 struct gendisk *VAR_5 = VAR_4->bd_disk;
 int VAR_6;

 if (!FUNC_1(VAR_5) || VAR_4 != VAR_4->bd_contains)
  return -VAR_3;
 if (!FUNC_0(VAR_0))
  return -VAR_1;
 if (!FUNC_2(&VAR_4->bd_mutex))
  return -VAR_2;
 VAR_6 = FUNC_4(VAR_5, VAR_4);
 FUNC_3(&VAR_4->bd_mutex);
 return VAR_6;
}
