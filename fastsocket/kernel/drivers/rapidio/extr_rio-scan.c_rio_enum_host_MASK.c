
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rio_mport {int host_deviceid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rio_mport*,int ,int*) ;
 int FUNC_1 (struct rio_mport*,int) ;
 int FUNC_2 (struct rio_mport*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct rio_mport *VAR_2)
{
 u32 VAR_3;


 FUNC_2(VAR_2, VAR_0,
      VAR_2->host_deviceid);

 FUNC_0(VAR_2, VAR_0, &VAR_3);
 if ((VAR_3 & 0xffff) != VAR_2->host_deviceid)
  return -1;


 FUNC_1(VAR_2, VAR_2->host_deviceid);

 if (VAR_1 == VAR_2->host_deviceid)
  VAR_1++;

 return 0;
}
