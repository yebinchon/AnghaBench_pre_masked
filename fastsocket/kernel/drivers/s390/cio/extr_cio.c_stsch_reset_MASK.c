
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel_id {int dummy; } ;
struct schib {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (struct subchannel_id,struct schib*) ;

__attribute__((used)) static int FUNC_2(struct subchannel_id VAR_4, struct schib *VAR_5)
{
 int VAR_6;

 VAR_2 = 0;
 VAR_3 = VAR_1;
 VAR_6 = FUNC_1(VAR_4, VAR_5);
 VAR_3 = ((void*)0);


 FUNC_0();

 if (VAR_2)
  return -VAR_0;
 else
  return VAR_6;
}
