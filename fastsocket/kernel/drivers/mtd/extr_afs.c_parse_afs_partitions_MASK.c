
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct mtd_partition {char* name; int size; scalar_t__ mask_flags; scalar_t__ offset; } ;
struct mtd_info {scalar_t__ size; scalar_t__ erasesize; } ;
struct image_info_struct {int length; int name; int imageNumber; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mtd_info*,scalar_t__*,scalar_t__*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct mtd_info*,struct image_info_struct*,scalar_t__) ;
 int FUNC_2 (struct mtd_partition*) ;
 struct mtd_partition* FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (char*,scalar_t__,scalar_t__,int,int ,char*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct mtd_info *VAR_2,
                         struct mtd_partition **VAR_3,
                         unsigned long VAR_4)
{
 struct mtd_partition *VAR_5;
 u_int VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10 = 0;
 char *VAR_11;





 VAR_6 = VAR_2->size - 1;






 for (VAR_8 = VAR_7 = VAR_9 = 0; VAR_7 < VAR_2->size; VAR_7 += VAR_2->erasesize) {
  struct image_info_struct VAR_12;
  u_int VAR_13, VAR_14;

  VAR_10 = FUNC_0(VAR_2, &VAR_14, &VAR_13, VAR_7, VAR_6);
  if (VAR_10 < 0)
   break;
  if (VAR_10 == 0)
   continue;

  VAR_10 = FUNC_1(VAR_2, &VAR_12, VAR_13);
  if (VAR_10 < 0)
   break;
  if (VAR_10 == 0)
   continue;

  VAR_9 += sizeof(struct mtd_partition);
  VAR_9 += FUNC_6(VAR_12.name) + 1;
  VAR_8 += 1;
 }

 if (!VAR_9)
  return VAR_10;

 VAR_5 = FUNC_3(VAR_9, VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_11 = (char *)(VAR_5 + VAR_8);




 for (VAR_8 = VAR_7 = 0; VAR_7 < VAR_2->size; VAR_7 += VAR_2->erasesize) {
  struct image_info_struct VAR_15;
  u_int VAR_16, VAR_17;


  VAR_10 = FUNC_0(VAR_2, &VAR_17, &VAR_16, VAR_7, VAR_6);
  if (VAR_10 < 0)
   break;
  if (VAR_10 == 0)
   continue;


  VAR_10 = FUNC_1(VAR_2, &VAR_15, VAR_16);
  if (VAR_10 < 0)
   break;
  if (VAR_10 == 0)
   continue;

  FUNC_5(VAR_11, VAR_15.name);

  VAR_5[VAR_8].name = VAR_11;
  VAR_5[VAR_8].size = (VAR_15.length + VAR_2->erasesize - 1) & ~(VAR_2->erasesize - 1);
  VAR_5[VAR_8].offset = VAR_17;
  VAR_5[VAR_8].mask_flags = 0;

  FUNC_4("  mtd%d: at 0x%08x, %5lluKiB, %8u, %s\n",
   VAR_8, VAR_17, VAR_5[VAR_8].size / 1024,
   VAR_15.imageNumber, VAR_11);

  VAR_8 += 1;
  VAR_11 = VAR_11 + FUNC_6(VAR_15.name) + 1;
 }

 if (!VAR_8) {
  FUNC_2(VAR_5);
  VAR_5 = ((void*)0);
 }

 *VAR_3 = VAR_5;
 return VAR_8 ? VAR_8 : VAR_10;
}
