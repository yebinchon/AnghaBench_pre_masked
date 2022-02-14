
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fw_device {int max_speed; int node_id; int card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int,int ,int,int *,int) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct fw_device *VAR_3,
      int VAR_4, int VAR_5, u32 *VAR_6)
{
 int VAR_7;


 FUNC_2();

 VAR_7 = FUNC_1(VAR_3->card, VAR_2,
   VAR_3->node_id, VAR_4, VAR_3->max_speed,
   (VAR_1 | VAR_0) + VAR_5 * 4,
   VAR_6, 4);
 FUNC_0(VAR_6);

 return VAR_7;
}
