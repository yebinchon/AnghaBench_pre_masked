
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct throtl_grp {unsigned long* slice_start; unsigned long* bps; int* bytes_disp; } ;
struct throtl_data {int dummy; } ;
struct bio {int bi_size; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio*) ;
 unsigned long FUNC_1 (int,unsigned long) ;
 int FUNC_2 (int,int) ;
 unsigned long VAR_1 ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;
 unsigned long VAR_2 ;

__attribute__((used)) static bool FUNC_4(struct throtl_data *VAR_3, struct throtl_grp *VAR_4,
  struct bio *VAR_5, unsigned long *VAR_6)
{
 bool VAR_7 = FUNC_0(VAR_5);
 u64 VAR_8, VAR_9, VAR_10;
 unsigned long VAR_11, VAR_12, VAR_13;

 VAR_11 = VAR_13 = VAR_1 - VAR_4->slice_start[VAR_7];


 if (!VAR_11)
  VAR_13 = VAR_2;

 VAR_13 = FUNC_3(VAR_13, VAR_2);

 VAR_10 = VAR_4->bps[VAR_7] * VAR_13;
 FUNC_2(VAR_10, VAR_0);
 VAR_8 = VAR_10;

 if (VAR_4->bytes_disp[VAR_7] + VAR_5->bi_size <= VAR_8) {
  if (VAR_6)
   *VAR_6 = 0;
  return 1;
 }


 VAR_9 = VAR_4->bytes_disp[VAR_7] + VAR_5->bi_size - VAR_8;
 VAR_12 = FUNC_1(VAR_9 * VAR_0, VAR_4->bps[VAR_7]);

 if (!VAR_12)
  VAR_12 = 1;





 VAR_12 = VAR_12 + (VAR_13 - VAR_11);
 if (VAR_6)
  *VAR_6 = VAR_12;
 return 0;
}
