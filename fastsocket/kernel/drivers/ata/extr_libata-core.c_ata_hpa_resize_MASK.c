
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_4__ {int flags; } ;
struct ata_eh_context {TYPE_2__ i; } ;
struct ata_device {scalar_t__ class; int horkage; int id; scalar_t__ n_native_sectors; TYPE_1__* link; } ;
struct TYPE_3__ {struct ata_eh_context eh_context; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ata_device*,int ,char*,...) ;
 int FUNC_1 (struct ata_device*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_7 ;
 int FUNC_5 (struct ata_device*,scalar_t__*) ;
 int FUNC_6 (struct ata_device*,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct ata_device *VAR_8)
{
 struct ata_eh_context *VAR_9 = &VAR_8->link->eh_context;
 int VAR_10 = VAR_9->i.flags & VAR_1;
 u64 VAR_11 = FUNC_4(VAR_8->id);
 u64 VAR_12;
 int VAR_13;


 if (VAR_8->class != VAR_0 ||
     !FUNC_2(VAR_8->id) || !FUNC_3(VAR_8->id) ||
     (VAR_8->horkage & VAR_2))
  return 0;


 VAR_13 = FUNC_5(VAR_8, &VAR_12);
 if (VAR_13) {



  if (VAR_13 == -VAR_3 || !VAR_7) {
   FUNC_0(VAR_8, VAR_6, "HPA support seems "
           "broken, skipping HPA handling\n");
   VAR_8->horkage |= VAR_2;


   if (VAR_13 == -VAR_3)
    VAR_13 = 0;
  }

  return VAR_13;
 }
 VAR_8->n_native_sectors = VAR_12;


 if (VAR_12 <= VAR_11 || !VAR_7) {
  if (!VAR_10 || VAR_12 == VAR_11)
   return 0;

  if (VAR_12 > VAR_11)
   FUNC_0(VAR_8, VAR_5,
    "HPA detected: current %llu, native %llu\n",
    (unsigned long long)VAR_11,
    (unsigned long long)VAR_12);
  else if (VAR_12 < VAR_11)
   FUNC_0(VAR_8, VAR_6,
    "native sectors (%llu) is smaller than "
    "sectors (%llu)\n",
    (unsigned long long)VAR_12,
    (unsigned long long)VAR_11);
  return 0;
 }


 VAR_13 = FUNC_6(VAR_8, VAR_12);
 if (VAR_13 == -VAR_3) {

  FUNC_0(VAR_8, VAR_6, "device aborted resize "
          "(%llu -> %llu), skipping HPA handling\n",
          (unsigned long long)VAR_11,
          (unsigned long long)VAR_12);
  VAR_8->horkage |= VAR_2;
  return 0;
 } else if (VAR_13)
  return VAR_13;


 VAR_13 = FUNC_1(VAR_8, 0);
 if (VAR_13) {
  FUNC_0(VAR_8, VAR_4, "failed to re-read IDENTIFY "
          "data after HPA resizing\n");
  return VAR_13;
 }

 if (VAR_10) {
  u64 VAR_14 = FUNC_4(VAR_8->id);
  FUNC_0(VAR_8, VAR_5,
   "HPA unlocked: %llu -> %llu, native %llu\n",
   (unsigned long long)VAR_11,
   (unsigned long long)VAR_14,
   (unsigned long long)VAR_12);
 }

 return 0;
}
