
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_short ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct atm_vcc {int vci; } ;
struct TYPE_9__ {int pcr; int mcr; int icr; int tbe; int frtt; int nrm; int adtf; int rif; int rdf; int cdf; int trm; } ;
typedef TYPE_2__ srv_cls_param_t ;
struct TYPE_10__ {int r_status_rdf; void* r_air; } ;
typedef TYPE_3__ r_vc_abr_entry ;
struct TYPE_11__ {int f_nrm; int f_nrmexp; int f_crm; int f_cdf; int f_status; void* f_icr; void* f_acr; void* f_mcr; void* f_pcr; int f_vc_type; } ;
typedef TYPE_4__ f_vc_abr_entry ;
typedef int caddr_t ;
struct TYPE_12__ {int LineRate; int sum_mcr; int reass_ram; int memSize; int n_abr; TYPE_1__** testTable; scalar_t__ MAIN_VC_TABLE_ADDR; } ;
struct TYPE_8__ {int vc_status; } ;
typedef TYPE_5__ IADEV ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int
FUNC_3(IADEV *VAR_30, srv_cls_param_t *VAR_31,
                                                struct atm_vcc *VAR_32, u8 VAR_33)
{
  f_vc_abr_entry *VAR_34;
  r_vc_abr_entry *VAR_35;
  u32 VAR_36;
  u8 VAR_37, VAR_38, VAR_39;
  u16 VAR_40, VAR_41, *VAR_42;
  VAR_34 =(f_vc_abr_entry *)VAR_30->MAIN_VC_TABLE_ADDR;
  VAR_34 += VAR_32->vci;
  switch (VAR_33) {
     case 1:
       FUNC_1 ((caddr_t)VAR_34, 0, sizeof(*VAR_34));
       VAR_34->f_vc_type = VAR_0;
       VAR_38 = 2 << VAR_31->nrm;

       VAR_34->f_nrm = VAR_38 << 8 | VAR_38;
       VAR_37 = 100000/(2 << (16 - VAR_31->trm));
       if ( VAR_37 == 0) VAR_37 = 1;
       VAR_34->f_nrmexp =(((VAR_31->nrm +1) & 0x0f) << 12)|(VAR_24 << 8) | VAR_37;
       VAR_39 = VAR_31->tbe / VAR_38;
       if (VAR_39 == 0) VAR_39 = 1;
       VAR_34->f_crm = VAR_39 & 0xff;
       VAR_34->f_pcr = FUNC_0(VAR_31->pcr);
       VAR_36 = FUNC_2( VAR_31->icr, (VAR_31->tbe > VAR_31->frtt) ?
    ((VAR_31->tbe/VAR_31->frtt)*1000000) :
    (1000000/(VAR_31->frtt/VAR_31->tbe)));
       VAR_34->f_icr = FUNC_0(VAR_36);
       VAR_40 = (10000 * VAR_31->adtf)/8192;
       if (VAR_40 == 0) VAR_40 = 1;
       VAR_34->f_cdf = ((7 - VAR_31->cdf) << 12 | VAR_40) & 0xfff;
       VAR_34->f_mcr = FUNC_0(VAR_31->mcr);
       VAR_34->f_acr = VAR_34->f_icr;
       VAR_34->f_status = 0x0042;
       break;
    case 0:
       VAR_42 = (u_short *)(VAR_30->reass_ram + VAR_27*VAR_30->memSize);
       *(VAR_42 + VAR_32->vci) = VAR_25 | VAR_26;
       VAR_35 = (r_vc_abr_entry*)(VAR_30->reass_ram+VAR_1*VAR_30->memSize);
       VAR_35 += VAR_32->vci;
       VAR_35->r_status_rdf = (15 - VAR_31->rdf) & 0x000f;
       VAR_41 = VAR_31->pcr << (15 - VAR_31->rif);
       if (VAR_41 == 0) VAR_41 = 1;
       VAR_35->r_air = FUNC_0(VAR_41);
       VAR_30->testTable[VAR_32->vci]->vc_status = VAR_29 | VAR_28;
       VAR_30->sum_mcr += VAR_31->mcr;
       VAR_30->n_abr++;
       break;
    default:
       break;
  }
  return 0;
}
