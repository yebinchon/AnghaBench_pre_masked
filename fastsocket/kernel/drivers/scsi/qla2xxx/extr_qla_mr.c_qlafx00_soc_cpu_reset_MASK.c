
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct qla_hw_data {int hardware_lock; } ;
struct TYPE_3__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int FUNC_0 (struct qla_hw_data*,scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static inline void
FUNC_5(scsi_qla_host_t *VAR_7)
{
 unsigned long VAR_8 = 0;
 struct qla_hw_data *VAR_9 = VAR_7->hw;
 int VAR_10, VAR_11;
 uint32_t VAR_12;


 for (VAR_10 = 0; VAR_10 < 4; VAR_10++) {
  FUNC_0(VAR_9,
      (VAR_6 + 8*VAR_10), (0xF01));
 }


 for (VAR_10 = 0; VAR_10 < 4; VAR_10++) {
  FUNC_0(VAR_9,
      (VAR_6 + 4 + 8*VAR_10), (0x01010101));
 }


 FUNC_0(VAR_9, VAR_3, (0x11F0101));


 for (VAR_10 = 0; VAR_10 < 115; VAR_10++) {
  FUNC_0(VAR_9,
      (VAR_4 + 4*VAR_10), (0x0));
 }


 for (VAR_11 = 0; VAR_11 < 4; VAR_11++)
  for (VAR_10 = 0; VAR_10 < 8; VAR_10++)
   FUNC_0(VAR_9,
       (VAR_0 + 0x100*VAR_11 + 4*VAR_10), (0x0));


 for (VAR_11 = 0; VAR_11 < 4; VAR_11++)
  FUNC_0(VAR_9,
      (VAR_5 + 0x100*VAR_11), (0x3FF));


 FUNC_0(VAR_9, VAR_2, (0x2));
 FUNC_0(VAR_9, VAR_1, (0x3));

 FUNC_3(&VAR_9->hardware_lock, VAR_8);


 FUNC_0(VAR_9, VAR_3, (0x0));


 FUNC_0(VAR_9, VAR_6, (0xF00));


 for (VAR_12 = 10; VAR_12; VAR_12--) {
  FUNC_2(1000);
  FUNC_1();
 }
 FUNC_4(&VAR_9->hardware_lock, VAR_8);
}
