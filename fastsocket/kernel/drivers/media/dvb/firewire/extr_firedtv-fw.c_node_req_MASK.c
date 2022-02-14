
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct fw_device {int generation; int max_speed; int node_id; int card; } ;
struct firedtv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fw_device* FUNC_0 (struct firedtv*) ;
 int FUNC_1 (int ,int,int ,int,int ,int ,void*,size_t) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct firedtv *VAR_2, u64 VAR_3, void *VAR_4, size_t VAR_5,
      int VAR_6)
{
 struct fw_device *VAR_7 = FUNC_0(VAR_2);
 int VAR_8, VAR_9 = VAR_7->generation;

 FUNC_2();

 VAR_8 = FUNC_1(VAR_7->card, VAR_6, VAR_7->node_id,
   VAR_9, VAR_7->max_speed, VAR_3, VAR_4, VAR_5);

 return VAR_8 != VAR_1 ? -VAR_0 : 0;
}
