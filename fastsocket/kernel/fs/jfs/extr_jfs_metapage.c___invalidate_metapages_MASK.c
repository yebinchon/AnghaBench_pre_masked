
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct metapage {int index; scalar_t__ lsn; int flag; } ;
struct inode {int i_blkbits; int i_sb; } ;
struct address_space {int dummy; } ;
typedef int sector_t ;
typedef int s64 ;
struct TYPE_4__ {TYPE_1__* direct_inode; } ;
struct TYPE_3__ {struct address_space* i_mapping; } ;


 TYPE_2__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int *) ;
 struct page* FUNC_2 (struct address_space*,int) ;
 int FUNC_3 (struct page*) ;
 struct metapage* FUNC_4 (struct page*,unsigned int) ;
 int FUNC_5 (struct metapage*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct page*) ;

void FUNC_8(struct inode *VAR_5, s64 VAR_6, int VAR_7)
{
 sector_t VAR_8;
 int VAR_9 = VAR_2 - VAR_5->i_blkbits;
 int VAR_10 = 1 << VAR_9;

 struct address_space *VAR_11 =
  FUNC_0(VAR_5->i_sb)->direct_inode->i_mapping;
 struct metapage *VAR_12;
 struct page *VAR_13;
 unsigned int VAR_14;





 for (VAR_8 = VAR_6 & ~(VAR_10 - 1); VAR_8 < VAR_6 + VAR_7;
      VAR_8 += VAR_10) {
  VAR_13 = FUNC_2(VAR_11, VAR_8 >> VAR_9);
  if (!VAR_13)
   continue;
  for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14 += VAR_4) {
   VAR_12 = FUNC_4(VAR_13, VAR_14);
   if (!VAR_12)
    continue;
   if (VAR_12->index < VAR_6)
    continue;
   if (VAR_12->index >= VAR_6 + VAR_7)
    break;

   FUNC_1(VAR_0, &VAR_12->flag);
   FUNC_6(VAR_1, &VAR_12->flag);
   if (VAR_12->lsn)
    FUNC_5(VAR_12);
  }
  FUNC_7(VAR_13);
  FUNC_3(VAR_13);
 }
}
