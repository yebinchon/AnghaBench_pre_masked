
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct xpnet_message {int dummy; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;
struct TYPE_4__ {int name; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (short,scalar_t__) ;
 int FUNC_2 (short,scalar_t__) ;
 int FUNC_3 (unsigned long*,short) ;
 int FUNC_4 (int ,char*,int ,short) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;


 short VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_9 (short,int,struct xpnet_message*) ;

__attribute__((used)) static void
FUNC_10(enum xp_retval VAR_6, short VAR_7, int VAR_8,
     void *VAR_9, void *VAR_10)
{
 FUNC_0(VAR_7 < 0 || VAR_7 >= VAR_1);
 FUNC_0(VAR_8 != VAR_0);

 switch (VAR_6) {
 case 128:
  FUNC_0(VAR_9 == ((void*)0));

  FUNC_9(VAR_7, VAR_8, (struct xpnet_message *)VAR_9);
  break;

 case 129:
  FUNC_7(&VAR_3);
  FUNC_2(VAR_7, VAR_4);
  FUNC_8(&VAR_3);

  FUNC_6(VAR_5);

  FUNC_4(VAR_2, "%s connected to partition %d\n",
   VAR_5->name, VAR_7);
  break;

 default:
  FUNC_7(&VAR_3);
  FUNC_1(VAR_7, VAR_4);
  FUNC_8(&VAR_3);

  if (FUNC_3((unsigned long *)VAR_4,
     VAR_1)) {
   FUNC_5(VAR_5);
  }

  FUNC_4(VAR_2, "%s disconnected from partition %d\n",
   VAR_5->name, VAR_7);
  break;
 }
}
