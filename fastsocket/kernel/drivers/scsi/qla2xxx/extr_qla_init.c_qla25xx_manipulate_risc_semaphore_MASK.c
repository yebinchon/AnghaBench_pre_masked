
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ulong ;
typedef int uint32_t ;
typedef scalar_t__ uint ;
struct qla_hw_data {int dummy; } ;
struct TYPE_5__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int FUNC_0 (struct qla_hw_data*) ;
 int FUNC_1 (struct qla_hw_data*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int*) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_5(scsi_qla_host_t *VAR_9)
{
 struct qla_hw_data *VAR_10 = VAR_9->hw;
 uint32_t VAR_11 = 0;
 uint VAR_12 = 100;
 uint VAR_13 = 0;
 uint VAR_14;
 ulong VAR_15;

 if (!FUNC_1(VAR_10) && !FUNC_0(VAR_10))
  return;

attempt:
 VAR_14 = VAR_6;
 VAR_15 = VAR_14 / VAR_12;
 while (VAR_15--) {
  FUNC_4(VAR_9, VAR_5);
  FUNC_3(VAR_9, &VAR_11);
  if (VAR_11 & VAR_0)
   break;
  FUNC_2(VAR_12);
  VAR_13 += VAR_12;
  if (VAR_13 > VAR_8)
   goto force;
 }

 if (!(VAR_11 & VAR_0))
  goto force;

 if (!(VAR_11 & VAR_2))
  goto acquired;

 FUNC_4(VAR_9, VAR_1);
 VAR_14 = VAR_7;
 VAR_15 = VAR_14 / VAR_12;
 while (VAR_15--) {
  FUNC_3(VAR_9, &VAR_11);
  if (!(VAR_11 & VAR_2))
   break;
  FUNC_2(VAR_12);
  VAR_13 += VAR_12;
  if (VAR_13 > VAR_8)
   goto force;
 }

 if (VAR_11 & VAR_2)
  FUNC_4(VAR_9, VAR_3);

 goto attempt;

force:
 FUNC_4(VAR_9, VAR_4);

acquired:
 return;
}
