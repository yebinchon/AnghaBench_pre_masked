
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct ipath_ibdev {int dd; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 struct ipath_ibdev* FUNC_2 (struct ib_device*) ;

__attribute__((used)) static int FUNC_3(struct ib_device *VAR_1, u8 VAR_2, u16 VAR_3,
       u16 *VAR_4)
{
 struct ipath_ibdev *VAR_5 = FUNC_2(VAR_1);
 int VAR_6;

 if (VAR_3 >= FUNC_0(VAR_5->dd)) {
  VAR_6 = -VAR_0;
  goto bail;
 }

 *VAR_4 = FUNC_1(VAR_5->dd, VAR_3);
 VAR_6 = 0;

bail:
 return VAR_6;
}
