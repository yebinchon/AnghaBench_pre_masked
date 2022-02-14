
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cardstate {scalar_t__ mstate; scalar_t__ connected; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cardstate*) ;
 int FUNC_1 (struct cardstate*,int ) ;

__attribute__((used)) static int FUNC_2(struct cardstate *VAR_5)
{
 if (VAR_5->mstate != VAR_2)
  return -VAR_0;

 VAR_5->mstate = VAR_3;
 VAR_5->mode = VAR_4;
 FUNC_0(VAR_5);
 if (VAR_5->connected)
  FUNC_1(VAR_5, VAR_1);

 return 0;
}
