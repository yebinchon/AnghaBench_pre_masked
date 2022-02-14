
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct blist {int dummy; } ;
typedef int daddr_t ;
typedef int blmeta_t ;
typedef TYPE_1__* blist_t ;
struct TYPE_4__ {int bl_blocks; int bl_radix; int bl_skip; int bl_rootblks; int * bl_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,int,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 void* FUNC_2 (int,int ,int ) ;
 int FUNC_3 (char*,int,...) ;

blist_t
FUNC_4(daddr_t VAR_4)
{
 blist_t VAR_5;
 int VAR_6;
 int VAR_7 = 0;




 VAR_6 = VAR_0;

 while (VAR_6 < VAR_4) {
  VAR_6 <<= VAR_1;
  VAR_7 = (VAR_7 + 1) << VAR_1;
 }

 VAR_5 = FUNC_2(sizeof(struct blist), VAR_2, VAR_3);

 FUNC_1(VAR_5, sizeof(*VAR_5));

 VAR_5->bl_blocks = VAR_4;
 VAR_5->bl_radix = VAR_6;
 VAR_5->bl_skip = VAR_7;
 VAR_5->bl_rootblks = 1 +
     FUNC_0(((void*)0), VAR_5->bl_radix, VAR_5->bl_skip, VAR_4);
 VAR_5->bl_root = FUNC_2(sizeof(blmeta_t) * VAR_5->bl_rootblks, VAR_2, VAR_3);
 FUNC_0(VAR_5->bl_root, VAR_5->bl_radix, VAR_5->bl_skip, VAR_4);

 return(VAR_5);
}
