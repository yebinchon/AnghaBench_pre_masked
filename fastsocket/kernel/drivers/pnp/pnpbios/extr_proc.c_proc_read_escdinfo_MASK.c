
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct escd_info_struc {int min_escd_write_size; int escd_size; int nv_storage_base; } ;
typedef int off_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct escd_info_struc*) ;
 int FUNC_1 (char*,int,char*,int,int,int) ;

__attribute__((used)) static int FUNC_2(char *VAR_1, char **VAR_2, off_t VAR_3,
         int VAR_4, int *VAR_5, void *VAR_6)
{
 struct escd_info_struc VAR_7;

 if (FUNC_0(&VAR_7))
  return -VAR_0;
 return FUNC_1(VAR_1, VAR_4,
   "min_ESCD_write_size %d\n"
   "ESCD_size %d\n"
   "NVRAM_base 0x%x\n",
   VAR_7.min_escd_write_size,
   VAR_7.escd_size, VAR_7.nv_storage_base);
}
