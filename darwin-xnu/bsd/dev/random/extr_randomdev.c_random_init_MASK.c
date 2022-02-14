
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ,int ,int ,int,char*,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (char*) ;
 int VAR_6 ;

void
FUNC_4(void)
{
 int VAR_7;

 VAR_7 = FUNC_0(VAR_2, &VAR_6);
 if (VAR_7 < 0) {
  FUNC_3("random_init: failed to allocate a major number!");
 }

 FUNC_1(FUNC_2 (VAR_7, VAR_3), VAR_0,
  VAR_4, VAR_1, 0666, "random", 0);





 FUNC_1(FUNC_2 (VAR_7, VAR_5), VAR_0,
  VAR_4, VAR_1, 0666, "urandom", 0);

}
