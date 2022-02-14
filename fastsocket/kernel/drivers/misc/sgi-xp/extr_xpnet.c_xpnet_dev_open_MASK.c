
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*,int ,...) ;
 int FUNC_1 (int ,char*,int ,int) ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,int *,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_9)
{
 enum xp_retval VAR_10;

 FUNC_0(VAR_7, "calling xpc_connect(%d, 0x%p, NULL, %ld, %ld, %ld, "
  "%ld)\n", VAR_1, VAR_8,
  (unsigned long)VAR_5,
  (unsigned long)VAR_4,
  (unsigned long)VAR_3,
  (unsigned long)VAR_2);

 VAR_10 = FUNC_2(VAR_1, VAR_8, ((void*)0),
     VAR_5, VAR_4,
     VAR_3, VAR_2);
 if (VAR_10 != VAR_6) {
  FUNC_1(VAR_7, "ifconfig up of %s failed on XPC connect, "
   "ret=%d\n", VAR_9->name, VAR_10);

  return -VAR_0;
 }

 FUNC_0(VAR_7, "ifconfig up of %s; XPC connected\n", VAR_9->name);

 return 0;
}
