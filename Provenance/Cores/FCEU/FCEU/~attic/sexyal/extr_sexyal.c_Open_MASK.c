
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int SetConvert; int CanWrite; int Close; int Write; } ;
typedef int SexyAL_format ;
typedef TYPE_1__ SexyAL_device ;
typedef int SexyAL_buffering ;
typedef int SexyAL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int ,int *,int *) ;
 TYPE_1__* FUNC_1 (int ,int *,int *) ;
 int VAR_3 ;

__attribute__((used)) static SexyAL_device *FUNC_2(SexyAL *VAR_4, uint64_t VAR_5, SexyAL_format *VAR_6, SexyAL_buffering *VAR_7)
{
 SexyAL_device *VAR_8;




 if(!(VAR_8=FUNC_1(VAR_5,VAR_6,VAR_7))) return(0);


 VAR_8->Write=VAR_3;
 VAR_8->Close=VAR_1;
 VAR_8->CanWrite=VAR_0;
 VAR_8->SetConvert=VAR_2;
 return(VAR_8);
}
