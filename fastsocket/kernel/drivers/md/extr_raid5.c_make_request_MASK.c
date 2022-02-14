
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_head {int state; } ;
struct r5conf {scalar_t__ reshape_progress; int reshape_safe; int wait_for_overlap; int preread_active_stripes; int device_lock; } ;
struct mddev {scalar_t__ reshape_position; int suspend_lo; int suspend_hi; scalar_t__ reshape_backwards; struct r5conf* private; } ;
struct bio {int bi_rw; int bi_sector; int bi_size; int bi_phys_segments; int bi_bdev; int bi_flags; int * bi_next; } ;
typedef int sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int const VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int const VAR_14 ;
 int FUNC_1 (struct stripe_head*,struct bio*,int,int const) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct bio*) ;
 int FUNC_5 (struct bio*,int ) ;
 scalar_t__ FUNC_6 (struct bio*,int ) ;
 scalar_t__ FUNC_7 (struct mddev*,struct bio*) ;
 int FUNC_8 (int ,int *) ;
 int VAR_15 ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int ) ;
 struct stripe_head* FUNC_11 (struct r5conf*,int,int,int,int ) ;
 int FUNC_12 (struct mddev*,struct bio*) ;
 int FUNC_13 (struct mddev*,struct bio*) ;
 int FUNC_14 (struct r5conf*) ;
 int FUNC_15 (struct mddev*) ;
 int FUNC_16 (struct mddev*,struct bio*) ;
 int FUNC_17 (char*,unsigned long long,unsigned long long) ;
 int FUNC_18 (int *,int *,int ) ;
 int FUNC_19 (struct r5conf*,int,int,int*,int *) ;
 int FUNC_20 (struct bio*) ;
 int FUNC_21 (struct stripe_head*) ;
 int FUNC_22 () ;
 int FUNC_23 (int ,int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int ,int *) ;
 scalar_t__ FUNC_27 (int ,int *) ;
 int FUNC_28 (int ,struct bio*) ;
 scalar_t__ FUNC_29 (int) ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_30(struct mddev *VAR_17, struct bio * VAR_18)
{
 struct r5conf *VAR_19 = VAR_17->private;
 int VAR_20;
 sector_t VAR_21;
 sector_t VAR_22, VAR_23;
 struct stripe_head *VAR_24;
 const int VAR_25 = FUNC_4(VAR_18);
 int VAR_26;

 if (FUNC_29(VAR_18->bi_rw & VAR_1)) {
  FUNC_13(VAR_17, VAR_18);
  return 0;
 }

 FUNC_16(VAR_17, VAR_18);

 if (VAR_25 == VAR_5 &&
      VAR_17->reshape_position == VAR_4 &&
      FUNC_7(VAR_17,VAR_18))
  return 0;

 if (FUNC_29(VAR_18->bi_rw & VAR_0)) {
  return FUNC_12(VAR_17, VAR_18);
 }

 VAR_22 = VAR_18->bi_sector & ~((sector_t)VAR_11-1);
 VAR_23 = VAR_18->bi_sector + (VAR_18->bi_size>>9);
 VAR_18->bi_next = ((void*)0);
 VAR_18->bi_phys_segments = 1;

 for (;VAR_22 < VAR_23; VAR_22 += VAR_11) {
  FUNC_0(VAR_16);
  int VAR_27;

 retry:
  VAR_27 = 0;
  FUNC_18(&VAR_19->wait_for_overlap, &VAR_16, VAR_13);
  if (FUNC_29(VAR_19->reshape_progress != VAR_4)) {
   FUNC_24(&VAR_19->device_lock);
   if (VAR_17->reshape_backwards
       ? VAR_22 < VAR_19->reshape_progress
       : VAR_22 >= VAR_19->reshape_progress) {
    VAR_27 = 1;
   } else {
    if (VAR_17->reshape_backwards
        ? VAR_22 < VAR_19->reshape_safe
        : VAR_22 >= VAR_19->reshape_safe) {
     FUNC_25(&VAR_19->device_lock);
     FUNC_22();
     goto retry;
    }
   }
   FUNC_25(&VAR_19->device_lock);
  }

  VAR_21 = FUNC_19(VAR_19, VAR_22,
        VAR_27,
        &VAR_20, ((void*)0));
  FUNC_17("raid456: make_request, sector %llu logical %llu\n",
   (unsigned long long)VAR_21,
   (unsigned long long)VAR_22);

  VAR_24 = FUNC_11(VAR_19, VAR_21, VAR_27,
           (VAR_18->bi_rw&VAR_6), 0);
  if (VAR_24) {
   if (FUNC_29(VAR_27)) {
    int VAR_28 = 0;
    FUNC_24(&VAR_19->device_lock);
    if (VAR_17->reshape_backwards
        ? VAR_22 >= VAR_19->reshape_progress
        : VAR_22 < VAR_19->reshape_progress)

     VAR_28 = 1;
    FUNC_25(&VAR_19->device_lock);
    if (VAR_28) {
     FUNC_21(VAR_24);
     FUNC_22();
     goto retry;
    }
   }

   if (VAR_25 == VAR_14 &&
       VAR_22 >= VAR_17->suspend_lo &&
       VAR_22 < VAR_17->suspend_hi) {
    FUNC_21(VAR_24);




    FUNC_10(VAR_15);
    FUNC_18(&VAR_19->wait_for_overlap,
      &VAR_16, VAR_12);
    if (VAR_22 >= VAR_17->suspend_lo &&
        VAR_22 < VAR_17->suspend_hi)
     FUNC_22();
    goto retry;
   }

   if (FUNC_27(VAR_8, &VAR_24->state) ||
       !FUNC_1(VAR_24, VAR_18, VAR_20, VAR_25)) {




    FUNC_14(VAR_19);
    FUNC_21(VAR_24);
    FUNC_22();
    goto retry;
   }
   FUNC_9(&VAR_19->wait_for_overlap, &VAR_16);
   FUNC_23(VAR_9, &VAR_24->state);
   FUNC_8(VAR_7, &VAR_24->state);
   if (FUNC_6(VAR_18, VAR_2) &&
       !FUNC_26(VAR_10, &VAR_24->state))
    FUNC_2(&VAR_19->preread_active_stripes);
   FUNC_21(VAR_24);
  } else {

   FUNC_8(VAR_3, &VAR_18->bi_flags);
   FUNC_9(&VAR_19->wait_for_overlap, &VAR_16);
   break;
  }

 }

 VAR_26 = FUNC_20(VAR_18);
 if (VAR_26 == 0) {

  if ( VAR_25 == VAR_14 )
   FUNC_15(VAR_17);

  FUNC_28(FUNC_3(VAR_18->bi_bdev),
      VAR_18);
  FUNC_5(VAR_18, 0);
 }

 return 0;
}
