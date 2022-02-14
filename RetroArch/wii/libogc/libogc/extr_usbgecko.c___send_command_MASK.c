
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int *,int,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static __inline__ int FUNC_4(s32 VAR_3,u16 *VAR_4)
{
 s32 VAR_5 = 0;

 if(!FUNC_2(VAR_3,VAR_0,VAR_2)) VAR_5 |= 0x01;
 if(!FUNC_1(VAR_3,VAR_4,sizeof(u16),VAR_1,((void*)0))) VAR_5 |= 0x02;
 if(!FUNC_3(VAR_3)) VAR_5 |= 0x04;
 if(!FUNC_0(VAR_3)) VAR_5 |= 0x08;

 if(VAR_5) return 0;
 return 1;
}
