
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct vc_map {int index; } ;
struct idt77252_dev {int tst_size; unsigned long* tst; int tst_index; TYPE_1__* soft_tst; int tst_timer; int name; } ;
struct TYPE_2__ {unsigned int tste; struct vc_map* vc; } ;


 int FUNC_0 (char*,int ,int,int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct idt77252_dev*,unsigned long,unsigned int) ;

__attribute__((used)) static int
FUNC_4(struct idt77252_dev *VAR_4, struct vc_map *VAR_5,
    int VAR_6, unsigned int VAR_7)
{
 unsigned long VAR_8, VAR_9;
 unsigned long VAR_10;
 int VAR_11, VAR_12;
 u32 VAR_13;

 VAR_9 = VAR_4->tst_size - 2;
 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
  if (VAR_4->soft_tst[VAR_11].vc == ((void*)0))
   break;
 }
 if (VAR_11 >= VAR_9) {
  FUNC_1("%s: No free TST entries found\n", VAR_4->name);
  return -1;
 }

 FUNC_0("%s: conn %d: first TST entry at %d.\n",
  VAR_4->name, VAR_5 ? VAR_5->index : -1, VAR_11);

 VAR_12 = VAR_6;
 VAR_8 = VAR_9;
 VAR_13 = VAR_7 & VAR_0;
 if (VAR_5 && (VAR_7 != VAR_1))
  VAR_13 = VAR_7 | VAR_5->index;

 VAR_10 = VAR_4->tst[VAR_4->tst_index ^ 1];




 while (VAR_12 > 0) {
  if ((VAR_8 >= VAR_9) && (VAR_4->soft_tst[VAR_11].vc == ((void*)0))) {
   if (VAR_5)
    VAR_4->soft_tst[VAR_11].vc = VAR_5;
   else
    VAR_4->soft_tst[VAR_11].vc = (void *)-1;

   VAR_4->soft_tst[VAR_11].tste = VAR_13;
   if (FUNC_2(&VAR_4->tst_timer))
    VAR_4->soft_tst[VAR_11].tste |= VAR_2;
   else {
    FUNC_3(VAR_4, VAR_10 + VAR_11, VAR_13);
    VAR_4->soft_tst[VAR_11].tste |= VAR_3;
   }

   VAR_8 -= VAR_4->tst_size;
   VAR_12--;
  }

  if (++VAR_11 == VAR_9)
   VAR_11 = 0;
  VAR_8 += VAR_6;
 }

 return 0;
}
