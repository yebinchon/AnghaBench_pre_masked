
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {int stat_data_blocked; int stat_data_enabled; struct lpfc_hba* phba; } ;
struct lpfc_hba {unsigned long max_vports; unsigned long bucket_type; unsigned long bucket_base; unsigned long bucket_step; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int host_lock; scalar_t__ hostdata; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (struct lpfc_vport*) ;
 struct lpfc_vport** FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_vport**) ;
 int FUNC_4 (struct lpfc_vport*) ;
 struct Scsi_Host* FUNC_5 (struct lpfc_vport*) ;
 int FUNC_6 (struct lpfc_vport*) ;
 unsigned long FUNC_7 (char*,int *,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,char const*) ;
 int FUNC_11 (char const*) ;
 int FUNC_12 (char const*,char*,int) ;
 char* FUNC_13 (char**,char*) ;

__attribute__((used)) static ssize_t
FUNC_14(struct device *VAR_6, struct device_attribute *VAR_7,
     const char *VAR_8, size_t VAR_9)
{
 struct Scsi_Host *VAR_10 = FUNC_0(VAR_6);
 struct lpfc_vport *VAR_11 = (struct lpfc_vport *) VAR_10->hostdata;
 struct lpfc_hba *VAR_12 = VAR_11->phba;

 static char VAR_13[1024];
 unsigned long VAR_14;
 char *VAR_15, *VAR_16;
 struct lpfc_vport **VAR_17;
 struct Scsi_Host *VAR_18;
 char *VAR_19, *VAR_20, *VAR_21;
 unsigned long VAR_22, VAR_23, VAR_24;

 if (!FUNC_12(VAR_8, "setbucket", FUNC_11("setbucket"))) {
  if (FUNC_11(VAR_8) > (1024 - 1))
   return -VAR_0;

  FUNC_10(VAR_13, VAR_8);
  VAR_15 = &VAR_13[0];

  VAR_16 = FUNC_13(&VAR_15, "\t ");
  if (!VAR_16)
   return -VAR_0;

  VAR_19 = FUNC_13(&VAR_15, "\t ");
  if (!VAR_19)
   return -VAR_0;

  if (!FUNC_12(VAR_19, "linear", FUNC_11("linear")))
   VAR_24 = VAR_2;
  else if (!FUNC_12(VAR_19, "power2", FUNC_11("power2")))
   VAR_24 = VAR_5;
  else
   return -VAR_0;

  VAR_20 = FUNC_13(&VAR_15, "\t ");
  if (!VAR_20)
   return -VAR_0;
  VAR_22 = FUNC_7(VAR_20, ((void*)0), 0);

  VAR_21 = FUNC_13(&VAR_15, "\t ");
  if (!VAR_21)
   return -VAR_0;
  VAR_23 = FUNC_7(VAR_21, ((void*)0), 0);
  if (!VAR_23)
   return -VAR_0;


  VAR_17 = FUNC_2(VAR_12);
  if (VAR_17 == ((void*)0))
   return -VAR_1;

  for (VAR_14 = 0; VAR_14 <= VAR_12->max_vports && VAR_17[VAR_14] != ((void*)0); VAR_14++) {
   VAR_18 = FUNC_5(VAR_17[VAR_14]);
   FUNC_8(VAR_18->host_lock);

   VAR_17[VAR_14]->stat_data_blocked = 1;
   if (VAR_17[VAR_14]->stat_data_enabled)
    FUNC_6(VAR_17[VAR_14]);
   FUNC_9(VAR_18->host_lock);
  }


  VAR_12->bucket_type = VAR_24;
  VAR_12->bucket_base = VAR_22;
  VAR_12->bucket_step = VAR_23;

  for (VAR_14 = 0; VAR_14 <= VAR_12->max_vports && VAR_17[VAR_14] != ((void*)0); VAR_14++) {
   VAR_18 = FUNC_5(VAR_17[VAR_14]);


   FUNC_8(VAR_18->host_lock);
   VAR_17[VAR_14]->stat_data_blocked = 0;
   FUNC_9(VAR_18->host_lock);
  }
  FUNC_3(VAR_12, VAR_17);
  return FUNC_11(VAR_8);
 }

 if (!FUNC_12(VAR_8, "destroybucket", FUNC_11("destroybucket"))) {
  VAR_17 = FUNC_2(VAR_12);
  if (VAR_17 == ((void*)0))
   return -VAR_1;

  for (VAR_14 = 0; VAR_14 <= VAR_12->max_vports && VAR_17[VAR_14] != ((void*)0); VAR_14++) {
   VAR_18 = FUNC_5(VAR_17[VAR_14]);
   FUNC_8(VAR_10->host_lock);
   VAR_17[VAR_14]->stat_data_blocked = 1;
   FUNC_4(VAR_11);
   VAR_11->stat_data_enabled = 0;
   VAR_17[VAR_14]->stat_data_blocked = 0;
   FUNC_9(VAR_10->host_lock);
  }
  FUNC_3(VAR_12, VAR_17);
  VAR_12->bucket_type = VAR_4;
  VAR_12->bucket_base = 0;
  VAR_12->bucket_step = 0;
  return FUNC_11(VAR_8);
 }

 if (!FUNC_12(VAR_8, "start", FUNC_11("start"))) {

  if (VAR_12->bucket_type == VAR_4)
   return -VAR_0;
  FUNC_8(VAR_10->host_lock);
  if (VAR_11->stat_data_enabled) {
   FUNC_9(VAR_10->host_lock);
   return FUNC_11(VAR_8);
  }
  FUNC_1(VAR_11);
  VAR_11->stat_data_enabled = 1;
  FUNC_9(VAR_10->host_lock);
  return FUNC_11(VAR_8);
 }

 if (!FUNC_12(VAR_8, "stop", FUNC_11("stop"))) {
  FUNC_8(VAR_10->host_lock);
  if (VAR_11->stat_data_enabled == 0) {
   FUNC_9(VAR_10->host_lock);
   return FUNC_11(VAR_8);
  }
  FUNC_4(VAR_11);
  VAR_11->stat_data_enabled = 0;
  FUNC_9(VAR_10->host_lock);
  return FUNC_11(VAR_8);
 }

 if (!FUNC_12(VAR_8, "reset", FUNC_11("reset"))) {
  if ((VAR_12->bucket_type == VAR_4)
   || !VAR_11->stat_data_enabled)
   return FUNC_11(VAR_8);
  FUNC_8(VAR_10->host_lock);
  VAR_11->stat_data_blocked = 1;
  FUNC_6(VAR_11);
  VAR_11->stat_data_blocked = 0;
  FUNC_9(VAR_10->host_lock);
  return FUNC_11(VAR_8);
 }
 return -VAR_0;
}
