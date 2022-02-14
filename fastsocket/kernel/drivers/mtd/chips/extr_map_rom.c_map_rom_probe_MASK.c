
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int writesize; int erasesize; int flags; int erase; int sync; int write; int read; int get_unmapped_area; int size; int type; int name; struct map_info* priv; } ;
struct map_info {int size; int name; int * fldrv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct mtd_info* FUNC_1 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static struct mtd_info *FUNC_2(struct map_info *VAR_10)
{
 struct mtd_info *VAR_11;

 VAR_11 = FUNC_1(sizeof(*VAR_11), VAR_0);
 if (!VAR_11)
  return ((void*)0);

 VAR_10->fldrv = &VAR_4;
 VAR_11->priv = VAR_10;
 VAR_11->name = VAR_10->name;
 VAR_11->type = VAR_2;
 VAR_11->size = VAR_10->size;
 VAR_11->get_unmapped_area = VAR_8;
 VAR_11->read = VAR_7;
 VAR_11->write = VAR_9;
 VAR_11->sync = VAR_6;
 VAR_11->erase = VAR_5;
 VAR_11->flags = VAR_1;
 VAR_11->erasesize = VAR_10->size;
 VAR_11->writesize = 1;

 FUNC_0(VAR_3);
 return VAR_11;
}
