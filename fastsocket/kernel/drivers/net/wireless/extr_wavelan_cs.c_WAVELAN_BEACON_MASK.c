
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; int member_8; } ;
typedef TYPE_1__ wavepoint_beacon ;


 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__ const*,int) ;

__attribute__((used)) static inline int FUNC_1(unsigned char *VAR_0)
{
  wavepoint_beacon *VAR_1= (wavepoint_beacon *)VAR_0;
  static const wavepoint_beacon VAR_2={0xaa,0xaa,0x03,0x08,0x00,0x0e,0x20,0x03,0x00};

  if(FUNC_0(VAR_1,&VAR_2,9)==0)
    return 1;
  else
    return 0;
}
