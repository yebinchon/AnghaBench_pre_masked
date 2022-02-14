
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int addr; } ;


 int FUNC_0 (char**) ;
 char** VAR_0 ;
 int FUNC_1 (struct i2c_client*,unsigned char*,int ) ;
 int FUNC_2 (char*,char*,int,char*) ;

__attribute__((used)) static void FUNC_3(char *VAR_1, struct i2c_client *VAR_2)
{
 unsigned char VAR_3;
 int VAR_4,VAR_5;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  VAR_2->addr = VAR_4;
  VAR_5 = FUNC_1(VAR_2,&VAR_3,0);
  if (VAR_5 < 0)
   continue;
  FUNC_2("%s: i2c scan: found device @ 0x%x  [%s]\n",
         VAR_1, VAR_4 << 1, VAR_0[VAR_4] ? VAR_0[VAR_4] : "???");
 }
}
