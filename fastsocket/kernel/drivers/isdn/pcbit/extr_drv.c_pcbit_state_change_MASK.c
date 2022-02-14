
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcbit_dev {int id; } ;
struct pcbit_chan {int id; } ;


 char** VAR_0 ;
 int FUNC_0 (struct pcbit_dev*,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*,int,int,char*,char*,char*) ;
 char* FUNC_3 (unsigned short) ;

void FUNC_4(struct pcbit_dev * VAR_1, struct pcbit_chan * VAR_2,
   unsigned short VAR_3, unsigned short VAR_4, unsigned short VAR_5)
{
 char VAR_6[256];

 FUNC_2(VAR_6, "change on device: %d channel:%d\n%s -> %s -> %s\n",
  VAR_1->id, VAR_2->id,
  VAR_0[VAR_3], FUNC_3(VAR_4), VAR_0[VAR_5]
  );





 FUNC_0(VAR_1, VAR_6);
}
