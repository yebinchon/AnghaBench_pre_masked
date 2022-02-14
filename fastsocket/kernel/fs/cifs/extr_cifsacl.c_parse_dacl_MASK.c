
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct cifs_sid {int dummy; } ;
struct cifs_fattr {int cf_mode; } ;
struct cifs_acl {int num_aces; int size; int revision; } ;
struct cifs_ace {int size; int type; int access_req; int sid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int *,int*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,char*,int,int,int) ;
 scalar_t__ FUNC_3 (int *,struct cifs_sid*) ;
 int FUNC_4 (struct cifs_ace*,char*) ;
 int FUNC_5 (struct cifs_ace**) ;
 struct cifs_ace** FUNC_6 (int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct cifs_sid VAR_7 ;
 struct cifs_sid VAR_8 ;

__attribute__((used)) static void FUNC_9(struct cifs_acl *VAR_9, char *VAR_10,
         struct cifs_sid *VAR_11, struct cifs_sid *VAR_12,
         struct cifs_fattr *VAR_13)
{
 int VAR_14;
 int VAR_15 = 0;
 int VAR_16;
 char *VAR_17;
 struct cifs_ace **VAR_18;



 if (!VAR_9) {


  VAR_13->cf_mode |= VAR_5;
  return;
 }


 if (VAR_10 < (char *)VAR_9 + FUNC_7(VAR_9->size)) {
  FUNC_1(1, "ACL too small to parse DACL");
  return;
 }

 FUNC_2(VAR_0, "DACL revision %d size %d num aces %d",
  FUNC_7(VAR_9->revision), FUNC_7(VAR_9->size),
  FUNC_8(VAR_9->num_aces));




 VAR_13->cf_mode &= ~(VAR_5);

 VAR_17 = (char *)VAR_9;
 VAR_16 = sizeof(struct cifs_acl);

 VAR_15 = FUNC_8(VAR_9->num_aces);
 if (VAR_15 > 0) {
  umode_t VAR_19 = VAR_4;
  umode_t VAR_20 = VAR_2;
  umode_t VAR_21 = VAR_4 | VAR_2 | VAR_3;

  if (VAR_15 > VAR_6 / sizeof(struct cifs_ace *))
   return;
  VAR_18 = FUNC_6(VAR_15 * sizeof(struct cifs_ace *),
    VAR_1);
  if (!VAR_18) {
   FUNC_1(1, "DACL memory allocation error");
   return;
  }

  for (VAR_14 = 0; VAR_14 < VAR_15; ++VAR_14) {
   VAR_18[VAR_14] = (struct cifs_ace *) (VAR_17 + VAR_16);



   if (FUNC_3(&(VAR_18[VAR_14]->sid), VAR_11) == 0)
    FUNC_0(VAR_18[VAR_14]->access_req,
           VAR_18[VAR_14]->type,
           &VAR_13->cf_mode,
           &VAR_19);
   if (FUNC_3(&(VAR_18[VAR_14]->sid), VAR_12) == 0)
    FUNC_0(VAR_18[VAR_14]->access_req,
           VAR_18[VAR_14]->type,
           &VAR_13->cf_mode,
           &VAR_20);
   if (FUNC_3(&(VAR_18[VAR_14]->sid), &VAR_8) == 0)
    FUNC_0(VAR_18[VAR_14]->access_req,
           VAR_18[VAR_14]->type,
           &VAR_13->cf_mode,
           &VAR_21);
   if (FUNC_3(&(VAR_18[VAR_14]->sid), &VAR_7) == 0)
    FUNC_0(VAR_18[VAR_14]->access_req,
           VAR_18[VAR_14]->type,
           &VAR_13->cf_mode,
           &VAR_21);






   VAR_17 = (char *)VAR_18[VAR_14];
   VAR_16 = FUNC_7(VAR_18[VAR_14]->size);
  }

  FUNC_5(VAR_18);
 }

 return;
}
