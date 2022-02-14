
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop_device {scalar_t__ lo_state; int lo_disk; } ;
struct block_device {int bd_mutex; } ;
typedef int sector_t ;
typedef int loff_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct block_device*,int) ;
 int FUNC_1 (struct loop_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct loop_device *VAR_2, struct block_device *VAR_3)
{
 int VAR_4;
 sector_t VAR_5;
 loff_t VAR_6;

 VAR_4 = -VAR_0;
 if (FUNC_5(VAR_2->lo_state != VAR_1))
  goto out;
 VAR_4 = FUNC_1(VAR_2);
 if (FUNC_5(VAR_4))
  goto out;
 VAR_5 = FUNC_2(VAR_2->lo_disk);

 VAR_6 = VAR_5;
 VAR_6 <<= 9;
 FUNC_3(&VAR_3->bd_mutex);
 FUNC_0(VAR_3, VAR_6);
 FUNC_4(&VAR_3->bd_mutex);

 out:
 return VAR_4;
}
