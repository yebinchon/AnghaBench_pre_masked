
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int dummy; } ;
struct dm_ioctl {int flags; scalar_t__* uuid; int name; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mapped_device*,struct dm_ioctl*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,struct mapped_device**) ;
 int FUNC_4 (struct mapped_device*) ;
 int FUNC_5 (int ,scalar_t__*,struct mapped_device*) ;
 int FUNC_6 (struct mapped_device*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct dm_ioctl *VAR_3, size_t VAR_4)
{
 int VAR_5, VAR_6 = VAR_0;
 struct mapped_device *VAR_7;

 VAR_5 = FUNC_2(VAR_3->name);
 if (VAR_5)
  return VAR_5;

 if (VAR_3->flags & VAR_2)
  VAR_6 = FUNC_0(FUNC_7(VAR_3->dev));

 VAR_5 = FUNC_3(VAR_6, &VAR_7);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_5(VAR_3->name, *VAR_3->uuid ? VAR_3->uuid : ((void*)0), VAR_7);
 if (VAR_5) {
  FUNC_6(VAR_7);
  FUNC_4(VAR_7);
  return VAR_5;
 }

 VAR_3->flags &= ~VAR_1;

 FUNC_1(VAR_7, VAR_3);

 FUNC_6(VAR_7);

 return 0;
}
