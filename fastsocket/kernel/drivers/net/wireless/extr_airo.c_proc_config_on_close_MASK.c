
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct proc_dir_entry {struct net_device* data; } ;
struct proc_data {char* wbuffer; int writelen; } ;
struct net_device {struct airo_info* ml_priv; } ;
struct inode {int dummy; } ;
struct file {struct proc_data* private_data; } ;
struct TYPE_3__ {int rmode; char* nodeName; int txDiversity; int rxDiversity; int preamble; int modulation; void* fragThresh; void* rxLifetime; void* txLifetime; void* rtsThres; void* shortRetryLimit; void* longRetryLimit; int authType; void* txPower; void* channelSet; scalar_t__* rates; int powerSaveMode; void* scanMode; int opmode; } ;
struct airo_info {TYPE_2__* dev; int flags; TYPE_1__ config; } ;
struct TYPE_4__ {int name; } ;


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
 struct proc_dir_entry* FUNC_0 (struct inode*) ;
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
 void* VAR_25 ;
 void* VAR_26 ;
 int FUNC_1 (struct net_device*,int *,int *,int *) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,int *) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (char*,int*,int) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (struct airo_info*,int) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (struct airo_info*) ;
 int FUNC_10 (char*,char*,int) ;

__attribute__((used)) static void FUNC_11(struct inode *VAR_27, struct file *VAR_28)
{
 struct proc_data *VAR_29 = VAR_28->private_data;
 struct proc_dir_entry *VAR_30 = FUNC_0(VAR_27);
 struct net_device *VAR_31 = VAR_30->data;
 struct airo_info *VAR_32 = VAR_31->ml_priv;
 char *VAR_33;

 if ( !VAR_29->writelen ) return;

 FUNC_7(VAR_32, 1);
 FUNC_8 (VAR_5, &VAR_32->flags);

 VAR_33 = VAR_29->wbuffer;
 while( VAR_33[0] ) {

  if ( !FUNC_10( VAR_33, "Mode: ", 6 ) ) {
   VAR_33 += 6;
   if (FUNC_9(VAR_32))
    FUNC_8 (VAR_7, &VAR_32->flags);
   VAR_32->config.rmode &= ~VAR_21;
   FUNC_3 (VAR_4, &VAR_32->flags);
   VAR_32->config.opmode &= ~VAR_8;
   VAR_32->config.scanMode = VAR_25;
   if ( VAR_33[0] == 'a' ) {
    VAR_32->config.opmode |= VAR_10;
   } else {
    VAR_32->config.opmode |= VAR_9;
    if ( VAR_33[0] == 'r' ) {
     VAR_32->config.rmode |= VAR_23 | VAR_20;
     VAR_32->config.scanMode = VAR_26;
     FUNC_8 (VAR_4, &VAR_32->flags);
    } else if ( VAR_33[0] == 'y' ) {
     VAR_32->config.rmode |= VAR_24 | VAR_20;
     VAR_32->config.scanMode = VAR_26;
     FUNC_8 (VAR_4, &VAR_32->flags);
    } else if ( VAR_33[0] == 'l' )
     VAR_32->config.rmode |= VAR_22;
   }
   FUNC_8 (VAR_5, &VAR_32->flags);
  }


  else if (!FUNC_10(VAR_33,"Radio: ", 7)) {
   VAR_33 += 7;
   if (!FUNC_10(VAR_33,"off",3)) {
    FUNC_8 (VAR_6, &VAR_32->flags);
   } else {
    FUNC_3 (VAR_6, &VAR_32->flags);
   }
  }

  else if ( !FUNC_10( VAR_33, "NodeName: ", 10 ) ) {
   int VAR_34;

   VAR_33 += 10;
   FUNC_6( VAR_32->config.nodeName, 0, 16 );

   for( VAR_34 = 0; VAR_34 < 16 && VAR_33[VAR_34] != '\n'; VAR_34++ ) {
    VAR_32->config.nodeName[VAR_34] = VAR_33[VAR_34];
   }
   FUNC_8 (VAR_5, &VAR_32->flags);
  }


  else if ( !FUNC_10( VAR_33, "PowerMode: ", 11 ) ) {
   VAR_33 += 11;
   if ( !FUNC_10( VAR_33, "PSPCAM", 6 ) ) {
    VAR_32->config.powerSaveMode = VAR_16;
    FUNC_8 (VAR_5, &VAR_32->flags);
   } else if ( !FUNC_10( VAR_33, "PSP", 3 ) ) {
    VAR_32->config.powerSaveMode = VAR_15;
    FUNC_8 (VAR_5, &VAR_32->flags);
   } else {
    VAR_32->config.powerSaveMode = VAR_14;
    FUNC_8 (VAR_5, &VAR_32->flags);
   }
  } else if ( !FUNC_10( VAR_33, "DataRates: ", 11 ) ) {
   int VAR_35, VAR_36 = 0, VAR_37 = 0;


   VAR_33 += 11;
   while((VAR_35 = FUNC_5(VAR_33, &VAR_36, 3))!=-1) {
    VAR_32->config.rates[VAR_37++] = (u8)VAR_35;
    VAR_33 += VAR_36 + 1;
    VAR_36 = 0;
   }
   FUNC_8 (VAR_5, &VAR_32->flags);
  } else if ( !FUNC_10( VAR_33, "Channel: ", 9 ) ) {
   int VAR_38, VAR_39 = 0;
   VAR_33 += 9;
   VAR_38 = FUNC_5(VAR_33, &VAR_39, VAR_39+3);
   if ( VAR_38 != -1 ) {
    VAR_32->config.channelSet = FUNC_4(VAR_38);
    FUNC_8 (VAR_5, &VAR_32->flags);
   }
  } else if ( !FUNC_10( VAR_33, "XmitPower: ", 11 ) ) {
   int VAR_40, VAR_41 = 0;
   VAR_33 += 11;
   VAR_40 = FUNC_5(VAR_33, &VAR_41, VAR_41+3);
   if ( VAR_40 != -1 ) {
    VAR_32->config.txPower = FUNC_4(VAR_40);
    FUNC_8 (VAR_5, &VAR_32->flags);
   }
  } else if ( !FUNC_10( VAR_33, "WEP: ", 5 ) ) {
   VAR_33 += 5;
   switch( VAR_33[0] ) {
   case 's':
    VAR_32->config.authType = VAR_3;
    break;
   case 'e':
    VAR_32->config.authType = VAR_1;
    break;
   default:
    VAR_32->config.authType = VAR_2;
    break;
   }
   FUNC_8 (VAR_5, &VAR_32->flags);
  } else if ( !FUNC_10( VAR_33, "LongRetryLimit: ", 16 ) ) {
   int VAR_42, VAR_43 = 0;

   VAR_33 += 16;
   VAR_42 = FUNC_5(VAR_33, &VAR_43, 3);
   VAR_42 = (VAR_42<0) ? 0 : ((VAR_42>255) ? 255 : VAR_42);
   VAR_32->config.longRetryLimit = FUNC_4(VAR_42);
   FUNC_8 (VAR_5, &VAR_32->flags);
  } else if ( !FUNC_10( VAR_33, "ShortRetryLimit: ", 17 ) ) {
   int VAR_44, VAR_45 = 0;

   VAR_33 += 17;
   VAR_44 = FUNC_5(VAR_33, &VAR_45, 3);
   VAR_44 = (VAR_44<0) ? 0 : ((VAR_44>255) ? 255 : VAR_44);
   VAR_32->config.shortRetryLimit = FUNC_4(VAR_44);
   FUNC_8 (VAR_5, &VAR_32->flags);
  } else if ( !FUNC_10( VAR_33, "RTSThreshold: ", 14 ) ) {
   int VAR_46, VAR_47 = 0;

   VAR_33 += 14;
   VAR_46 = FUNC_5(VAR_33, &VAR_47, 4);
   VAR_46 = (VAR_46<0) ? 0 : ((VAR_46>VAR_0) ? VAR_0 : VAR_46);
   VAR_32->config.rtsThres = FUNC_4(VAR_46);
   FUNC_8 (VAR_5, &VAR_32->flags);
  } else if ( !FUNC_10( VAR_33, "TXMSDULifetime: ", 16 ) ) {
   int VAR_48, VAR_49 = 0;

   VAR_33 += 16;
   VAR_48 = FUNC_5(VAR_33, &VAR_49, 5);
   VAR_48 = (VAR_48<0) ? 0 : VAR_48;
   VAR_32->config.txLifetime = FUNC_4(VAR_48);
   FUNC_8 (VAR_5, &VAR_32->flags);
  } else if ( !FUNC_10( VAR_33, "RXMSDULifetime: ", 16 ) ) {
   int VAR_50, VAR_51 = 0;

   VAR_33 += 16;
   VAR_50 = FUNC_5(VAR_33, &VAR_51, 5);
   VAR_50 = (VAR_50<0) ? 0 : VAR_50;
   VAR_32->config.rxLifetime = FUNC_4(VAR_50);
   FUNC_8 (VAR_5, &VAR_32->flags);
  } else if ( !FUNC_10( VAR_33, "TXDiversity: ", 13 ) ) {
   VAR_32->config.txDiversity =
    (VAR_33[13]=='l') ? 1 :
    ((VAR_33[13]=='r')? 2: 3);
   FUNC_8 (VAR_5, &VAR_32->flags);
  } else if ( !FUNC_10( VAR_33, "RXDiversity: ", 13 ) ) {
   VAR_32->config.rxDiversity =
    (VAR_33[13]=='l') ? 1 :
    ((VAR_33[13]=='r')? 2: 3);
   FUNC_8 (VAR_5, &VAR_32->flags);
  } else if ( !FUNC_10( VAR_33, "FragThreshold: ", 15 ) ) {
   int VAR_52, VAR_53 = 0;

   VAR_33 += 15;
   VAR_52 = FUNC_5(VAR_33, &VAR_53, 4);
   VAR_52 = (VAR_52<256) ? 256 : ((VAR_52>VAR_0) ? VAR_0 : VAR_52);
   VAR_52 = VAR_52 & 0xfffe;
   VAR_32->config.fragThresh = FUNC_4(VAR_52);
   FUNC_8 (VAR_5, &VAR_32->flags);
  } else if (!FUNC_10(VAR_33, "Modulation: ", 12)) {
   VAR_33 += 12;
   switch(*VAR_33) {
   case 'd': VAR_32->config.modulation=VAR_12; FUNC_8(VAR_5, &VAR_32->flags); break;
   case 'c': VAR_32->config.modulation=VAR_11; FUNC_8(VAR_5, &VAR_32->flags); break;
   case 'm': VAR_32->config.modulation=VAR_13; FUNC_8(VAR_5, &VAR_32->flags); break;
   default: FUNC_2(VAR_32->dev->name, "Unknown modulation");
   }
  } else if (!FUNC_10(VAR_33, "Preamble: ", 10)) {
   VAR_33 += 10;
   switch(*VAR_33) {
   case 'a': VAR_32->config.preamble=VAR_17; FUNC_8(VAR_5, &VAR_32->flags); break;
   case 'l': VAR_32->config.preamble=VAR_18; FUNC_8(VAR_5, &VAR_32->flags); break;
   case 's': VAR_32->config.preamble=VAR_19; FUNC_8(VAR_5, &VAR_32->flags); break;
   default: FUNC_2(VAR_32->dev->name, "Unknown preamble");
   }
  } else {
   FUNC_2(VAR_32->dev->name, "Couldn't figure out %s", VAR_33);
  }
  while( VAR_33[0] && VAR_33[0] != '\n' ) VAR_33++;
  if ( VAR_33[0] ) VAR_33++;
 }
 FUNC_1(VAR_31, ((void*)0), ((void*)0), ((void*)0));
}
