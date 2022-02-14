
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioc3_driver_data {unsigned char* nic_serial; int nic_part; } ;


 int FUNC_0 (struct ioc3_driver_data*,unsigned long,unsigned char*) ;
 int FUNC_1 (struct ioc3_driver_data*,unsigned long,int,unsigned char*,unsigned char*) ;
 int FUNC_2 (int ,unsigned char*) ;
 int FUNC_3 (unsigned char*,char*,int) ;

__attribute__((used)) static void FUNC_4(struct ioc3_driver_data *VAR_0, unsigned long VAR_1)
{
 unsigned char VAR_2[64];
 unsigned char VAR_3[64],VAR_4[32];
 int VAR_5,VAR_6;


 FUNC_0(VAR_0, VAR_1, VAR_2);

 FUNC_1(VAR_0, VAR_1, 0, VAR_2, VAR_3);
 FUNC_1(VAR_0, VAR_1, 1, VAR_2, VAR_3+32);

 VAR_6=0;
 for(VAR_5=0;VAR_5<19;VAR_5++)
  if(VAR_3[VAR_5+11] != ' ')
   VAR_4[VAR_6++] = VAR_3[VAR_5+11];
 for(VAR_5=0;VAR_5<6;VAR_5++)
  if(VAR_3[VAR_5+32] != ' ')
   VAR_4[VAR_6++] = VAR_3[VAR_5+32];
 VAR_4[VAR_6] = 0;

 if(!FUNC_3(VAR_4, "060-0035-", 9))
  return;
 if(!FUNC_3(VAR_4, "060-0038-", 9))
  return;
 FUNC_2(VAR_0->nic_part, VAR_4);

 VAR_6=0;
 for(VAR_5=0;VAR_5<10;VAR_5++)
  if(VAR_3[VAR_5+1] != ' ')
   VAR_0->nic_serial[VAR_6++] = VAR_3[VAR_5+1];
 VAR_0->nic_serial[VAR_6] = 0;
}
