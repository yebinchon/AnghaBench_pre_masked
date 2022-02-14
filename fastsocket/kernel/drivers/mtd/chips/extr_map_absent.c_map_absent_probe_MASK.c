
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int writesize; int erasesize; scalar_t__ flags; int sync; int write; int read; int erase; int size; int type; int name; struct map_info* priv; } ;
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

__attribute__((used)) static struct mtd_info *FUNC_2(struct map_info *VAR_9)
{
 struct mtd_info *VAR_10;

 VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_0);
 if (!VAR_10) {
  return ((void*)0);
 }

 VAR_9->fldrv = &VAR_4;
 VAR_10->priv = VAR_9;
 VAR_10->name = VAR_9->name;
 VAR_10->type = VAR_1;
 VAR_10->size = VAR_9->size;
 VAR_10->erase = VAR_5;
 VAR_10->read = VAR_6;
 VAR_10->write = VAR_8;
 VAR_10->sync = VAR_7;
 VAR_10->flags = 0;
 VAR_10->erasesize = VAR_2;
 VAR_10->writesize = 1;

 FUNC_0(VAR_3);
 return VAR_10;
}
