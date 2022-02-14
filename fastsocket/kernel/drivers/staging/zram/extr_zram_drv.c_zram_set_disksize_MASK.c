
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zram {size_t disksize; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,size_t,...) ;

__attribute__((used)) static void FUNC_1(struct zram *VAR_2, size_t VAR_3)
{
 if (!VAR_2->disksize) {
  FUNC_0(
  "disk size not provided. You can use disksize_kb module "
  "param to specify size.\nUsing default: (%u%% of RAM).\n",
  VAR_1
  );
  VAR_2->disksize = VAR_1 *
     (VAR_3 / 100);
 }

 if (VAR_2->disksize > 2 * (VAR_3)) {
  FUNC_0(
  "There is little point creating a zram of greater than "
  "twice the size of memory since we expect a 2:1 compression "
  "ratio. Note that zram uses about 0.1%% of the size of "
  "the disk when not in use so a huge zram is "
  "wasteful.\n"
  "\tMemory Size: %zu kB\n"
  "\tSize you selected: %llu kB\n"
  "Continuing anyway ...\n",
  VAR_3 >> 10, VAR_2->disksize
  );
 }

 VAR_2->disksize &= VAR_0;
}
