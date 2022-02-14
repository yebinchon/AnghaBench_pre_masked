
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vid ;
typedef int u16 ;
struct virtnet_info {int dummy; } ;
struct scatterlist {int dummy; } ;
struct net_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ) ;
 struct virtnet_info* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct scatterlist*,int *,int) ;
 int FUNC_3 (struct virtnet_info*,int ,int ,struct scatterlist*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2, u16 VAR_3)
{
 struct virtnet_info *VAR_4 = FUNC_1(VAR_2);
 struct scatterlist VAR_5;

 FUNC_2(&VAR_5, &VAR_3, sizeof(VAR_3));

 if (!FUNC_3(VAR_4, VAR_0,
      VAR_1, &VAR_5, 1, 0))
  FUNC_0(&VAR_2->dev, "Failed to kill VLAN ID %d.\n", VAR_3);
}
