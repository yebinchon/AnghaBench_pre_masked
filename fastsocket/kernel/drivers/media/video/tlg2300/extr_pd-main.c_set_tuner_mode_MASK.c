
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poseidon {int state; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct poseidon*,int ,unsigned char,scalar_t__*) ;

int FUNC_1(struct poseidon *VAR_4, unsigned char VAR_5)
{
 s32 VAR_6, VAR_7;

 if (VAR_4->state & VAR_2)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_4, VAR_3, VAR_5, &VAR_7);
 if (VAR_6 || VAR_7)
  return -VAR_1;
 return 0;
}
