
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_46__ TYPE_9__ ;
typedef struct TYPE_45__ TYPE_8__ ;
typedef struct TYPE_44__ TYPE_7__ ;
typedef struct TYPE_43__ TYPE_6__ ;
typedef struct TYPE_42__ TYPE_5__ ;
typedef struct TYPE_41__ TYPE_4__ ;
typedef struct TYPE_40__ TYPE_3__ ;
typedef struct TYPE_39__ TYPE_2__ ;
typedef struct TYPE_38__ TYPE_23__ ;
typedef struct TYPE_37__ TYPE_22__ ;
typedef struct TYPE_36__ TYPE_21__ ;
typedef struct TYPE_35__ TYPE_20__ ;
typedef struct TYPE_34__ TYPE_1__ ;
typedef struct TYPE_33__ TYPE_19__ ;
typedef struct TYPE_32__ TYPE_18__ ;
typedef struct TYPE_31__ TYPE_17__ ;
typedef struct TYPE_30__ TYPE_16__ ;
typedef struct TYPE_29__ TYPE_15__ ;
typedef struct TYPE_28__ TYPE_14__ ;
typedef struct TYPE_27__ TYPE_13__ ;
typedef struct TYPE_26__ TYPE_12__ ;
typedef struct TYPE_25__ TYPE_11__ ;
typedef struct TYPE_24__ TYPE_10__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_29__ {int bdeSize; scalar_t__ bdeFlags; } ;
struct TYPE_30__ {void* w; TYPE_15__ f; } ;
struct ulp_bde64 {TYPE_16__ tus; void* addrLow; void* addrHigh; } ;
struct TYPE_43__ {int bbRcvSizeLsb; int bbRcvSizeMsb; } ;
struct serv_parm {TYPE_6__ cmn; } ;
struct TYPE_28__ {scalar_t__ portName; scalar_t__ nodeName; } ;
struct lpfc_vport {int cfg_fdmi_on; TYPE_14__ fc_sparam; int port_state; int fc_flag; struct lpfc_hba* phba; } ;
struct TYPE_27__ {int PortID; } ;
struct TYPE_25__ {int Size; void* CmdRsp; } ;
struct TYPE_26__ {TYPE_11__ bits; } ;
struct TYPE_34__ {scalar_t__ InId; int Revision; } ;
struct TYPE_39__ {TYPE_1__ bits; } ;
struct lpfc_sli_ct_request {TYPE_13__ un; TYPE_12__ CommandResponse; int FsSubType; int FsType; TYPE_2__ RevisionId; } ;
struct lpfc_nodelist {int dummy; } ;
struct lpfc_name {int dummy; } ;
struct TYPE_42__ {int biuRev; } ;
struct TYPE_31__ {TYPE_5__ rev; } ;
struct lpfc_hba {char* SerialNumber; char* ModelName; char* ModelDesc; char* OptionROMVersion; int lmt; int fc_linkspeed; TYPE_17__ vpd; } ;
struct lpfc_dmabuf {int phys; void* virt; int list; } ;
typedef TYPE_17__ lpfc_vpd_t ;
struct TYPE_45__ {void* AttrLen; void* AttrType; } ;
struct TYPE_46__ {TYPE_8__ bits; } ;
struct TYPE_44__ {char* Manufacturer; char* SerialNumber; char* Model; char* ModelDescription; char* HardwareVersion; char* DriverVersion; char* OptionROMVersion; char* FirmwareVersion; char* OsNameVersion; int MaxCTPayloadLen; int* SupportFC4Types; int MaxFrameSize; char* HostName; scalar_t__ OsDeviceName; int PortSpeed; int SupportSpeed; scalar_t__ NodeName; } ;
struct TYPE_41__ {scalar_t__ pe; void* EntryCnt; } ;
struct TYPE_40__ {scalar_t__ PortName; } ;
struct TYPE_38__ {char* sysname; char* release; char* version; char* nodename; } ;
struct TYPE_37__ {int EntryCnt; } ;
struct TYPE_36__ {TYPE_9__ ad; TYPE_7__ un; } ;
struct TYPE_35__ {int PortName; } ;
struct TYPE_33__ {TYPE_4__ rpl; TYPE_3__ hi; } ;
struct TYPE_24__ {int EntryCnt; } ;
struct TYPE_32__ {TYPE_10__ ab; int PortName; } ;
typedef TYPE_18__ REG_PORT_ATTRIBUTE ;
typedef TYPE_19__ REG_HBA ;
typedef TYPE_20__ PORT_ENTRY ;
typedef TYPE_21__ ATTRIBUTE_ENTRY ;
typedef TYPE_22__ ATTRIBUTE_BLOCK ;


 int const VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int const VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int const VAR_14 ;
 int FUNC_0 (int *) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 char* VAR_23 ;






 int const VAR_24 ;
 int const VAR_25 ;
 int const VAR_26 ;
 int const VAR_27 ;
 int const VAR_28 ;
 int const VAR_29 ;
 int const VAR_30 ;
 int const VAR_31 ;
 int const VAR_32 ;
 int const VAR_33 ;
 int const VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;




 int const VAR_38 ;
 int const VAR_39 ;
 void* FUNC_1 (int const) ;
 void* FUNC_2 (int) ;
 TYPE_23__* FUNC_3 () ;
 int FUNC_4 (struct lpfc_dmabuf*) ;
 struct lpfc_dmabuf* FUNC_5 (int,int ) ;
 void* FUNC_6 (void*) ;
 void FUNC_7 (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*) ;
 int FUNC_8 (struct lpfc_vport*,struct lpfc_dmabuf*,struct lpfc_dmabuf*,struct lpfc_nodelist*,void (*) (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*),int ,int ) ;
 int FUNC_9 (struct lpfc_hba*,char*,int) ;
 void* FUNC_10 (struct lpfc_hba*,int ,int *) ;
 int FUNC_11 (struct lpfc_hba*,void*,int ) ;
 int FUNC_12 (struct lpfc_nodelist*) ;
 int FUNC_13 (struct lpfc_vport*,int ,int ,char*,int,...) ;
 char* VAR_40 ;
 int FUNC_14 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_15 (struct lpfc_sli_ct_request*,int ,int) ;
 void* FUNC_16 (int ) ;
 void* FUNC_17 (int ) ;
 int FUNC_18 (char*,char*,char*,...) ;
 int FUNC_19 (char*,char*) ;
 int FUNC_20 (char*) ;

int
FUNC_21(struct lpfc_vport *VAR_41, struct lpfc_nodelist *VAR_42, int VAR_43)
{
 struct lpfc_hba *VAR_44 = VAR_41->phba;
 struct lpfc_dmabuf *VAR_45, *VAR_46;
 struct lpfc_sli_ct_request *VAR_47;
 struct ulp_bde64 *VAR_48;
 uint32_t VAR_49;
 REG_HBA *VAR_50;
 PORT_ENTRY *VAR_51;
 REG_PORT_ATTRIBUTE *VAR_52;
 ATTRIBUTE_BLOCK *VAR_53;
 ATTRIBUTE_ENTRY *VAR_54;
 void (*VAR_55) (struct lpfc_hba *, struct lpfc_iocbq *,
        struct lpfc_iocbq *);




 VAR_45 = FUNC_5(sizeof (struct lpfc_dmabuf), VAR_4);
 if (!VAR_45)
  goto fdmi_cmd_exit;

 VAR_45->virt = FUNC_10(VAR_44, 0, &(VAR_45->phys));
 if (!VAR_45->virt)
  goto fdmi_cmd_free_mp;


 VAR_46 = FUNC_5(sizeof (struct lpfc_dmabuf), VAR_4);
 if (!VAR_46)
  goto fdmi_cmd_free_mpvirt;

 VAR_46->virt = FUNC_10(VAR_44, 0, &(VAR_46->phys));
 if (!VAR_46->virt)
  goto fdmi_cmd_free_bmp;

 FUNC_0(&VAR_45->list);
 FUNC_0(&VAR_46->list);


 FUNC_13(VAR_41, VAR_15, VAR_22,
    "0218 FDMI Request Data: x%x x%x x%x\n",
    VAR_41->fc_flag, VAR_41->port_state, VAR_43);
 VAR_47 = (struct lpfc_sli_ct_request *) VAR_45->virt;

 FUNC_15(VAR_47, 0, sizeof(struct lpfc_sli_ct_request));
 VAR_47->RevisionId.bits.Revision = VAR_37;
 VAR_47->RevisionId.bits.InId = 0;

 VAR_47->FsType = VAR_36;
 VAR_47->FsSubType = VAR_35;
 VAR_49 = 0;

 switch (VAR_43) {
 case 129:
  {
   lpfc_vpd_t *VAR_56 = &VAR_44->vpd;
   uint32_t VAR_57, VAR_58, VAR_59;
   int VAR_60;

   VAR_47->CommandResponse.bits.CmdRsp =
       FUNC_1(129);
   VAR_47->CommandResponse.bits.Size = 0;
   VAR_50 = (REG_HBA *) & VAR_47->un.PortID;
   FUNC_14(&VAR_50->hi.PortName, &VAR_41->fc_sparam.portName,
          sizeof (struct lpfc_name));

   VAR_50->rpl.EntryCnt = FUNC_2(1);
   FUNC_14(&VAR_50->rpl.pe, &VAR_41->fc_sparam.portName,
          sizeof (struct lpfc_name));


   VAR_49 = 2 * sizeof (struct lpfc_name) + VAR_3;
   VAR_53 = (ATTRIBUTE_BLOCK *) ((uint8_t *) VAR_50 + VAR_49);
   VAR_53->EntryCnt = 0;




   VAR_49 += VAR_3;
   VAR_54 = (ATTRIBUTE_ENTRY *) ((uint8_t *) VAR_50 + VAR_49);
   VAR_54->ad.bits.AttrType = FUNC_1(VAR_29);
   VAR_54->ad.bits.AttrLen = FUNC_1(VAR_3
      + sizeof (struct lpfc_name));
   FUNC_14(&VAR_54->un.NodeName, &VAR_41->fc_sparam.nodeName,
          sizeof (struct lpfc_name));
   VAR_53->EntryCnt++;
   VAR_49 += VAR_3 + sizeof (struct lpfc_name);


   VAR_54 = (ATTRIBUTE_ENTRY *) ((uint8_t *) VAR_50 + VAR_49);
   VAR_54->ad.bits.AttrType = FUNC_1(VAR_24);
   FUNC_19(VAR_54->un.Manufacturer, "Emulex Corporation");
   VAR_60 = FUNC_20(VAR_54->un.Manufacturer);
   VAR_60 += (VAR_60 & 3) ? (4 - (VAR_60 & 3)) : 4;
   VAR_54->ad.bits.AttrLen = FUNC_1(VAR_3 + VAR_60);
   VAR_53->EntryCnt++;
   VAR_49 += VAR_3 + VAR_60;


   VAR_54 = (ATTRIBUTE_ENTRY *) ((uint8_t *) VAR_50 + VAR_49);
   VAR_54->ad.bits.AttrType = FUNC_1(VAR_34);
   FUNC_19(VAR_54->un.SerialNumber, VAR_44->SerialNumber);
   VAR_60 = FUNC_20(VAR_54->un.SerialNumber);
   VAR_60 += (VAR_60 & 3) ? (4 - (VAR_60 & 3)) : 4;
   VAR_54->ad.bits.AttrLen = FUNC_1(VAR_3 + VAR_60);
   VAR_53->EntryCnt++;
   VAR_49 += VAR_3 + VAR_60;


   VAR_54 = (ATTRIBUTE_ENTRY *) ((uint8_t *) VAR_50 + VAR_49);
   VAR_54->ad.bits.AttrType = FUNC_1(VAR_27);
   FUNC_19(VAR_54->un.Model, VAR_44->ModelName);
   VAR_60 = FUNC_20(VAR_54->un.Model);
   VAR_60 += (VAR_60 & 3) ? (4 - (VAR_60 & 3)) : 4;
   VAR_54->ad.bits.AttrLen = FUNC_1(VAR_3 + VAR_60);
   VAR_53->EntryCnt++;
   VAR_49 += VAR_3 + VAR_60;


   VAR_54 = (ATTRIBUTE_ENTRY *) ((uint8_t *) VAR_50 + VAR_49);
   VAR_54->ad.bits.AttrType = FUNC_1(VAR_28);
   FUNC_19(VAR_54->un.ModelDescription, VAR_44->ModelDesc);
   VAR_60 = FUNC_20(VAR_54->un.ModelDescription);
   VAR_60 += (VAR_60 & 3) ? (4 - (VAR_60 & 3)) : 4;
   VAR_54->ad.bits.AttrLen = FUNC_1(VAR_3 + VAR_60);
   VAR_53->EntryCnt++;
   VAR_49 += VAR_3 + VAR_60;


   VAR_54 = (ATTRIBUTE_ENTRY *) ((uint8_t *) VAR_50 + VAR_49);
   VAR_54->ad.bits.AttrType = FUNC_1(VAR_6);
   VAR_54->ad.bits.AttrLen = FUNC_1(VAR_3 + 8);

   VAR_59 = VAR_56->rev.biuRev;
   for (VAR_57 = 0; VAR_57 < 8; VAR_57++) {
    VAR_58 = (VAR_59 & 0xf);
    if (VAR_58 <= 9)
     VAR_54->un.HardwareVersion[7 - VAR_57] =
         (char)((uint8_t) 0x30 +
         (uint8_t) VAR_58);
    else
     VAR_54->un.HardwareVersion[7 - VAR_57] =
         (char)((uint8_t) 0x61 +
         (uint8_t) (VAR_58 - 10));
    VAR_59 = (VAR_59 >> 4);
   }
   VAR_53->EntryCnt++;
   VAR_49 += VAR_3 + 8;


   VAR_54 = (ATTRIBUTE_ENTRY *) ((uint8_t *) VAR_50 + VAR_49);
   VAR_54->ad.bits.AttrType = FUNC_1(VAR_0);
   FUNC_19(VAR_54->un.DriverVersion, VAR_40);
   VAR_60 = FUNC_20(VAR_54->un.DriverVersion);
   VAR_60 += (VAR_60 & 3) ? (4 - (VAR_60 & 3)) : 4;
   VAR_54->ad.bits.AttrLen = FUNC_1(VAR_3 + VAR_60);
   VAR_53->EntryCnt++;
   VAR_49 += VAR_3 + VAR_60;


   VAR_54 = (ATTRIBUTE_ENTRY *) ((uint8_t *) VAR_50 + VAR_49);
   VAR_54->ad.bits.AttrType = FUNC_1(VAR_30);
   FUNC_19(VAR_54->un.OptionROMVersion, VAR_44->OptionROMVersion);
   VAR_60 = FUNC_20(VAR_54->un.OptionROMVersion);
   VAR_60 += (VAR_60 & 3) ? (4 - (VAR_60 & 3)) : 4;
   VAR_54->ad.bits.AttrLen = FUNC_1(VAR_3 + VAR_60);
   VAR_53->EntryCnt++;
   VAR_49 += VAR_3 + VAR_60;


   VAR_54 = (ATTRIBUTE_ENTRY *) ((uint8_t *) VAR_50 + VAR_49);
   VAR_54->ad.bits.AttrType = FUNC_1(VAR_2);
   FUNC_9(VAR_44, VAR_54->un.FirmwareVersion,
    1);
   VAR_60 = FUNC_20(VAR_54->un.FirmwareVersion);
   VAR_60 += (VAR_60 & 3) ? (4 - (VAR_60 & 3)) : 4;
   VAR_54->ad.bits.AttrLen = FUNC_1(VAR_3 + VAR_60);
   VAR_53->EntryCnt++;
   VAR_49 += VAR_3 + VAR_60;


   VAR_54 = (ATTRIBUTE_ENTRY *) ((uint8_t *) VAR_50 + VAR_49);
   VAR_54->ad.bits.AttrType = FUNC_1(VAR_32);
   FUNC_18(VAR_54->un.OsNameVersion, "%s %s %s",
    FUNC_3()->sysname,
    FUNC_3()->release,
    FUNC_3()->version);
   VAR_60 = FUNC_20(VAR_54->un.OsNameVersion);
   VAR_60 += (VAR_60 & 3) ? (4 - (VAR_60 & 3)) : 4;
   VAR_54->ad.bits.AttrLen = FUNC_1(VAR_3 + VAR_60);
   VAR_53->EntryCnt++;
   VAR_49 += VAR_3 + VAR_60;


   VAR_54 = (ATTRIBUTE_ENTRY *) ((uint8_t *) VAR_50 + VAR_49);
   VAR_54->ad.bits.AttrType = FUNC_1(VAR_25);
   VAR_54->ad.bits.AttrLen = FUNC_1(VAR_3 + 4);
   VAR_54->un.MaxCTPayloadLen = (65 * 4096);
   VAR_53->EntryCnt++;
   VAR_49 += VAR_3 + 4;

   VAR_53->EntryCnt = FUNC_2(VAR_53->EntryCnt);

   VAR_49 = VAR_5 - 4 + VAR_49;
  }
  break;

 case 128:
  {
   lpfc_vpd_t *VAR_61;
   struct serv_parm *VAR_62;
   int VAR_63;

   VAR_61 = &VAR_44->vpd;

   VAR_47->CommandResponse.bits.CmdRsp =
       FUNC_1(128);
   VAR_47->CommandResponse.bits.Size = 0;
   VAR_52 = (REG_PORT_ATTRIBUTE *) & VAR_47->un.PortID;
   VAR_49 = sizeof (struct lpfc_name) + VAR_3;
   FUNC_14((uint8_t *) & VAR_52->PortName,
          (uint8_t *) & VAR_41->fc_sparam.portName,
          sizeof (struct lpfc_name));
   VAR_52->ab.EntryCnt = 0;


   VAR_54 = (ATTRIBUTE_ENTRY *) ((uint8_t *) VAR_52 + VAR_49);
   VAR_54->ad.bits.AttrType = FUNC_1(VAR_38);
   VAR_54->ad.bits.AttrLen = FUNC_1(VAR_3 + 32);
   VAR_54->un.SupportFC4Types[2] = 1;
   VAR_54->un.SupportFC4Types[7] = 1;
   VAR_52->ab.EntryCnt++;
   VAR_49 += VAR_3 + 32;


   VAR_54 = (ATTRIBUTE_ENTRY *) ((uint8_t *) VAR_52 + VAR_49);
   VAR_54->ad.bits.AttrType = FUNC_1(VAR_39);
   VAR_54->ad.bits.AttrLen = FUNC_1(VAR_3 + 4);

   VAR_54->un.SupportSpeed = 0;
   if (VAR_44->lmt & VAR_17)
    VAR_54->un.SupportSpeed |= VAR_8;
   if (VAR_44->lmt & VAR_16)
    VAR_54->un.SupportSpeed |= VAR_7;
   if (VAR_44->lmt & VAR_21)
    VAR_54->un.SupportSpeed |= VAR_12;
   if (VAR_44->lmt & VAR_20)
    VAR_54->un.SupportSpeed |= VAR_11;
   if (VAR_44->lmt & VAR_19)
    VAR_54->un.SupportSpeed |= VAR_10;
   if (VAR_44->lmt & VAR_18)
    VAR_54->un.SupportSpeed |= VAR_9;

   VAR_52->ab.EntryCnt++;
   VAR_49 += VAR_3 + 4;


   VAR_54 = (ATTRIBUTE_ENTRY *) ((uint8_t *) VAR_52 + VAR_49);
   VAR_54->ad.bits.AttrType = FUNC_1(VAR_33);
   VAR_54->ad.bits.AttrLen = FUNC_1(VAR_3 + 4);
   switch(VAR_44->fc_linkspeed) {
   case 135:
    VAR_54->un.PortSpeed = VAR_9;
    break;
   case 134:
    VAR_54->un.PortSpeed = VAR_10;
    break;
   case 133:
    VAR_54->un.PortSpeed = VAR_11;
    break;
   case 132:
    VAR_54->un.PortSpeed = VAR_12;
    break;
   case 137:
    VAR_54->un.PortSpeed = VAR_7;
    break;
   case 136:
    VAR_54->un.PortSpeed = VAR_8;
    break;
   default:
    VAR_54->un.PortSpeed = VAR_13;
    break;
   }
   VAR_52->ab.EntryCnt++;
   VAR_49 += VAR_3 + 4;


   VAR_54 = (ATTRIBUTE_ENTRY *) ((uint8_t *) VAR_52 + VAR_49);
   VAR_54->ad.bits.AttrType = FUNC_1(VAR_26);
   VAR_54->ad.bits.AttrLen = FUNC_1(VAR_3 + 4);
   VAR_62 = (struct serv_parm *) & VAR_41->fc_sparam;
   VAR_54->un.MaxFrameSize =
       (((uint32_t) VAR_62->cmn.
         bbRcvSizeMsb) << 8) | (uint32_t) VAR_62->cmn.
       bbRcvSizeLsb;
   VAR_52->ab.EntryCnt++;
   VAR_49 += VAR_3 + 4;


   VAR_54 = (ATTRIBUTE_ENTRY *) ((uint8_t *) VAR_52 + VAR_49);
   VAR_54->ad.bits.AttrType = FUNC_1(VAR_31);
   FUNC_19((char *)VAR_54->un.OsDeviceName, VAR_23);
   VAR_63 = FUNC_20((char *)VAR_54->un.OsDeviceName);
   VAR_63 += (VAR_63 & 3) ? (4 - (VAR_63 & 3)) : 4;
   VAR_54->ad.bits.AttrLen = FUNC_1(VAR_3 + VAR_63);
   VAR_52->ab.EntryCnt++;
   VAR_49 += VAR_3 + VAR_63;

   if (VAR_41->cfg_fdmi_on == 2) {

    VAR_54 = (ATTRIBUTE_ENTRY *) ((uint8_t *) VAR_52 +
         VAR_49);
    VAR_54->ad.bits.AttrType = FUNC_1(VAR_14);
    FUNC_18(VAR_54->un.HostName, "%s",
     FUNC_3()->nodename);
    VAR_63 = FUNC_20(VAR_54->un.HostName);
    VAR_63 += (VAR_63 & 3) ? (4 - (VAR_63 & 3)) : 4;
    VAR_54->ad.bits.AttrLen =
        FUNC_1(VAR_3 + VAR_63);
    VAR_52->ab.EntryCnt++;
    VAR_49 += VAR_3 + VAR_63;
   }

   VAR_52->ab.EntryCnt = FUNC_2(VAR_52->ab.EntryCnt);

   VAR_49 = VAR_5 - 4 + VAR_49;
  }
  break;

 case 131:
  VAR_47->CommandResponse.bits.CmdRsp = FUNC_1(131);
  VAR_47->CommandResponse.bits.Size = 0;
  VAR_51 = (PORT_ENTRY *) & VAR_47->un.PortID;
  FUNC_14((uint8_t *) & VAR_51->PortName,
         (uint8_t *) & VAR_41->fc_sparam.portName,
         sizeof (struct lpfc_name));
  VAR_49 = VAR_5 - 4 + sizeof (struct lpfc_name);
  break;

 case 130:
  VAR_47->CommandResponse.bits.CmdRsp = FUNC_1(130);
  VAR_47->CommandResponse.bits.Size = 0;
  VAR_51 = (PORT_ENTRY *) & VAR_47->un.PortID;
  FUNC_14((uint8_t *) & VAR_51->PortName,
         (uint8_t *) & VAR_41->fc_sparam.portName,
         sizeof (struct lpfc_name));
  VAR_49 = VAR_5 - 4 + sizeof (struct lpfc_name);
  break;
 }

 VAR_48 = (struct ulp_bde64 *) VAR_46->virt;
 VAR_48->addrHigh = FUNC_6(FUNC_16(VAR_45->phys) );
 VAR_48->addrLow = FUNC_6(FUNC_17(VAR_45->phys) );
 VAR_48->tus.f.bdeFlags = 0;
 VAR_48->tus.f.bdeSize = VAR_49;
 VAR_48->tus.w = FUNC_6(VAR_48->tus.w);

 VAR_55 = FUNC_7;




 if (!FUNC_8(VAR_41, VAR_45, VAR_46, VAR_42, VAR_55, VAR_1, 0))
  return 0;




 FUNC_12(VAR_42);

 FUNC_11(VAR_44, VAR_46->virt, VAR_46->phys);
fdmi_cmd_free_bmp:
 FUNC_4(VAR_46);
fdmi_cmd_free_mpvirt:
 FUNC_11(VAR_44, VAR_45->virt, VAR_45->phys);
fdmi_cmd_free_mp:
 FUNC_4(VAR_45);
fdmi_cmd_exit:

 FUNC_13(VAR_41, VAR_15, VAR_22,
    "0244 Issue FDMI request failed Data: x%x\n",
    VAR_43);
 return 1;
}
