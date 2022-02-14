
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct temac_local {int indirect_mutex; } ;
struct net_device {int* dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*,void*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct temac_local* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (struct temac_local*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_3, void *VAR_4)
{
 struct temac_local *VAR_5 = FUNC_4(VAR_3);

 if (VAR_4)
  FUNC_1(VAR_3->dev_addr, VAR_4, VAR_0);

 if (!FUNC_0(VAR_3->dev_addr))
  FUNC_5(VAR_3->dev_addr);


 FUNC_2(&VAR_5->indirect_mutex);
 FUNC_6(VAR_5, VAR_1,
        (VAR_3->dev_addr[0]) |
        (VAR_3->dev_addr[1] << 8) |
        (VAR_3->dev_addr[2] << 16) |
        (VAR_3->dev_addr[3] << 24));


 FUNC_6(VAR_5, VAR_2,
        (VAR_3->dev_addr[4] & 0x000000ff) |
        (VAR_3->dev_addr[5] << 8));
 FUNC_3(&VAR_5->indirect_mutex);

 return 0;
}
