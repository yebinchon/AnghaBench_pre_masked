
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct mtd_info {int dummy; } ;
struct TYPE_7__ {int end; int start; } ;
typedef TYPE_1__ slram_priv_t ;
struct TYPE_8__ {TYPE_5__* mtdinfo; struct TYPE_8__* next; } ;
typedef TYPE_2__ slram_mtd_list_t ;
struct TYPE_9__ {char* name; unsigned long size; int writesize; struct TYPE_9__* priv; int erasesize; int type; int owner; int write; int read; int unpoint; int point; int erase; int flags; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,char*,unsigned long,...) ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_5__*) ;
 TYPE_2__* FUNC_6 (int,int ) ;
 void* FUNC_7 (int,int ) ;
 int VAR_8 ;
 TYPE_2__* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_8(char *VAR_14, unsigned long VAR_15, unsigned long VAR_16)
{
 slram_mtd_list_t **VAR_17;

 VAR_17 = &VAR_9;
 while (*VAR_17) {
  VAR_17 = &(*VAR_17)->next;
 }

 *VAR_17 = FUNC_6(sizeof(slram_mtd_list_t), VAR_3);
 if (!(*VAR_17)) {
  FUNC_0("slram: Cannot allocate new MTD device.\n");
  return(-VAR_2);
 }
 (*VAR_17)->mtdinfo = FUNC_7(sizeof(struct mtd_info), VAR_3);
 (*VAR_17)->next = ((void*)0);

 if ((*VAR_17)->mtdinfo) {
  (*VAR_17)->mtdinfo->priv =
   FUNC_7(sizeof(slram_priv_t), VAR_3);

  if (!(*VAR_17)->mtdinfo->priv) {
   FUNC_5((*VAR_17)->mtdinfo);
   (*VAR_17)->mtdinfo = ((void*)0);
  }
 }

 if (!(*VAR_17)->mtdinfo) {
  FUNC_0("slram: Cannot allocate new MTD device.\n");
  return(-VAR_2);
 }

 if (!(((slram_priv_t *)(*VAR_17)->mtdinfo->priv)->start =
    FUNC_3(VAR_15, VAR_16))) {
  FUNC_0("slram: ioremap failed\n");
  return -VAR_1;
 }
 ((slram_priv_t *)(*VAR_17)->mtdinfo->priv)->end =
  ((slram_priv_t *)(*VAR_17)->mtdinfo->priv)->start + VAR_16;


 (*VAR_17)->mtdinfo->name = VAR_14;
 (*VAR_17)->mtdinfo->size = VAR_16;
 (*VAR_17)->mtdinfo->flags = VAR_4;
        (*VAR_17)->mtdinfo->erase = VAR_8;
 (*VAR_17)->mtdinfo->point = VAR_10;
 (*VAR_17)->mtdinfo->unpoint = VAR_12;
 (*VAR_17)->mtdinfo->read = VAR_11;
 (*VAR_17)->mtdinfo->write = VAR_13;
 (*VAR_17)->mtdinfo->owner = VAR_7;
 (*VAR_17)->mtdinfo->type = VAR_5;
 (*VAR_17)->mtdinfo->erasesize = VAR_6;
 (*VAR_17)->mtdinfo->writesize = 1;

 if (FUNC_2((*VAR_17)->mtdinfo)) {
  FUNC_0("slram: Failed to register new device\n");
  FUNC_4(((slram_priv_t *)(*VAR_17)->mtdinfo->priv)->start);
  FUNC_5((*VAR_17)->mtdinfo->priv);
  FUNC_5((*VAR_17)->mtdinfo);
  return(-VAR_0);
 }
 FUNC_1("slram: Registered device %s from %luKiB to %luKiB\n", VAR_14,
   (VAR_15 / 1024), ((VAR_15 + VAR_16) / 1024));
 FUNC_1("slram: Mapped from 0x%p to 0x%p\n",
   ((slram_priv_t *)(*VAR_17)->mtdinfo->priv)->start,
   ((slram_priv_t *)(*VAR_17)->mtdinfo->priv)->end);
 return(0);
}
