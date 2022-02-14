
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ leafidx; int* stree; } ;
struct dmap {scalar_t__* wmap; int start; TYPE_2__ tree; } ;
struct bmap {TYPE_1__* db_ipbmap; } ;
typedef int s8 ;
typedef int s64 ;
struct TYPE_3__ {int i_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct bmap*,struct dmap*,int,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static int
FUNC_7(struct bmap * VAR_7,
     struct dmap * VAR_8, s64 VAR_9, int VAR_10, int VAR_11, s64 * VAR_12)
{
 int VAR_13, VAR_14, VAR_15;
 s8 *VAR_16;

 if (VAR_8->tree.leafidx != FUNC_0(VAR_5)) {
  FUNC_3(VAR_7->db_ipbmap->i_sb,
     "dbAllocNear: Corrupt dmap page");
  return -VAR_2;
 }

 VAR_16 = VAR_8->tree.stree + FUNC_4(VAR_8->tree.leafidx);





 VAR_13 = (VAR_9 & (VAR_0 - 1)) >> VAR_4;
 VAR_14 = FUNC_6(VAR_13 + 4, VAR_6);



 for (; VAR_13 < VAR_14; VAR_13++) {


  if (VAR_16[VAR_13] < VAR_11)
   continue;




  VAR_9 = FUNC_5(VAR_8->start) + (VAR_13 << VAR_4);






  if (VAR_16[VAR_13] < VAR_1)
   VAR_9 +=
       FUNC_2(FUNC_4(VAR_8->wmap[VAR_13]), VAR_11);



  if ((VAR_15 = FUNC_1(VAR_7, VAR_8, VAR_9, VAR_10)) == 0)
   *VAR_12 = VAR_9;

  return (VAR_15);
 }

 return -VAR_3;
}
