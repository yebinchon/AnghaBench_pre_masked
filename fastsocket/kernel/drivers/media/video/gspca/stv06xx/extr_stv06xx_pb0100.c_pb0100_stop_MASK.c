
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct sd*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct sd *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3, VAR_1, 1);

 if (VAR_4 < 0)
  goto out;


 VAR_4 = FUNC_2(VAR_3, VAR_2, FUNC_0(5)|FUNC_0(3));

 FUNC_1(VAR_0, "Halting stream");
out:
 return (VAR_4 < 0) ? VAR_4 : 0;
}
