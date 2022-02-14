
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int size; int writesize; int erasesize; int flags; int sync; int write; int read; int get_unmapped_area; int erase; int type; int name; struct map_info* priv; } ;
struct map_info {int size; int name; int * fldrv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 struct mtd_info* FUNC_1 (int,int ) ;
 int FUNC_2 (struct map_info*,int) ;
 int FUNC_3 (struct map_info*,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static struct mtd_info *FUNC_4(struct map_info *VAR_11)
{
 struct mtd_info *VAR_12;
 VAR_12 = FUNC_1(sizeof(*VAR_12), VAR_0);
 if (!VAR_12)
  return ((void*)0);

 VAR_11->fldrv = &VAR_5;
 VAR_12->priv = VAR_11;
 VAR_12->name = VAR_11->name;
 VAR_12->type = VAR_2;
 VAR_12->size = VAR_11->size;
 VAR_12->erase = VAR_6;
 VAR_12->get_unmapped_area = VAR_9;
 VAR_12->read = VAR_8;
 VAR_12->write = VAR_10;
 VAR_12->sync = VAR_7;
 VAR_12->flags = VAR_1;
 VAR_12->writesize = 1;

 VAR_12->erasesize = VAR_3;
  while(VAR_12->size & (VAR_12->erasesize - 1))
  VAR_12->erasesize >>= 1;

 FUNC_0(VAR_4);
 return VAR_12;
}
