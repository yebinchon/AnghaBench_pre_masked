
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx8802_dev {int core; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int,int*) ;

__attribute__((used)) static int FUNC_2(struct cx8802_dev *VAR_1)
{
 u32 VAR_2[4]={0x12345678, 0x34567812, 0x56781234, 0x78123456};
 int VAR_3=0;
 u32 VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  FUNC_1(VAR_1->core, VAR_5, &VAR_4);
  if (VAR_4 == VAR_2[VAR_3])
   VAR_3++;
  else
   VAR_3 = 0;
  if (4 == VAR_3) {
   FUNC_0(1, "Mailbox signature found\n");
   return VAR_5+1;
  }
 }
 FUNC_0(0, "Mailbox signature values not found!\n");
 return -1;
}
