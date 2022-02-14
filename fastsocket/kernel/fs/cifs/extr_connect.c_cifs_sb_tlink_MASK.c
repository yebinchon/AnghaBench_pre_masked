
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct tcon_link {struct tcon_link* tl_tcon; int tl_flags; scalar_t__ tl_time; int tl_uid; } ;
struct cifs_sb_info {int mnt_cifs_flags; int tlink_tree_lock; int tlink_tree; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tcon_link* FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct tcon_link*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct tcon_link* FUNC_2 (struct cifs_sb_info*,int ) ;
 struct tcon_link* FUNC_3 (struct tcon_link*) ;
 int FUNC_4 (struct tcon_link*) ;
 struct tcon_link* FUNC_5 (struct cifs_sb_info*) ;
 int VAR_8 ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 () ;
 int VAR_9 ;
 int FUNC_8 (struct tcon_link*) ;
 struct tcon_link* FUNC_9 (int,int ) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int ,int *) ;
 scalar_t__ FUNC_14 (int ,scalar_t__) ;
 int FUNC_15 (int *,struct tcon_link*) ;
 struct tcon_link* FUNC_16 (int *,int ) ;
 int FUNC_17 (int *,int ,int ,int ) ;
 int FUNC_18 (int *,int ) ;

struct tcon_link *
FUNC_19(struct cifs_sb_info *VAR_10)
{
 int VAR_11;
 uid_t VAR_12 = FUNC_7();
 struct tcon_link *VAR_13, *VAR_14;

 if (!(VAR_10->mnt_cifs_flags & VAR_0))
  return FUNC_3(FUNC_5(VAR_10));

 FUNC_11(&VAR_10->tlink_tree_lock);
 VAR_13 = FUNC_16(&VAR_10->tlink_tree, VAR_12);
 if (VAR_13)
  FUNC_3(VAR_13);
 FUNC_12(&VAR_10->tlink_tree_lock);

 if (VAR_13 == ((void*)0)) {
  VAR_14 = FUNC_9(sizeof(*VAR_13), VAR_3);
  if (VAR_14 == ((void*)0))
   return FUNC_0(-VAR_2);
  VAR_14->tl_uid = VAR_12;
  VAR_14->tl_tcon = FUNC_0(-VAR_1);
  FUNC_10(VAR_6, &VAR_14->tl_flags);
  FUNC_10(VAR_5, &VAR_14->tl_flags);
  FUNC_3(VAR_14);

  FUNC_11(&VAR_10->tlink_tree_lock);

  VAR_13 = FUNC_16(&VAR_10->tlink_tree, VAR_12);
  if (VAR_13) {
   FUNC_3(VAR_13);
   FUNC_12(&VAR_10->tlink_tree_lock);
   FUNC_8(VAR_14);
   goto wait_for_construction;
  }
  VAR_13 = VAR_14;
  FUNC_15(&VAR_10->tlink_tree, VAR_13);
  FUNC_12(&VAR_10->tlink_tree_lock);
 } else {
wait_for_construction:
  VAR_11 = FUNC_17(&VAR_13->tl_flags, VAR_6,
      VAR_8,
      VAR_4);
  if (VAR_11) {
   FUNC_4(VAR_13);
   return FUNC_0(VAR_11);
  }


  if (!FUNC_1(VAR_13->tl_tcon))
   return VAR_13;


  if (FUNC_14(VAR_9, VAR_13->tl_time + VAR_7)) {
   FUNC_4(VAR_13);
   return FUNC_0(-VAR_1);
  }

  if (FUNC_13(VAR_6, &VAR_13->tl_flags))
   goto wait_for_construction;
 }

 VAR_13->tl_tcon = FUNC_2(VAR_10, VAR_12);
 FUNC_6(VAR_6, &VAR_13->tl_flags);
 FUNC_18(&VAR_13->tl_flags, VAR_6);

 if (FUNC_1(VAR_13->tl_tcon)) {
  FUNC_4(VAR_13);
  return FUNC_0(-VAR_1);
 }

 return VAR_13;
}
