
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct stripe_c {int stripes; int stripes_shift; int chunk_size; int chunk_size_shift; TYPE_1__* stripe; int stripe_width; struct dm_target* ti; int kstriped_ws; } ;
struct dm_target {char* error; int num_flush_requests; int num_discard_requests; struct stripe_c* private; int len; } ;
typedef int sector_t ;
struct TYPE_2__ {int error_count; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 void* FUNC_1 (int) ;
 struct stripe_c* FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct dm_target*,int ) ;
 int FUNC_5 (struct dm_target*,int) ;
 int FUNC_6 (struct dm_target*,struct stripe_c*,unsigned int,char**) ;
 int FUNC_7 (struct stripe_c*) ;
 scalar_t__ FUNC_8 (char*,int,int*) ;
 scalar_t__ FUNC_9 (int ,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_10(struct dm_target *VAR_3, unsigned int VAR_4, char **VAR_5)
{
 struct stripe_c *VAR_6;
 sector_t VAR_7, VAR_8;
 uint32_t VAR_9;
 uint32_t VAR_10;
 int VAR_11;
 unsigned int VAR_12;

 if (VAR_4 < 2) {
  VAR_3->error = "Not enough arguments";
  return -VAR_0;
 }

 if (FUNC_8(VAR_5[0], 10, &VAR_9) || !VAR_9) {
  VAR_3->error = "Invalid stripe count";
  return -VAR_0;
 }

 if (FUNC_8(VAR_5[1], 10, &VAR_10) || !VAR_10) {
  VAR_3->error = "Invalid chunk_size";
  return -VAR_0;
 }

 VAR_7 = VAR_3->len;
 if (FUNC_9(VAR_7, VAR_9)) {
  VAR_3->error = "Target length not divisible by "
      "number of stripes";
  return -VAR_0;
 }

 VAR_8 = VAR_7;
 if (FUNC_9(VAR_8, VAR_10)) {
  VAR_3->error = "Target length not divisible by "
      "chunk size";
  return -VAR_0;
 }




 if (VAR_4 != (2 + 2 * VAR_9)) {
  VAR_3->error = "Not enough destinations "
   "specified";
  return -VAR_0;
 }

 VAR_6 = FUNC_2(VAR_9);
 if (!VAR_6) {
  VAR_3->error = "Memory allocation for striped context "
      "failed";
  return -VAR_1;
 }

 FUNC_0(&VAR_6->kstriped_ws, VAR_2);


 VAR_6->ti = VAR_3;
 VAR_6->stripes = VAR_9;
 VAR_6->stripe_width = VAR_7;

 if (VAR_9 & (VAR_9 - 1))
  VAR_6->stripes_shift = -1;
 else
  VAR_6->stripes_shift = FUNC_1(VAR_9);

 VAR_11 = FUNC_5(VAR_3, VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_3->num_flush_requests = VAR_9;
 VAR_3->num_discard_requests = VAR_9;

 VAR_6->chunk_size = VAR_10;
 if (VAR_10 & (VAR_10 - 1))
  VAR_6->chunk_size_shift = -1;
 else
  VAR_6->chunk_size_shift = FUNC_1(VAR_10);




 for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
  VAR_5 += 2;

  VAR_11 = FUNC_6(VAR_3, VAR_6, VAR_12, VAR_5);
  if (VAR_11 < 0) {
   VAR_3->error = "Couldn't parse stripe destination";
   while (VAR_12--)
    FUNC_4(VAR_3, VAR_6->stripe[VAR_12].dev);
   FUNC_7(VAR_6);
   return VAR_11;
  }
  FUNC_3(&(VAR_6->stripe[VAR_12].error_count), 0);
 }

 VAR_3->private = VAR_6;

 return 0;
}
