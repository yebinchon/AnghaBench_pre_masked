
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct array_mode_checker {int nbanks; int npipes; int blocksize; int nsamples; int array_mode; int group_size; } ;






 int VAR_0 ;
 void* FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(struct array_mode_checker *VAR_1,
      u32 *VAR_2,
      u32 *VAR_3,
      u32 *VAR_4,
      u64 *VAR_5)
{
 u32 VAR_6 = 8;
 u32 VAR_7 = 8;
 u32 VAR_8 = VAR_1->nbanks;
 u32 VAR_9 = VAR_1->npipes;
 u32 VAR_10 = VAR_6 * VAR_7 * VAR_1->blocksize * VAR_1->nsamples;
 u32 VAR_11 = VAR_8 * VAR_9 * VAR_10;

 switch (VAR_1->array_mode) {
 case 128:

  *VAR_2 = 1;
  *VAR_3 = 1;
  *VAR_4 = 1;
  *VAR_5 = 1;
  break;
 case 129:
  *VAR_2 = FUNC_0((u32)64, (u32)(VAR_1->group_size / VAR_1->blocksize));
  *VAR_3 = 1;
  *VAR_4 = 1;
  *VAR_5 = VAR_1->group_size;
  break;
 case 131:
  *VAR_2 = FUNC_0((u32)VAR_6,
       (u32)(VAR_1->group_size /
      (VAR_7 * VAR_1->blocksize * VAR_1->nsamples)));
  *VAR_3 = VAR_7;
  *VAR_4 = 1;
  *VAR_5 = VAR_1->group_size;
  break;
 case 130:
  *VAR_2 = FUNC_0((u32)VAR_8 * VAR_6,
    (u32)((VAR_1->group_size * VAR_1->nbanks) /
    (VAR_1->blocksize * VAR_1->nsamples * VAR_6)));
  *VAR_3 = VAR_9 * VAR_7;
  *VAR_4 = 1;
  *VAR_5 = FUNC_0(VAR_11,
      (*VAR_2) * VAR_1->blocksize * (*VAR_3) * VAR_1->nsamples);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
