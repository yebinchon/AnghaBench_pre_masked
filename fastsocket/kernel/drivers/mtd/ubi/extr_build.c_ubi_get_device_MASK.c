
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_device {scalar_t__ ref_count; int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 struct ubi_device** VAR_0 ;
 int VAR_1 ;

struct ubi_device *FUNC_4(int VAR_2)
{
 struct ubi_device *VAR_3;

 FUNC_1(&VAR_1);
 VAR_3 = VAR_0[VAR_2];
 if (VAR_3) {
  FUNC_3(VAR_3->ref_count >= 0);
  VAR_3->ref_count += 1;
  FUNC_0(&VAR_3->dev);
 }
 FUNC_2(&VAR_1);

 return VAR_3;
}
