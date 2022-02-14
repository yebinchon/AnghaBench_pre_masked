
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dev_info_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,char*,int ,int ,int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (char*,int *,int ,int *,int *,int *,int *) ;
 int FUNC_3 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;

__attribute__((used)) static int
FUNC_4(dev_info_t *VAR_11)
{
 VAR_9 = (void*)&VAR_5;
 FUNC_3();

 if (FUNC_0(VAR_11, "systrace", VAR_4, 0,
     VAR_1, 0) == VAR_0 ||
     FUNC_2("syscall", &VAR_6, VAR_3, ((void*)0),
     &VAR_8, ((void*)0), &VAR_7) != 0) {
  VAR_9 = VAR_10;
  FUNC_1(VAR_11, ((void*)0));
  return (VAR_0);
 }

 return (VAR_2);
}
