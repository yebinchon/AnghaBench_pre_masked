
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
typedef scalar_t__ s32 ;
struct TYPE_2__ {int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static s32 FUNC_1(u16 VAR_6,u16 VAR_7)
{
 s32 VAR_8 = 0;

 if(VAR_3==0x0001) {
  if(VAR_2==0x0000)
   VAR_8 = FUNC_0(VAR_0,VAR_6,VAR_7,&VAR_5.fd);
  else if(VAR_2==0x0001)
   VAR_8 = FUNC_0(VAR_1,VAR_6,VAR_7,&VAR_5.fd);
 } else
  VAR_8 = FUNC_0(VAR_1,VAR_6,VAR_7,&VAR_5.fd);


 if(VAR_8==0) VAR_4 = VAR_5.fd;
 return VAR_8;
}
