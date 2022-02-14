
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct fst_port_info {int index; scalar_t__ start; scalar_t__ txipos; scalar_t__ txpos; struct fst_card_info* card; } ;
struct fst_card_info {int card_lock; } ;
struct TYPE_2__ {int bits; int bcnt; int hadr; int ladr; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct fst_card_info*,int ,int ) ;
 int FUNC_2 (struct fst_card_info*,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int *** VAR_1 ;
 TYPE_1__** VAR_2 ;

__attribute__((used)) static void
FUNC_5(struct fst_port_info *VAR_3)
{
 int VAR_4;
 int VAR_5;
 unsigned int VAR_6;
 unsigned long VAR_7;
 struct fst_card_info *VAR_8;

 VAR_5 = VAR_3->index;
 VAR_8 = VAR_3->card;
 FUNC_3(&VAR_8->card_lock, VAR_7);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_6 = FUNC_0(VAR_1[VAR_5][VAR_4][0]);

  FUNC_2(VAR_8, VAR_2[VAR_5][VAR_4].ladr, (u16) VAR_6);
  FUNC_1(VAR_8, VAR_2[VAR_5][VAR_4].hadr, (u8) (VAR_6 >> 16));
  FUNC_2(VAR_8, VAR_2[VAR_5][VAR_4].bcnt, 0);
  FUNC_1(VAR_8, VAR_2[VAR_5][VAR_4].bits, 0);
 }
 VAR_3->txpos = 0;
 VAR_3->txipos = 0;
 VAR_3->start = 0;
 FUNC_4(&VAR_8->card_lock, VAR_7);
}
