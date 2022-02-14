
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct metapage {scalar_t__ data; } ;
struct TYPE_3__ {int* stree; } ;
struct dmap {TYPE_1__ tree; } ;
struct bmap {TYPE_2__* db_ipbmap; int db_l2nbperpage; } ;
typedef int s64 ;
struct TYPE_4__ {int i_sb; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct bmap*,struct dmap*,int,int) ;
 int FUNC_3 (struct bmap*,struct dmap*,int,int,int*) ;
 scalar_t__ FUNC_4 (struct bmap*,struct dmap*,int,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct metapage*) ;
 int FUNC_7 (int,int) ;
 struct metapage* FUNC_8 (TYPE_2__*,int,int ,int ) ;
 int FUNC_9 (struct metapage*) ;
 int FUNC_10 (struct metapage*) ;

__attribute__((used)) static int
FUNC_11(struct bmap * VAR_5, s64 VAR_6, int VAR_7, s64 VAR_8, s64 * VAR_9)
{
 int VAR_10, VAR_11;
 s64 VAR_12, VAR_13, VAR_14;
 struct metapage *VAR_15;
 struct dmap *VAR_16;



 if (VAR_7 <= VAR_2) {


  VAR_13 = FUNC_0(VAR_8, VAR_5->db_l2nbperpage);
  VAR_15 = FUNC_8(VAR_5->db_ipbmap, VAR_13, VAR_3, 0);
  if (VAR_15 == ((void*)0))
   return -VAR_1;
  VAR_16 = (struct dmap *) VAR_15->data;



  VAR_10 = FUNC_3(VAR_5, VAR_16, (int) VAR_6, VAR_7, VAR_9);
  if (VAR_10 == 0)
   FUNC_6(VAR_15);

  FUNC_9(VAR_15);

  return (VAR_10);
 }




 FUNC_1((VAR_8 & (VAR_0 - 1)) == 0);



 for (VAR_14 = VAR_6, VAR_12 = VAR_8; VAR_14 > 0; VAR_14 -= VAR_11, VAR_12 += VAR_11) {


  VAR_13 = FUNC_0(VAR_12, VAR_5->db_l2nbperpage);
  VAR_15 = FUNC_8(VAR_5->db_ipbmap, VAR_13, VAR_3, 0);
  if (VAR_15 == ((void*)0)) {
   VAR_10 = -VAR_1;
   goto backout;
  }
  VAR_16 = (struct dmap *) VAR_15->data;



  if (VAR_16->tree.stree[VAR_4] != VAR_2) {
   FUNC_9(VAR_15);
   FUNC_5(VAR_5->db_ipbmap->i_sb,
      "dbAllocCtl: the dmap is not all free");
   VAR_10 = -VAR_1;
   goto backout;
  }



  VAR_11 = FUNC_7(VAR_14, (s64)VAR_0);



  if ((VAR_10 = FUNC_2(VAR_5, VAR_16, VAR_12, VAR_11))) {
   FUNC_9(VAR_15);
   goto backout;
  }



  FUNC_10(VAR_15);
 }



 *VAR_9 = VAR_8;
 return (0);







      backout:



 for (VAR_14 = VAR_6 - VAR_14, VAR_12 = VAR_8; VAR_14 > 0;
      VAR_14 -= VAR_0, VAR_12 += VAR_0) {


  VAR_13 = FUNC_0(VAR_12, VAR_5->db_l2nbperpage);
  VAR_15 = FUNC_8(VAR_5->db_ipbmap, VAR_13, VAR_3, 0);
  if (VAR_15 == ((void*)0)) {



   FUNC_5(VAR_5->db_ipbmap->i_sb,
      "dbAllocCtl: I/O Error: Block Leakage.");
   continue;
  }
  VAR_16 = (struct dmap *) VAR_15->data;



  if (FUNC_4(VAR_5, VAR_16, VAR_12, VAR_0)) {



   FUNC_9(VAR_15);
   FUNC_5(VAR_5->db_ipbmap->i_sb,
      "dbAllocCtl: Block Leakage.");
   continue;
  }



  FUNC_10(VAR_15);
 }

 return (VAR_10);
}
