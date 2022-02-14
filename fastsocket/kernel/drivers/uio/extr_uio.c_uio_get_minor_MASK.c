
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio_device {int minor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct uio_device*,int*) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(struct uio_device *VAR_6)
{
 int VAR_7 = -VAR_1;
 int VAR_8;

 FUNC_2(&VAR_4);
 if (FUNC_1(&VAR_5, VAR_2) == 0)
  goto exit;

 VAR_7 = FUNC_0(&VAR_5, VAR_6, &VAR_8);
 if (VAR_7 < 0) {
  if (VAR_7 == -VAR_0)
   VAR_7 = -VAR_1;
  goto exit;
 }
 VAR_6->minor = VAR_8 & VAR_3;
exit:
 FUNC_3(&VAR_4);
 return VAR_7;
}
