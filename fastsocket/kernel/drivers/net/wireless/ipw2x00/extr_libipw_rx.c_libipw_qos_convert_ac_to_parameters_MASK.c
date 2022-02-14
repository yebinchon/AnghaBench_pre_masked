
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct libipw_qos_parameters {int* aifs; int* flag; void** tx_op_limit; void** cw_max; void** cw_min; } ;
struct libipw_qos_parameter_info {struct libipw_qos_ac_parameter* ac_params_record; } ;
struct libipw_qos_ac_parameter {int aci_aifsn; int ecw_min_max; int tx_op_limit; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct
        libipw_qos_parameter_info
        *VAR_1, struct
        libipw_qos_parameters
        *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;
 struct libipw_qos_ac_parameter *VAR_5;
 u32 VAR_6;
 u8 VAR_7;
 u8 VAR_8;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_5 = &(VAR_1->ac_params_record[VAR_4]);

  VAR_2->aifs[VAR_4] = (VAR_5->aci_aifsn) & 0x0F;
  VAR_2->aifs[VAR_4] -= (VAR_2->aifs[VAR_4] < 2) ? 0 : 2;

  VAR_7 = VAR_5->ecw_min_max & 0x0F;
  VAR_2->cw_min[VAR_4] = FUNC_0((1 << VAR_7) - 1);

  VAR_8 = (VAR_5->ecw_min_max & 0xF0) >> 4;
  VAR_2->cw_max[VAR_4] = FUNC_0((1 << VAR_8) - 1);

  VAR_2->flag[VAR_4] =
      (VAR_5->aci_aifsn & 0x10) ? 0x01 : 0x00;

  VAR_6 = FUNC_1(VAR_5->tx_op_limit) * 32;
  VAR_2->tx_op_limit[VAR_4] = FUNC_0(VAR_6);
 }
 return VAR_3;
}
