
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ dm_thin_id ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,int,unsigned long long*) ;

__attribute__((used)) static int FUNC_2(char *VAR_2, dm_thin_id *VAR_3, int VAR_4)
{
 if (!FUNC_1(VAR_2, 10, (unsigned long long *)VAR_3) &&
     *VAR_3 <= VAR_1)
  return 0;

 if (VAR_4)
  FUNC_0("Message received with invalid device id: %s", VAR_2);

 return -VAR_0;
}
