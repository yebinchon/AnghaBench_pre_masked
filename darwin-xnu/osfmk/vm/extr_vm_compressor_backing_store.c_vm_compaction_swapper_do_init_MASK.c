
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vnode {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (char*,int,char*,char*,int ) ;
 scalar_t__ FUNC_6 (char*) ;
 char* VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_7 (int ,struct vnode*) ;
 int FUNC_8 (char*,struct vnode**) ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_9 (struct vnode*) ;
 scalar_t__ FUNC_10 (struct vnode*) ;
 int FUNC_11 (struct vnode*) ;

void
FUNC_12(void)
{
 struct vnode *VAR_18;
 char *VAR_19;
 int VAR_20;

 if (VAR_4)
  return;

 if (VAR_12 != VAR_3) {
  VAR_4 = 1;
  return;
 }
 FUNC_2(&VAR_15);

 if ( !VAR_4) {

  VAR_20 = (int)FUNC_6(VAR_5) + VAR_1 + 1;
  VAR_19 = (char*)FUNC_0(VAR_20);
  FUNC_4(VAR_19, 0, VAR_20);
  FUNC_5(VAR_19, VAR_20, "%s%d", VAR_5, 0);

  FUNC_8(VAR_19, &VAR_18);

  if (VAR_18) {

   if (FUNC_10(VAR_18) == VAR_0) {
           if (VAR_11 == 0)
            VAR_10 = 15;
           if (VAR_9 == 0)
            VAR_8 = 18;
           if (VAR_14 == 0)
            VAR_13 = 24;
    if (VAR_7 == 0)
            VAR_6 = 30;
   }

   FUNC_11(VAR_18);
   VAR_16 = FUNC_9(VAR_18);

   if (VAR_16)
    VAR_17 = VAR_2;

   FUNC_7((uint64_t)VAR_19, VAR_18);
  }
  FUNC_1(VAR_19, VAR_20);

  VAR_4 = 1;
 }
 FUNC_3(&VAR_15);
}
