
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct asd_flash_dir {struct asd_flash_de* dir_entry; } ;
struct asd_flash_de {int pad_size; int offs; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct asd_flash_dir *VAR_3, u32 VAR_4,
        u32 *VAR_5, u32 *VAR_6)
{
 int VAR_7;
 struct asd_flash_de *VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  u32 VAR_9 = FUNC_0(VAR_3->dir_entry[VAR_7].type);

  VAR_9 &= VAR_1;
  if (VAR_9 == VAR_4)
   break;
 }
 if (VAR_7 >= VAR_2)
  return -VAR_0;
 VAR_8 = &VAR_3->dir_entry[VAR_7];
 *VAR_5 = FUNC_0(VAR_8->offs);
 *VAR_6 = FUNC_0(VAR_8->pad_size);
 return 0;
}
