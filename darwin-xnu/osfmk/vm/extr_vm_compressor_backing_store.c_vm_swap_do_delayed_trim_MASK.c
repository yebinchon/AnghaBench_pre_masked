
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trim_list {int tl_offset; struct trim_list* tl_next; } ;
struct swapfile {int* swp_bitmap; unsigned int swp_free_hint; int swp_nseginuse; int ** swp_csegs; int swp_vp; scalar_t__ swp_delayed_trim_count; struct trim_list* swp_delayed_trim_list_head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct trim_list*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,struct trim_list*,int ) ;

__attribute__((used)) static void
FUNC_4(struct swapfile *VAR_4)
{
 struct trim_list *VAR_5, *VAR_6;

 FUNC_1(&VAR_2);

 VAR_6 = VAR_4->swp_delayed_trim_list_head;
 VAR_4->swp_delayed_trim_list_head = ((void*)0);
 VAR_4->swp_delayed_trim_count = 0;

 FUNC_2(&VAR_2);

 FUNC_3(VAR_4->swp_vp, VAR_6, VAR_1);

 while ((VAR_5 = VAR_6) != ((void*)0)) {
  unsigned int VAR_7 = 0;
  unsigned int VAR_8 = 0;
  unsigned int VAR_9 = 0;

  FUNC_1(&VAR_2);

  VAR_7 = (unsigned int) (VAR_5->tl_offset / VAR_0);

  VAR_8 = VAR_7 >> 3;
  VAR_9 = VAR_7 % 8;

  if ((VAR_4->swp_bitmap)[VAR_8] & (1 << VAR_9)) {

   (VAR_4->swp_bitmap)[VAR_8] &= ~(1 << VAR_9);

   VAR_4->swp_csegs[VAR_7] = ((void*)0);

   VAR_4->swp_nseginuse--;
   VAR_3--;

   if (VAR_7 < VAR_4->swp_free_hint) {
    VAR_4->swp_free_hint = VAR_7;
   }
  }
  FUNC_2(&VAR_2);

  VAR_6 = VAR_5->tl_next;

  FUNC_0(VAR_5, sizeof(struct trim_list));
 }
}
