
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct mlx4_ib_sriov {int id_map_lock; int cm_list; int pv_id_table; } ;
struct id_map_entry {int slave_id; int list; void* pv_cm_id; int timeout; TYPE_1__* dev; scalar_t__ scheduled_delete; void* sl_cm_id; } ;
struct ib_device {int dummy; } ;
struct TYPE_2__ {struct mlx4_ib_sriov sriov; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct id_map_entry* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,struct id_map_entry*,int,int*) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (struct id_map_entry*) ;
 struct id_map_entry* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct ib_device*,char*,...) ;
 int FUNC_8 (struct ib_device*,struct id_map_entry*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 TYPE_1__* FUNC_11 (struct ib_device*) ;

__attribute__((used)) static struct id_map_entry *
FUNC_12(struct ib_device *VAR_5, int VAR_6, u32 VAR_7)
{
 int VAR_8, VAR_9;
 static int VAR_10;
 struct id_map_entry *VAR_11;
 struct mlx4_ib_sriov *VAR_12 = &FUNC_11(VAR_5)->sriov;

 VAR_11 = FUNC_5(sizeof (struct id_map_entry), VAR_2);
 if (!VAR_11) {
  FUNC_7(VAR_5, "Couldn't allocate id cache entry - out of memory\n");
  return FUNC_0(-VAR_1);
 }

 VAR_11->sl_cm_id = VAR_7;
 VAR_11->slave_id = VAR_6;
 VAR_11->scheduled_delete = 0;
 VAR_11->dev = FUNC_11(VAR_5);
 FUNC_1(&VAR_11->timeout, VAR_4);

 do {
  FUNC_9(&FUNC_11(VAR_5)->sriov.id_map_lock);
  VAR_8 = FUNC_2(&VAR_12->pv_id_table, VAR_11,
     VAR_10, &VAR_9);
  if (!VAR_8) {
   VAR_10 = ((unsigned) VAR_9 + 1) & VAR_3;
   VAR_11->pv_cm_id = (u32)VAR_9;
   FUNC_8(VAR_5, VAR_11);
  }

  FUNC_10(&VAR_12->id_map_lock);
 } while (VAR_8 == -VAR_0 && FUNC_3(&VAR_12->pv_id_table, VAR_2));

 if (!VAR_8) {
  FUNC_9(&VAR_12->id_map_lock);
  FUNC_6(&VAR_11->list, &VAR_12->cm_list);
  FUNC_10(&VAR_12->id_map_lock);
  return VAR_11;
 }

 FUNC_4(VAR_11);
 FUNC_7(VAR_5, "No more space in the idr (err:0x%x)\n", VAR_8);
 return FUNC_0(-VAR_1);
}
