
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fbt_probe_t ;
typedef int dev_info_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *,char*,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,int *,int ,int *,int *,int *,int *) ;
 int VAR_7 ;
 int FUNC_3 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int
FUNC_5(dev_info_t *VAR_14)
{
 if (VAR_13 == 0)
  VAR_13 = VAR_4;

 VAR_12 = VAR_13 - 1;
 VAR_11 =
     FUNC_4(VAR_13 * sizeof (fbt_probe_t *), VAR_5);

 FUNC_1(VAR_9);

 if (FUNC_0(VAR_14, "fbt", VAR_6, 0,
     VAR_1, 0) == VAR_0 ||
     FUNC_2("fbt", &VAR_7, VAR_3, ((void*)0),
     &VAR_10, ((void*)0), &VAR_8) != 0) {
  FUNC_3(VAR_14);
  return (VAR_0);
 }

 return (VAR_2);
}
