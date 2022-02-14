
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enic {int vdev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct enic*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct enic *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2->vdev, VAR_0,
  VAR_1, 0);
 if (VAR_3)
  FUNC_0(FUNC_2(VAR_2), "vNIC device open failed, err %d\n",
   VAR_3);

 return VAR_3;
}
