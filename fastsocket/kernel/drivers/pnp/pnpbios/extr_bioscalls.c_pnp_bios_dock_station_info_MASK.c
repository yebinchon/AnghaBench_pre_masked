
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pnp_docking_station_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,struct pnp_docking_station_info*,int,int *,int ) ;
 int FUNC_1 () ;

int FUNC_2(struct pnp_docking_station_info *VAR_4)
{
 u16 VAR_5;

 if (!FUNC_1())
  return VAR_1;
 VAR_5 = FUNC_0(VAR_2, 0, VAR_3,
          VAR_0, 0, 0, 0, 0, VAR_4,
          sizeof(struct pnp_docking_station_info), ((void*)0),
          0);
 return VAR_5;
}
