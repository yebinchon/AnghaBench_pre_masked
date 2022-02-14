
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl_summary {unsigned short owner; unsigned short users; unsigned short group; unsigned short groups; unsigned short other; unsigned short mask; } ;
struct posix_acl_entry {int e_perm; scalar_t__ e_tag; int e_id; } ;
struct posix_acl {int a_count; struct posix_acl_entry* a_entries; } ;
struct nfs4_acl {int naces; struct nfs4_ace* aces; } ;
struct nfs4_ace {int flag; void* whotype; void* access_mask; void* type; int who; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 void* FUNC_1 (unsigned short,unsigned int) ;
 void* FUNC_2 (int,unsigned int) ;
 int FUNC_3 (struct posix_acl*,struct posix_acl_summary*) ;

__attribute__((used)) static void
FUNC_4(struct posix_acl *VAR_14, struct nfs4_acl *VAR_15,
      unsigned int VAR_16)
{
 struct posix_acl_entry *VAR_17, *VAR_18;
 struct nfs4_ace *VAR_19;
 struct posix_acl_summary VAR_20;
 unsigned short VAR_21;
 int VAR_22 = ((VAR_16 & VAR_8) ?
  VAR_13 | VAR_6 : 0);

 FUNC_0(VAR_14->a_count < 3);
 FUNC_3(VAR_14, &VAR_20);

 VAR_17 = VAR_14->a_entries;
 VAR_19 = VAR_15->aces + VAR_15->naces;


 VAR_21 = ~VAR_20.owner;




 VAR_21 &= VAR_20.users | VAR_20.group | VAR_20.groups | VAR_20.other;
 if (VAR_21) {
  VAR_19->type = VAR_4;
  VAR_19->flag = VAR_22;
  VAR_19->access_mask = FUNC_1(VAR_21, VAR_16);
  VAR_19->whotype = VAR_12;
  VAR_19++;
  VAR_15->naces++;
 }

 VAR_19->type = VAR_3;
 VAR_19->flag = VAR_22;
 VAR_19->access_mask = FUNC_2(VAR_17->e_perm, VAR_16 | VAR_7);
 VAR_19->whotype = VAR_12;
 VAR_19++;
 VAR_15->naces++;
 VAR_17++;

 while (VAR_17->e_tag == VAR_2) {
  VAR_21 = ~(VAR_17->e_perm & VAR_20.mask);
  VAR_21 &= VAR_20.groups | VAR_20.group | VAR_20.other;
  if (VAR_21) {
   VAR_19->type = VAR_4;
   VAR_19->flag = VAR_22;
   VAR_19->access_mask = FUNC_1(VAR_21, VAR_16);
   VAR_19->whotype = VAR_11;
   VAR_19->who = VAR_17->e_id;
   VAR_19++;
   VAR_15->naces++;
  }
  VAR_19->type = VAR_3;
  VAR_19->flag = VAR_22;
  VAR_19->access_mask = FUNC_2(VAR_17->e_perm & VAR_20.mask,
         VAR_16);
  VAR_19->whotype = VAR_11;
  VAR_19->who = VAR_17->e_id;
  VAR_19++;
  VAR_15->naces++;
  VAR_17++;
 }






 VAR_18 = VAR_17;

 VAR_19->type = VAR_3;
 VAR_19->flag = VAR_22;
 VAR_19->access_mask = FUNC_2(VAR_20.group, VAR_16);
 VAR_19->whotype = VAR_10;
 VAR_19++;
 VAR_15->naces++;
 VAR_17++;

 while (VAR_17->e_tag == VAR_0) {
  VAR_19->type = VAR_3;
  VAR_19->flag = VAR_22 | VAR_5;
  VAR_19->access_mask = FUNC_2(VAR_17->e_perm & VAR_20.mask,
         VAR_16);
  VAR_19->whotype = VAR_11;
  VAR_19->who = VAR_17->e_id;
  VAR_19++;
  VAR_15->naces++;
  VAR_17++;
 }



 VAR_17 = VAR_18;

 VAR_21 = ~VAR_20.group & VAR_20.other;
 if (VAR_21) {
  VAR_19->type = VAR_4;
  VAR_19->flag = VAR_22;
  VAR_19->access_mask = FUNC_1(VAR_21, VAR_16);
  VAR_19->whotype = VAR_10;
  VAR_19++;
  VAR_15->naces++;
 }
 VAR_17++;

 while (VAR_17->e_tag == VAR_0) {
  VAR_21 = ~(VAR_17->e_perm & VAR_20.mask);
  VAR_21 &= VAR_20.other;
  if (VAR_21) {
   VAR_19->type = VAR_4;
   VAR_19->flag = VAR_22 | VAR_5;
   VAR_19->access_mask = FUNC_1(VAR_21, VAR_16);
   VAR_19->whotype = VAR_11;
   VAR_19->who = VAR_17->e_id;
   VAR_19++;
   VAR_15->naces++;
  }
  VAR_17++;
 }

 if (VAR_17->e_tag == VAR_1)
  VAR_17++;
 VAR_19->type = VAR_3;
 VAR_19->flag = VAR_22;
 VAR_19->access_mask = FUNC_2(VAR_17->e_perm, VAR_16);
 VAR_19->whotype = VAR_9;
 VAR_15->naces++;
}
