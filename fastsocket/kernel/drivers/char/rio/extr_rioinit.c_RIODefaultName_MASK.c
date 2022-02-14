
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rio_info {struct Host* RIOHosts; } ;
struct Host {TYPE_1__* Mapping; } ;
struct TYPE_2__ {int* Name; } ;


 int FUNC_0 (int*,char*,int) ;

int FUNC_1(struct rio_info *VAR_0, struct Host *VAR_1, unsigned int VAR_2)
{
 FUNC_0(VAR_1->Mapping[VAR_2].Name, "UNKNOWN RTA X-XX", 17);
 VAR_1->Mapping[VAR_2].Name[12]='1'+(VAR_1-VAR_0->RIOHosts);
 if ((VAR_2+1) > 9) {
  VAR_1->Mapping[VAR_2].Name[14]='0'+((VAR_2+1)/10);
  VAR_1->Mapping[VAR_2].Name[15]='0'+((VAR_2+1)%10);
 }
 else {
  VAR_1->Mapping[VAR_2].Name[14]='1'+VAR_2;
  VAR_1->Mapping[VAR_2].Name[15]=0;
 }
 return 0;
}
