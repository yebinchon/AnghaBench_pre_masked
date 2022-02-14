
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int substring_t ;
struct TYPE_7__ {int * raw; } ;
struct TYPE_8__ {void* service_id; int pkey; TYPE_1__ dgid; } ;
struct srp_target_port {int io_class; int cmd_sg_cnt; int allow_ext_sg; int sg_tablesize; void* initiator_ext; TYPE_3__* scsi_host; void* service_id; TYPE_2__ path; int orig_dgid; void* ioc_guid; void* id_ext; } ;
struct TYPE_10__ {int token; char* pattern; } ;
struct TYPE_9__ {int max_sectors; int cmd_per_lun; } ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*,int ) ;
 int FUNC_5 (int *,int*) ;
 int FUNC_6 (int *,int*) ;
 char* FUNC_7 (int *) ;
 int FUNC_8 (char*,TYPE_4__*,int *) ;
 int FUNC_9 (int ,int *,int) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (char*,int *,int) ;
 int FUNC_13 (char*,int *,int) ;
 TYPE_4__* VAR_9 ;
 int FUNC_14 (char*,char*,int) ;
 int FUNC_15 (char*) ;
 char* FUNC_16 (char**,char*) ;

__attribute__((used)) static int FUNC_17(const char *VAR_10, struct srp_target_port *VAR_11)
{
 char *VAR_12, *VAR_13;
 char *VAR_14;
 char VAR_15[3];
 substring_t VAR_16[VAR_3];
 int VAR_17 = 0;
 int VAR_18;
 int VAR_19 = -VAR_0;
 int VAR_20;

 VAR_12 = FUNC_4(VAR_10, VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_13 = VAR_12;
 while ((VAR_14 = FUNC_16(&VAR_13, ",")) != ((void*)0)) {
  if (!*VAR_14)
   continue;

  VAR_18 = FUNC_8(VAR_14, VAR_9, VAR_16);
  VAR_17 |= VAR_18;

  switch (VAR_18) {
  case 136:
   VAR_14 = FUNC_7(VAR_16);
   if (!VAR_14) {
    VAR_19 = -VAR_1;
    goto out;
   }
   VAR_11->id_ext = FUNC_2(FUNC_13(VAR_14, ((void*)0), 16));
   FUNC_3(VAR_14);
   break;

  case 134:
   VAR_14 = FUNC_7(VAR_16);
   if (!VAR_14) {
    VAR_19 = -VAR_1;
    goto out;
   }
   VAR_11->ioc_guid = FUNC_2(FUNC_13(VAR_14, ((void*)0), 16));
   FUNC_3(VAR_14);
   break;

  case 137:
   VAR_14 = FUNC_7(VAR_16);
   if (!VAR_14) {
    VAR_19 = -VAR_1;
    goto out;
   }
   if (FUNC_15(VAR_14) != 32) {
    FUNC_11("bad dest GID parameter '%s'\n", VAR_14);
    FUNC_3(VAR_14);
    goto out;
   }

   for (VAR_20 = 0; VAR_20 < 16; ++VAR_20) {
    FUNC_14(VAR_15, VAR_14 + VAR_20 * 2, 3);
    VAR_11->path.dgid.raw[VAR_20] = FUNC_12(VAR_15, ((void*)0), 16);
   }
   FUNC_3(VAR_14);
   FUNC_9(VAR_11->orig_dgid, VAR_11->path.dgid.raw, 16);
   break;

  case 130:
   if (FUNC_5(VAR_16, &VAR_18)) {
    FUNC_11("bad P_Key parameter '%s'\n", VAR_14);
    goto out;
   }
   VAR_11->path.pkey = FUNC_1(VAR_18);
   break;

  case 129:
   VAR_14 = FUNC_7(VAR_16);
   if (!VAR_14) {
    VAR_19 = -VAR_1;
    goto out;
   }
   VAR_11->service_id = FUNC_2(FUNC_13(VAR_14, ((void*)0), 16));
   VAR_11->path.service_id = VAR_11->service_id;
   FUNC_3(VAR_14);
   break;

  case 131:
   if (FUNC_6(VAR_16, &VAR_18)) {
    FUNC_11("bad max sect parameter '%s'\n", VAR_14);
    goto out;
   }
   VAR_11->scsi_host->max_sectors = VAR_18;
   break;

  case 132:
   if (FUNC_6(VAR_16, &VAR_18)) {
    FUNC_11("bad max cmd_per_lun parameter '%s'\n",
     VAR_14);
    goto out;
   }
   VAR_11->scsi_host->cmd_per_lun = FUNC_10(VAR_18, VAR_5);
   break;

  case 133:
   if (FUNC_5(VAR_16, &VAR_18)) {
    FUNC_11("bad IO class parameter '%s'\n", VAR_14);
    goto out;
   }
   if (VAR_18 != VAR_7 &&
       VAR_18 != VAR_8) {
    FUNC_11("unknown IO class parameter value %x specified (use %x or %x).\n",
     VAR_18, VAR_7,
     VAR_8);
    goto out;
   }
   VAR_11->io_class = VAR_18;
   break;

  case 135:
   VAR_14 = FUNC_7(VAR_16);
   if (!VAR_14) {
    VAR_19 = -VAR_1;
    goto out;
   }
   VAR_11->initiator_ext = FUNC_2(FUNC_13(VAR_14, ((void*)0), 16));
   FUNC_3(VAR_14);
   break;

  case 138:
   if (FUNC_6(VAR_16, &VAR_18) || VAR_18 < 1 || VAR_18 > 255) {
    FUNC_11("bad max cmd_sg_entries parameter '%s'\n",
     VAR_14);
    goto out;
   }
   VAR_11->cmd_sg_cnt = VAR_18;
   break;

  case 139:
   if (FUNC_6(VAR_16, &VAR_18)) {
    FUNC_11("bad allow_ext_sg parameter '%s'\n", VAR_14);
    goto out;
   }
   VAR_11->allow_ext_sg = !!VAR_18;
   break;

  case 128:
   if (FUNC_6(VAR_16, &VAR_18) || VAR_18 < 1 ||
     VAR_18 > VAR_4) {
    FUNC_11("bad max sg_tablesize parameter '%s'\n",
     VAR_14);
    goto out;
   }
   VAR_11->sg_tablesize = VAR_18;
   break;

  default:
   FUNC_11("unknown parameter or missing value '%s' in target creation request\n",
    VAR_14);
   goto out;
  }
 }

 if ((VAR_17 & VAR_6) == VAR_6)
  VAR_19 = 0;
 else
  for (VAR_20 = 0; VAR_20 < FUNC_0(VAR_9); ++VAR_20)
   if ((VAR_9[VAR_20].token & VAR_6) &&
       !(VAR_9[VAR_20].token & VAR_17))
    FUNC_11("target creation request is missing parameter '%s'\n",
     VAR_9[VAR_20].pattern);

out:
 FUNC_3(VAR_12);
 return VAR_19;
}
