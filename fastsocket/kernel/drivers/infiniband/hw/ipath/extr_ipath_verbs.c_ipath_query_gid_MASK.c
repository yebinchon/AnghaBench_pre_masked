
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int interface_id; int subnet_prefix; } ;
union ib_gid {TYPE_1__ global; } ;
typedef int u8 ;
struct ipath_ibdev {TYPE_2__* dd; int gid_prefix; } ;
struct ib_device {int dummy; } ;
struct TYPE_4__ {int ipath_guid; } ;


 int VAR_0 ;
 struct ipath_ibdev* FUNC_0 (struct ib_device*) ;

__attribute__((used)) static int FUNC_1(struct ib_device *VAR_1, u8 VAR_2,
      int VAR_3, union ib_gid *VAR_4)
{
 struct ipath_ibdev *VAR_5 = FUNC_0(VAR_1);
 int VAR_6;

 if (VAR_3 >= 1) {
  VAR_6 = -VAR_0;
  goto bail;
 }
 VAR_4->global.subnet_prefix = VAR_5->gid_prefix;
 VAR_4->global.interface_id = VAR_5->dd->ipath_guid;

 VAR_6 = 0;

bail:
 return VAR_6;
}
