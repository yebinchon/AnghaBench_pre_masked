
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct gendisk {struct ace_device* private_data; } ;
struct ace_device {scalar_t__ users; int lock; int dev; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ace_device*,int ) ;
 int FUNC_1 (struct ace_device*,int ,int) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct gendisk *VAR_2, fmode_t VAR_3)
{
 struct ace_device *VAR_4 = VAR_2->private_data;
 unsigned long VAR_5;
 u16 VAR_6;

 FUNC_2(VAR_4->dev, "ace_release() users=%i\n", VAR_4->users - 1);

 FUNC_3(&VAR_4->lock, VAR_5);
 VAR_4->users--;
 if (VAR_4->users == 0) {
  VAR_6 = FUNC_0(VAR_4, VAR_0);
  FUNC_1(VAR_4, VAR_0, VAR_6 & ~VAR_1);
 }
 FUNC_4(&VAR_4->lock, VAR_5);
 return 0;
}
