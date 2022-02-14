
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,int ,char*,int ) ;

int FUNC_4(void)
{
 unsigned long VAR_5;
 int VAR_6;

 FUNC_1(VAR_5);

 VAR_6 = FUNC_2();
 if (VAR_6) goto out;

 VAR_6 = FUNC_3(VAR_1, VAR_3, VAR_0, "ADB",
     VAR_3);
 if (VAR_6) goto out;

 VAR_4 = VAR_2;
out:
 FUNC_0(VAR_5);
 return VAR_6;
}
