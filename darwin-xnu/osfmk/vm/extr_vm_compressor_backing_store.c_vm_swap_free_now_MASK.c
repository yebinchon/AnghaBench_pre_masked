
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct swapfile {int swp_flags; int* swp_bitmap; unsigned int swp_free_hint; int swp_nseginuse; int ** swp_csegs; } ;
typedef int event_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_2(struct swapfile *VAR_7, uint64_t VAR_8)
{
 uint64_t VAR_9 = 0;
 unsigned int VAR_10 = 0;


 if ((VAR_7->swp_flags & VAR_1) || (VAR_7->swp_flags & VAR_2)) {

  unsigned int VAR_11 = 0;
  unsigned int VAR_12 = 0;

  VAR_9 = (VAR_8 & VAR_3);
  VAR_10 = (unsigned int) (VAR_9 / VAR_0);

  VAR_11 = VAR_10 >> 3;
  VAR_12 = VAR_10 % 8;

  if ((VAR_7->swp_bitmap)[VAR_11] & (1 << VAR_12)) {

   (VAR_7->swp_bitmap)[VAR_11] &= ~(1 << VAR_12);

   VAR_7->swp_csegs[VAR_10] = ((void*)0);

   VAR_7->swp_nseginuse--;
   VAR_6--;

   if (VAR_10 < VAR_7->swp_free_hint) {
    VAR_7->swp_free_hint = VAR_10;
   }
  }
  if (FUNC_0() && !VAR_5)
   FUNC_1((event_t) &VAR_4);
 }
}
