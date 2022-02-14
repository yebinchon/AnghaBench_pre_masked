
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel_id {int dummy; } ;
struct subchannel {int todo_work; } ;


 int VAR_0 ;
 struct subchannel* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct subchannel*,struct subchannel_id) ;
 int VAR_3 ;
 int FUNC_3 (struct subchannel*) ;
 struct subchannel* FUNC_4 (int,int) ;

__attribute__((used)) static struct subchannel *
FUNC_5(struct subchannel_id VAR_4)
{
 struct subchannel *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_4 (sizeof (*VAR_5), VAR_2 | VAR_1);
 if (VAR_5 == ((void*)0))
  return FUNC_0(-VAR_0);
 VAR_6 = FUNC_2 (VAR_5, VAR_4);
 if (VAR_6 < 0) {
  FUNC_3(VAR_5);
  return FUNC_0(VAR_6);
 }
 FUNC_1(&VAR_5->todo_work, VAR_3);
 return VAR_5;
}
