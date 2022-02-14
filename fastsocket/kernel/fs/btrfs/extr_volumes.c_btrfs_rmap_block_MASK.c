
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct map_lookup {int type; int num_stripes; int sub_stripes; int stripe_len; TYPE_2__* stripes; } ;
struct extent_map_tree {int lock; } ;
struct extent_map {scalar_t__ start; scalar_t__ len; scalar_t__ bdev; } ;
struct btrfs_mapping_tree {struct extent_map_tree map_tree; } ;
struct TYPE_4__ {scalar_t__ physical; TYPE_1__* dev; } ;
struct TYPE_3__ {scalar_t__ devid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (struct extent_map*) ;
 scalar_t__* FUNC_4 (int,int ) ;
 struct extent_map* FUNC_5 (struct extent_map_tree*,scalar_t__,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct btrfs_mapping_tree *VAR_3,
       u64 VAR_4, u64 VAR_5, u64 VAR_6,
       u64 **VAR_7, int *VAR_8, int *VAR_9)
{
 struct extent_map_tree *VAR_10 = &VAR_3->map_tree;
 struct extent_map *VAR_11;
 struct map_lookup *VAR_12;
 u64 *VAR_13;
 u64 VAR_14;
 u64 VAR_15;
 u64 VAR_16;
 int VAR_17, VAR_18, VAR_19 = 0;

 FUNC_6(&VAR_10->lock);
 VAR_11 = FUNC_5(VAR_10, VAR_4, 1);
 FUNC_7(&VAR_10->lock);

 FUNC_0(!VAR_11 || VAR_11->start != VAR_4);
 VAR_12 = (struct map_lookup *)VAR_11->bdev;

 VAR_15 = VAR_11->len;
 if (VAR_12->type & VAR_1)
  FUNC_2(VAR_15, VAR_12->num_stripes / VAR_12->sub_stripes);
 else if (VAR_12->type & VAR_0)
  FUNC_2(VAR_15, VAR_12->num_stripes);

 VAR_13 = FUNC_4(sizeof(u64) * VAR_12->num_stripes, VAR_2);
 FUNC_0(!VAR_13);

 for (VAR_17 = 0; VAR_17 < VAR_12->num_stripes; VAR_17++) {
  if (VAR_6 && VAR_12->stripes[VAR_17].dev->devid != VAR_6)
   continue;
  if (VAR_12->stripes[VAR_17].physical > VAR_5 ||
      VAR_12->stripes[VAR_17].physical + VAR_15 <= VAR_5)
   continue;

  VAR_16 = VAR_5 - VAR_12->stripes[VAR_17].physical;
  FUNC_2(VAR_16, VAR_12->stripe_len);

  if (VAR_12->type & VAR_1) {
   VAR_16 = VAR_16 * VAR_12->num_stripes + VAR_17;
   FUNC_2(VAR_16, VAR_12->sub_stripes);
  } else if (VAR_12->type & VAR_0) {
   VAR_16 = VAR_16 * VAR_12->num_stripes + VAR_17;
  }
  VAR_14 = VAR_4 + VAR_16 * VAR_12->stripe_len;
  FUNC_1(VAR_19 >= VAR_12->num_stripes);
  for (VAR_18 = 0; VAR_18 < VAR_19; VAR_18++) {
   if (VAR_13[VAR_18] == VAR_14)
    break;
  }
  if (VAR_18 == VAR_19) {
   FUNC_1(VAR_19 >= VAR_12->num_stripes);
   VAR_13[VAR_19++] = VAR_14;
  }
 }

 *VAR_7 = VAR_13;
 *VAR_8 = VAR_19;
 *VAR_9 = VAR_12->stripe_len;

 FUNC_3(VAR_11);
 return 0;
}
