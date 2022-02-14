
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct inquiry_info_ex {int co; int psm; int psrm; int bdaddr; int cod; } ;
typedef int s32_t ;
typedef int s32 ;
typedef scalar_t__ err_t ;
struct TYPE_3__ {scalar_t__ num_founddevs; int num_maxdevs; struct inquiry_info_ex* info; scalar_t__ hci_cmddone; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_4 (int,int,int,int ) ;
 int FUNC_5 (int ,int ,int) ;

s32 FUNC_6(struct inquiry_info_ex *VAR_3,u8 VAR_4,u8 VAR_5)
{
 s32_t VAR_6;
 u32 VAR_7,VAR_8;
 err_t VAR_9;
 struct inquiry_info_ex *VAR_10;

 VAR_9 = VAR_0;

 FUNC_0(VAR_7);
 if(VAR_2.num_founddevs==0 || VAR_5==1) {
  VAR_2.hci_cmddone = 0;
  VAR_2.num_maxdevs = VAR_4;
  FUNC_4(0x009E8B33,0x03,VAR_4,VAR_1);
  VAR_9 = FUNC_2(&VAR_2);
 }
 VAR_8 = VAR_2.num_founddevs;
 VAR_10 = VAR_2.info;
 FUNC_1(VAR_7);

 if(VAR_9==VAR_0) {
  for(VAR_6=0;VAR_6<VAR_8 && VAR_6<VAR_4;VAR_6++) {
   FUNC_5(VAR_3[VAR_6].cod,VAR_10[VAR_6].cod,3);
   FUNC_3(&(VAR_3[VAR_6].bdaddr),&(VAR_10[VAR_6].bdaddr));
   VAR_3[VAR_6].psrm = VAR_10[VAR_6].psrm;
   VAR_3[VAR_6].psm = VAR_10[VAR_6].psm;
   VAR_3[VAR_6].co = VAR_10[VAR_6].co;
  }
 }
 return (s32)((VAR_9==VAR_0) ? VAR_8 : VAR_9);
}
