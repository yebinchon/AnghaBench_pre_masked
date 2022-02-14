
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gendisk {int node_id; int minors; int async_notify; int part0; TYPE_1__* part_tbl; } ;
struct TYPE_5__ {int * type; int * class; } ;
struct TYPE_4__ {int ** part; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (struct gendisk*,int ) ;
 TYPE_2__* FUNC_3 (struct gendisk*) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct gendisk*) ;
 struct gendisk* FUNC_7 (int,int,int) ;
 int VAR_4 ;
 int FUNC_8 (struct gendisk*) ;

struct gendisk *FUNC_9(int VAR_5, int VAR_6)
{
 struct gendisk *VAR_7;

 VAR_7 = FUNC_7(sizeof(struct gendisk),
    VAR_0 | VAR_1, VAR_6);
 if (VAR_7) {
  if (!FUNC_5(&VAR_7->part0)) {
   FUNC_6(VAR_7);
   return ((void*)0);
  }
  VAR_7->node_id = VAR_6;
  if (FUNC_2(VAR_7, 0)) {
   FUNC_4(&VAR_7->part0);
   FUNC_6(VAR_7);
   return ((void*)0);
  }
  VAR_7->part_tbl->part[0] = &VAR_7->part0;

  VAR_7->minors = VAR_5;
  FUNC_8(VAR_7);
  FUNC_3(VAR_7)->class = &VAR_2;
  FUNC_3(VAR_7)->type = &VAR_3;
  FUNC_1(FUNC_3(VAR_7));
  FUNC_0(&VAR_7->async_notify,
   VAR_4);
 }
 return VAR_7;
}
