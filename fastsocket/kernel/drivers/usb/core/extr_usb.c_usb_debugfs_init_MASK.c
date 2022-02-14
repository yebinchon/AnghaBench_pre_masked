
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int * FUNC_0 (char*,int *) ;
 int FUNC_1 (char*,int,int *,int *,int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(void)
{
 VAR_2 = FUNC_0("usb", ((void*)0));
 if (!VAR_2)
  return -VAR_0;

 VAR_1 = FUNC_1("devices", 0444,
      VAR_2, ((void*)0),
      &VAR_3);
 if (!VAR_1) {
  FUNC_2(VAR_2);
  VAR_2 = ((void*)0);
  return -VAR_0;
 }

 return 0;
}
