
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct req_que {scalar_t__ ring; } ;
struct qla_hw_data {struct req_que** req_q_map; } ;
struct qla_flt_location {char* sig; int start_lo; int start_hi; } ;
struct TYPE_7__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 scalar_t__ FUNC_2 (struct qla_hw_data*) ;
 scalar_t__ FUNC_3 (struct qla_hw_data*) ;
 scalar_t__ FUNC_4 (struct qla_hw_data*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,TYPE_1__*,int,char*,char const*,int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_7 (scalar_t__,TYPE_1__*,int,int*,int) ;
 int FUNC_8 (int ,TYPE_1__*,int,char*,int) ;
 int VAR_10 ;
 int FUNC_9 (TYPE_1__*,int*,int,int) ;

__attribute__((used)) static int
FUNC_10(scsi_qla_host_t *VAR_11, uint32_t *VAR_12)
{
 const char *VAR_13, *VAR_14[] = { "DEF", "PCI" };
 uint32_t VAR_15, VAR_16;
 uint32_t *VAR_17;
 uint8_t *VAR_18, *VAR_19, VAR_20;
 uint16_t VAR_21, VAR_22, *VAR_23;
 struct qla_flt_location *VAR_24;
 struct qla_hw_data *VAR_25 = VAR_11->hw;
 struct req_que *VAR_26 = VAR_25->req_q_map[0];






 VAR_13 = VAR_14[0];
 *VAR_12 = 0;
 if (FUNC_0(VAR_25))
  *VAR_12 = VAR_2;
 else if (FUNC_1(VAR_25))
  *VAR_12 = VAR_1;
 else if (FUNC_2(VAR_25))
  *VAR_12 = VAR_3;
 else if (FUNC_3(VAR_25)) {
  *VAR_12 = VAR_4;
  goto end;
 } else if (FUNC_4(VAR_25)) {
  *VAR_12 = VAR_5;
  goto end;
 }

 VAR_18 = (uint8_t *)VAR_26->ring;
 VAR_17 = (uint32_t *)VAR_26->ring;
 VAR_15 = 0;
 VAR_20 = 1;
 do {

  FUNC_9(VAR_11, VAR_17, VAR_15 >> 2, 0x20);
  VAR_19 = VAR_18 + (VAR_15 % 4);
  if (VAR_19[0x0] != 0x55 || VAR_19[0x1] != 0xaa)
   goto end;


  VAR_16 = VAR_15 + ((VAR_19[0x19] << 8) | VAR_19[0x18]);
  FUNC_9(VAR_11, VAR_17, VAR_16 >> 2, 0x20);
  VAR_19 = VAR_18 + (VAR_15 % 4);


  if (VAR_19[0x0] != 'P' || VAR_19[0x1] != 'C' ||
      VAR_19[0x2] != 'I' || VAR_19[0x3] != 'R')
   goto end;

  VAR_20 = VAR_19[0x15] & VAR_0;


  VAR_15 += ((VAR_19[0x11] << 8) | VAR_19[0x10]) * 512;
 } while (!VAR_20);


 VAR_24 = (struct qla_flt_location *)VAR_26->ring;
 FUNC_9(VAR_11, VAR_17, VAR_15 >> 2,
     sizeof(struct qla_flt_location) >> 2);
 if (VAR_24->sig[0] != 'Q' || VAR_24->sig[1] != 'F' ||
     VAR_24->sig[2] != 'L' || VAR_24->sig[3] != 'T')
  goto end;

 VAR_23 = (uint16_t *)VAR_26->ring;
 VAR_21 = sizeof(struct qla_flt_location) >> 1;
 for (VAR_22 = 0; VAR_21; VAR_21--)
  VAR_22 += FUNC_5(*VAR_23++);
 if (VAR_22) {
  FUNC_8(VAR_10, VAR_11, 0x0045,
      "Inconsistent FLTL detected: checksum=0x%x.\n", VAR_22);
  FUNC_7(VAR_9 + VAR_8, VAR_11, 0x010e,
      VAR_18, sizeof(struct qla_flt_location));
  return VAR_6;
 }


 VAR_13 = VAR_14[1];
 *VAR_12 = (FUNC_5(VAR_24->start_hi) << 16 |
     FUNC_5(VAR_24->start_lo)) >> 2;
end:
 FUNC_6(VAR_9, VAR_11, 0x0046,
     "FLTL[%s] = 0x%x.\n",
     VAR_13, *VAR_12);
 return VAR_7;
}
