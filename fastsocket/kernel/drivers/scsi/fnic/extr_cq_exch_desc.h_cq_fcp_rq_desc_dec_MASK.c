
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct cq_fcp_rq_desc {int completed_index_eop_sop_prt; int exchange_id; int tmpl; int bytes_written; int vlan; int sof; int fcs_fer_fck; int eof; } ;
struct cq_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct cq_desc*,int*,int*,int*,int*) ;

__attribute__((used)) static inline void FUNC_1(struct cq_fcp_rq_desc *VAR_14,
          u8 *VAR_15,
          u8 *VAR_16,
          u16 *VAR_17,
          u16 *VAR_18,
          u8 *VAR_19,
          u8 *VAR_20,
          u8 *VAR_21,
          u16 *VAR_22,
          u16 *VAR_23,
          u32 *VAR_24,
          u8 *VAR_25,
          u8 *VAR_26,
          u8 *VAR_27,
          u8 *VAR_28,
          u8 *VAR_29,
          u8 *VAR_30,
          u8 *VAR_31,
          u16 *VAR_32)
{
 FUNC_0((struct cq_desc *)VAR_14, VAR_15,
      VAR_16, VAR_17, VAR_18);
 *VAR_19 = (VAR_14->completed_index_eop_sop_prt &
  VAR_6) ? 1 : 0;
 *VAR_20 = (VAR_14->completed_index_eop_sop_prt &
  VAR_8) ? 1 : 0;
 *VAR_27 =
  (VAR_14->completed_index_eop_sop_prt &
   VAR_7) ? 1 : 0;
 *VAR_22 = VAR_14->exchange_id;
 *VAR_23 = VAR_14->tmpl & VAR_11;
 *VAR_24 =
  VAR_14->bytes_written & VAR_0;
 *VAR_28 =
  (VAR_14->bytes_written & VAR_9) >>
  VAR_10;
 *VAR_31 =
  (VAR_14->bytes_written & VAR_12) >>
  VAR_13;
 *VAR_32 = VAR_14->vlan;
 *VAR_25 = VAR_14->sof;
 *VAR_21 = VAR_14->fcs_fer_fck & VAR_5;
 *VAR_29 = (VAR_14->fcs_fer_fck & VAR_1) >>
  VAR_2;
 *VAR_26 = VAR_14->eof;
 *VAR_30 =
  (VAR_14->fcs_fer_fck & VAR_3) >>
  VAR_4;
}
