
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slgt_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct slgt_info*,int ) ;
 int FUNC_1 (struct slgt_info*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct slgt_info *VAR_3)
{
 unsigned int VAR_4;


 FUNC_1(VAR_3, VAR_2, VAR_1);


 for(VAR_4=0 ; VAR_4 < 1000 ; VAR_4++)
  if (!(FUNC_0(VAR_3, VAR_2) & VAR_0))
   break;
}
