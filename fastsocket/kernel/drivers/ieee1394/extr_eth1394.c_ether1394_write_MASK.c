
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct hpsb_host {int id; } ;
struct eth1394_host_info {int dev; } ;
typedef int quadlet_t ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int,int,char*,size_t) ;
 struct eth1394_host_info* FUNC_2 (int *,struct hpsb_host*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct hpsb_host *VAR_4, int VAR_5, int VAR_6,
      quadlet_t *VAR_7, u64 VAR_8, size_t VAR_9, u16 VAR_10)
{
 struct eth1394_host_info *VAR_11;

 VAR_11 = FUNC_2(&VAR_3, VAR_4);
 if (FUNC_3(!VAR_11)) {
  FUNC_0(VAR_0, "No net device at fw-host%d\n",
    VAR_4->id);
  return VAR_1;
 }

 if (FUNC_1(VAR_11->dev, VAR_5, VAR_6, (char*)VAR_7, VAR_9))
  return VAR_1;
 else
  return VAR_2;
}
