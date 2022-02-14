
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bmap {TYPE_1__* db_ipbmap; int db_maxlevel; } ;
typedef int s64 ;
struct TYPE_2__ {int i_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bmap*,int ,int,int ,int *) ;
 int FUNC_1 (struct bmap*,int,int ,int *) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct bmap * VAR_2, s64 VAR_3, int VAR_4, s64 * VAR_5)
{
 int VAR_6;
 s64 VAR_7 = 0;







 if ((VAR_6 = FUNC_1(VAR_2, VAR_4, VAR_2->db_maxlevel, &VAR_7)))
  return (VAR_6);



 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_7, VAR_5);
 if (VAR_6 == -VAR_1) {
  FUNC_2(VAR_2->db_ipbmap->i_sb,
     "dbAllocAny: unable to allocate blocks");
  return -VAR_0;
 }
 return (VAR_6);
}
