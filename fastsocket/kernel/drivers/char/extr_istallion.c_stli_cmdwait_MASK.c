
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stliport {scalar_t__ rc; int state; int raw_wait; } ;
struct stlibrd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct stlibrd*,struct stliport*,unsigned long,void*,int,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct stlibrd *VAR_4, struct stliport *VAR_5, unsigned long VAR_6, void *VAR_7, int VAR_8, int VAR_9)
{
 FUNC_3(VAR_5->raw_wait,
   !FUNC_2(VAR_2, &VAR_5->state));
 if (FUNC_0(VAR_3))
  return -VAR_1;

 FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);

 FUNC_3(VAR_5->raw_wait,
   !FUNC_2(VAR_2, &VAR_5->state));
 if (FUNC_0(VAR_3))
  return -VAR_1;

 if (VAR_5->rc != 0)
  return -VAR_0;
 return 0;
}
