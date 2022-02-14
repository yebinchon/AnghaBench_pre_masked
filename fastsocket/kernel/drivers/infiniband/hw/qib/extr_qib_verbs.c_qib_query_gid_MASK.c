
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int interface_id; int subnet_prefix; } ;
union ib_gid {TYPE_1__ global; } ;
typedef scalar_t__ u8 ;
struct qib_pportdata {int guid; } ;
struct qib_ibport {int * guids; int gid_prefix; } ;
struct qib_devdata {scalar_t__ num_pports; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct qib_devdata* FUNC_0 (struct ib_device*) ;
 struct qib_pportdata* FUNC_1 (struct qib_ibport*) ;
 struct qib_ibport* FUNC_2 (struct ib_device*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct ib_device *VAR_2, u8 VAR_3,
    int VAR_4, union ib_gid *VAR_5)
{
 struct qib_devdata *VAR_6 = FUNC_0(VAR_2);
 int VAR_7 = 0;

 if (!VAR_3 || VAR_3 > VAR_6->num_pports)
  VAR_7 = -VAR_0;
 else {
  struct qib_ibport *VAR_8 = FUNC_2(VAR_2, VAR_3);
  struct qib_pportdata *VAR_9 = FUNC_1(VAR_8);

  VAR_5->global.subnet_prefix = VAR_8->gid_prefix;
  if (VAR_4 == 0)
   VAR_5->global.interface_id = VAR_9->guid;
  else if (VAR_4 < VAR_1)
   VAR_5->global.interface_id = VAR_8->guids[VAR_4 - 1];
  else
   VAR_7 = -VAR_0;
 }

 return VAR_7;
}
