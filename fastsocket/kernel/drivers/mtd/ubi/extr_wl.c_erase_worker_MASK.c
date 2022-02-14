
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_work {int torture; struct ubi_wl_entry* e; } ;
struct ubi_wl_entry {int pnum; int ec; } ;
struct ubi_device {int beb_rsvd_level; int beb_rsvd_pebs; int avail_pebs; int rsvd_pebs; int bad_peb_count; int good_peb_count; int volumes_lock; int bad_allowed; int wl_lock; int free; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (struct ubi_device*) ;
 int FUNC_2 (struct ubi_work*) ;
 int FUNC_3 (int ,struct ubi_wl_entry*) ;
 int FUNC_4 (struct ubi_device*,struct ubi_wl_entry*,int ) ;
 int FUNC_5 (struct ubi_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ubi_device*,struct ubi_wl_entry*,int ) ;
 int FUNC_9 (struct ubi_device*) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (struct ubi_device*,int) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (struct ubi_device*) ;
 int FUNC_14 (char*) ;
 int VAR_5 ;
 int FUNC_15 (struct ubi_wl_entry*,int *) ;

__attribute__((used)) static int FUNC_16(struct ubi_device *VAR_6, struct ubi_work *VAR_7,
   int VAR_8)
{
 struct ubi_wl_entry *VAR_9 = VAR_7->e;
 int VAR_10 = VAR_9->pnum, VAR_11, VAR_12;

 if (VAR_8) {
  FUNC_0("cancel erasure of PEB %d EC %d", VAR_10, VAR_9->ec);
  FUNC_2(VAR_7);
  FUNC_3(VAR_5, VAR_9);
  return 0;
 }

 FUNC_0("erase PEB %d EC %d", VAR_10, VAR_9->ec);

 VAR_11 = FUNC_8(VAR_6, VAR_9, VAR_7->torture);
 if (!VAR_11) {

  FUNC_2(VAR_7);

  FUNC_6(&VAR_6->wl_lock);
  FUNC_15(VAR_9, &VAR_6->free);
  FUNC_7(&VAR_6->wl_lock);





  FUNC_5(VAR_6);


  VAR_11 = FUNC_1(VAR_6);
  return VAR_11;
 }

 FUNC_10("failed to erase PEB %d, error %d", VAR_10, VAR_11);
 FUNC_2(VAR_7);
 FUNC_3(VAR_5, VAR_9);

 if (VAR_11 == -VAR_2 || VAR_11 == -VAR_4 || VAR_11 == -VAR_0 ||
     VAR_11 == -VAR_1) {
  int VAR_13;


  VAR_13 = FUNC_4(VAR_6, VAR_9, 0);
  if (VAR_13) {
   VAR_11 = VAR_13;
   goto out_ro;
  }
  return VAR_11;
 } else if (VAR_11 != -VAR_3) {





  goto out_ro;
 }



 if (!VAR_6->bad_allowed) {
  FUNC_10("bad physical eraseblock %d detected", VAR_10);
  goto out_ro;
 }

 FUNC_6(&VAR_6->volumes_lock);
 VAR_12 = VAR_6->beb_rsvd_level - VAR_6->beb_rsvd_pebs + 1;
 if (VAR_12 > 0) {
  VAR_12 = VAR_6->avail_pebs >= VAR_12 ? VAR_12 : VAR_6->avail_pebs;
  VAR_6->avail_pebs -= VAR_12;
  VAR_6->rsvd_pebs += VAR_12;
  VAR_6->beb_rsvd_pebs += VAR_12;
  if (VAR_12 > 0)
   FUNC_12("reserve more %d PEBs", VAR_12);
 }

 if (VAR_6->beb_rsvd_pebs == 0) {
  FUNC_7(&VAR_6->volumes_lock);
  FUNC_10("no reserved physical eraseblocks");
  goto out_ro;
 }
 FUNC_7(&VAR_6->volumes_lock);

 FUNC_12("mark PEB %d as bad", VAR_10);
 VAR_11 = FUNC_11(VAR_6, VAR_10);
 if (VAR_11)
  goto out_ro;

 FUNC_6(&VAR_6->volumes_lock);
 VAR_6->beb_rsvd_pebs -= 1;
 VAR_6->bad_peb_count += 1;
 VAR_6->good_peb_count -= 1;
 FUNC_9(VAR_6);
 if (VAR_6->beb_rsvd_pebs)
  FUNC_12("%d PEBs left in the reserve", VAR_6->beb_rsvd_pebs);
 else
  FUNC_14("last PEB from the reserved pool was used");
 FUNC_7(&VAR_6->volumes_lock);

 return VAR_11;

out_ro:
 FUNC_13(VAR_6);
 return VAR_11;
}
