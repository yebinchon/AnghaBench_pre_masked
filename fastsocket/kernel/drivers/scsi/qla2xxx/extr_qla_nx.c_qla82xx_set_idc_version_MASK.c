
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct qla_hw_data {int portnum; } ;
struct TYPE_4__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_1__*,int,char*,int,...) ;
 int VAR_4 ;
 int FUNC_1 (struct qla_hw_data*,int ) ;
 int FUNC_2 (struct qla_hw_data*,int ,int) ;

inline void
FUNC_3(scsi_qla_host_t *VAR_5)
{
 int VAR_6;
 uint32_t VAR_7;
 struct qla_hw_data *VAR_8 = VAR_5->hw;

 VAR_7 = FUNC_1(VAR_8, VAR_0);
 if (VAR_7 == (VAR_2 << (VAR_8->portnum * 4))) {
  FUNC_2(VAR_8, VAR_1,
      VAR_3);
  FUNC_0(VAR_4, VAR_5, 0xb082,
      "IDC version updated to %d\n", VAR_3);
 } else {
  VAR_6 = FUNC_1(VAR_8, VAR_1);
  if (VAR_6 != VAR_3)
   FUNC_0(VAR_4, VAR_5, 0xb083,
       "qla2xxx driver IDC version %d is not compatible "
       "with IDC version %d of the other drivers\n",
       VAR_3, VAR_6);
 }
}
