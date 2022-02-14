
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nr_areas; int pages_per_area; int name; int lock; int active_pages; int active_entries; scalar_t__ active_area; int *** areas; } ;
typedef TYPE_1__ debug_info_t ;
typedef int debug_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int *** FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_6(debug_info_t* VAR_2, int VAR_3, int VAR_4)
{
 unsigned long VAR_5;
 debug_entry_t *** VAR_6;
 int VAR_7=0;

 if(!VAR_2 || (VAR_3 <= 0) || (VAR_4 < 0))
  return -VAR_0;
 if(VAR_4 > 0){
  VAR_6 = FUNC_0(VAR_4, VAR_3);
  if(!VAR_6) {
   FUNC_3("Allocating memory for %i pages failed\n",
    VAR_4);
   VAR_7 = -VAR_1;
   goto out;
  }
 } else {
  VAR_6 = ((void*)0);
 }
 FUNC_4(&VAR_2->lock,VAR_5);
 FUNC_1(VAR_2);
 VAR_2->areas = VAR_6;
 VAR_2->nr_areas = VAR_3;
 VAR_2->pages_per_area = VAR_4;
 VAR_2->active_area = 0;
 FUNC_2(VAR_2->active_entries,0,sizeof(int)*VAR_2->nr_areas);
 FUNC_2(VAR_2->active_pages, 0, sizeof(int)*VAR_2->nr_areas);
 FUNC_5(&VAR_2->lock,VAR_5);
 FUNC_3("%s: set new size (%i pages)\n" ,VAR_2->name, VAR_4);
out:
 return VAR_7;
}
