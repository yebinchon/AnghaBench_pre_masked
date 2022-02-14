
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcd_unit {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct pcd_unit*,char*,int,char*) ;
 int FUNC_2 (struct pcd_unit*,char*,char*) ;
 int FUNC_3 (struct pcd_unit*,char*) ;

__attribute__((used)) static int FUNC_4(struct pcd_unit *VAR_0, char *VAR_1, int VAR_2, char *VAR_3, char *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_4);
 FUNC_0(1);
 if (!VAR_5)
  VAR_5 = FUNC_2(VAR_0, VAR_3, VAR_4);
 if (VAR_5)
  FUNC_3(VAR_0, VAR_4);

 return VAR_5;
}
