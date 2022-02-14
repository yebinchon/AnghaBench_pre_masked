
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct inode {int i_sb; } ;
struct bmap {int db_maxag; int db_numag; int db_mapsize; int db_agsize; int db_agl2size; int db_nfree; int* db_agfree; size_t db_agpref; int db_aglevel; int db_agheigth; int db_agwidth; scalar_t__ db_agstart; } ;
typedef int s64 ;
struct TYPE_2__ {struct bmap* bmap; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;

void FUNC_3(struct inode *VAR_2)
{
 struct bmap *VAR_3 = FUNC_1(VAR_2->i_sb)->bmap;
 int VAR_4, VAR_5, VAR_6;
 s64 VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11, VAR_12;
 VAR_4 = VAR_3->db_maxag + 1;
 VAR_5 = VAR_3->db_numag - VAR_4;
 VAR_7 = VAR_3->db_mapsize & (VAR_3->db_agsize - 1);






 VAR_9 = (VAR_5 && VAR_7) ?
     ((VAR_5 - 1) << VAR_3->db_agl2size) + VAR_7
     : VAR_5 << VAR_3->db_agl2size;





 VAR_8 = VAR_3->db_nfree - VAR_9;
 VAR_10 = (u32) VAR_8 / (u32) VAR_4;





 if (VAR_3->db_agfree[VAR_3->db_agpref] < VAR_10) {
  for (VAR_3->db_agpref = 0; VAR_3->db_agpref < VAR_4;
       VAR_3->db_agpref++) {
   if (VAR_3->db_agfree[VAR_3->db_agpref] >= VAR_10)
    break;
  }
  if (VAR_3->db_agpref >= VAR_3->db_numag) {
   FUNC_2(VAR_2->i_sb,
      "cannot find ag with average freespace");
  }
 }
 VAR_3->db_aglevel = FUNC_0(VAR_3->db_agsize);
 VAR_6 =
     VAR_3->db_agl2size - (VAR_0 + VAR_3->db_aglevel * VAR_1);
 VAR_3->db_agheigth = VAR_6 >> 1;
 VAR_3->db_agwidth = 1 << (VAR_6 - (VAR_3->db_agheigth << 1));
 for (VAR_11 = 5 - VAR_3->db_agheigth, VAR_3->db_agstart = 0, VAR_12 = 1; VAR_11 > 0;
      VAR_11--) {
  VAR_3->db_agstart += VAR_12;
  VAR_12 <<= 2;
 }

}
