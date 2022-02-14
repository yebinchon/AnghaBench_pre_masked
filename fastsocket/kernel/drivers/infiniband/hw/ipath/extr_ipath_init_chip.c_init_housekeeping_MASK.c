
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct ipath_devdata {int ipath_flags; int ipath_revision; int ipath_sregbase; int ipath_cregbase; int ipath_uregbase; int ipath_pcirev; int ipath_majrev; int ipath_minrev; int (* ipath_f_get_boardname ) (struct ipath_devdata*,char*,int) ;int ipath_boardversion; void* ipath_boardrev; TYPE_1__* ipath_kregs; int ipath_kregbase; scalar_t__ ipath_rcvhdrsize; } ;
struct TYPE_2__ {int kr_errorclear; int kr_hwdiagctrl; int kr_userregbase; int kr_counterregbase; int kr_sendregbase; int kr_revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
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
 int FUNC_0 (struct ipath_devdata*) ;
 int FUNC_1 (struct ipath_devdata*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct ipath_devdata*,char*,...) ;
 void* FUNC_5 (struct ipath_devdata*,int ) ;
 int FUNC_6 (struct ipath_devdata*,int ) ;
 int FUNC_7 (struct ipath_devdata*,int ,int ) ;
 int FUNC_8 (int ,int,char*,int,int,char*,unsigned int,int,int,int,unsigned int) ;
 int FUNC_9 (struct ipath_devdata*,char*,int) ;

__attribute__((used)) static int FUNC_10(struct ipath_devdata *VAR_23, int VAR_24)
{
 char VAR_25[40];
 int VAR_26 = 0;






 VAR_23->ipath_rcvhdrsize = 0;
 VAR_23->ipath_flags |= VAR_20 | VAR_21;
 VAR_23->ipath_flags &= ~(VAR_16 | VAR_17 |
        VAR_18 | VAR_19);

 FUNC_2(VAR_22, "Try to read spc chip revision\n");
 VAR_23->ipath_revision =
  FUNC_6(VAR_23, VAR_23->ipath_kregs->kr_revision);






 VAR_23->ipath_sregbase =
  FUNC_5(VAR_23, VAR_23->ipath_kregs->kr_sendregbase);
 VAR_23->ipath_cregbase =
  FUNC_5(VAR_23, VAR_23->ipath_kregs->kr_counterregbase);
 VAR_23->ipath_uregbase =
  FUNC_5(VAR_23, VAR_23->ipath_kregs->kr_userregbase);
 FUNC_2(VAR_22, "ipath_kregbase %p, sendbase %x usrbase %x, "
     "cntrbase %x\n", VAR_23->ipath_kregbase, VAR_23->ipath_sregbase,
     VAR_23->ipath_uregbase, VAR_23->ipath_cregbase);
 if ((VAR_23->ipath_revision & 0xffffffff) == 0xffffffff
     || (VAR_23->ipath_sregbase & 0xffffffff) == 0xffffffff
     || (VAR_23->ipath_cregbase & 0xffffffff) == 0xffffffff
     || (VAR_23->ipath_uregbase & 0xffffffff) == 0xffffffff) {
  FUNC_4(VAR_23, "Register read failures from chip, "
         "giving up initialization\n");
  VAR_23->ipath_flags &= ~VAR_21;
  VAR_26 = -VAR_0;
  goto done;
 }



 FUNC_7 (VAR_23, VAR_23->ipath_kregs->kr_hwdiagctrl, 0);


 FUNC_7(VAR_23, VAR_23->ipath_kregs->kr_errorclear,
    VAR_2);

 FUNC_2(VAR_22, "Revision %llx (PCI %x)\n",
     (unsigned long long) VAR_23->ipath_revision,
     VAR_23->ipath_pcirev);

 if (((VAR_23->ipath_revision >> VAR_12) &
      VAR_11) != VAR_13) {
  FUNC_4(VAR_23, "Driver only handles version %d, "
         "chip swversion is %d (%llx), failng\n",
         VAR_13,
         (int)(VAR_23->ipath_revision >>
        VAR_12) &
         VAR_11,
         (unsigned long long) VAR_23->ipath_revision);
  VAR_26 = -VAR_1;
  goto done;
 }
 VAR_23->ipath_majrev = (u8) ((VAR_23->ipath_revision >>
      VAR_8) &
     VAR_7);
 VAR_23->ipath_minrev = (u8) ((VAR_23->ipath_revision >>
      VAR_10) &
     VAR_9);
 VAR_23->ipath_boardrev = (u8) ((VAR_23->ipath_revision >>
        VAR_6) &
       VAR_5);

 VAR_26 = VAR_23->ipath_f_get_boardname(VAR_23, VAR_25, sizeof VAR_25);

 FUNC_8(VAR_23->ipath_boardversion, sizeof(VAR_23->ipath_boardversion),
   "ChipABI %u.%u, %s, InfiniPath%u %u.%u, PCI %u, "
   "SW Compat %u\n",
   VAR_14, VAR_15, VAR_25,
   (unsigned)(VAR_23->ipath_revision >> VAR_4) &
   VAR_3,
   VAR_23->ipath_majrev, VAR_23->ipath_minrev, VAR_23->ipath_pcirev,
   (unsigned)(VAR_23->ipath_revision >>
       VAR_12) &
   VAR_11);

 FUNC_3("%s", VAR_23->ipath_boardversion);

 if (VAR_26)
  goto done;

 if (VAR_24)
  VAR_26 = FUNC_1(VAR_23);
 else
  VAR_26 = FUNC_0(VAR_23);

done:
 return VAR_26;
}
