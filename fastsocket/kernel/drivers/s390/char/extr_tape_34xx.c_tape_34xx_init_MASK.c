
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int,int,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_5 (void)
{
 int VAR_3;

 VAR_0 = FUNC_2 ( "tape_34xx", 2, 2, 4*sizeof(long));
 FUNC_3(VAR_0, &VAR_1);




 FUNC_0(3, "34xx init\n");

 VAR_3 = FUNC_1(&VAR_2);
 if (VAR_3)
  FUNC_0(3, "34xx init failed\n");
 else
  FUNC_0(3, "34xx registered\n");
 return VAR_3;
}
