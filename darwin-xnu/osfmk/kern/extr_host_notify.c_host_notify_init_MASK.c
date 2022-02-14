
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct host_notify_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int *) ;
 int FUNC_3 (int *,int *,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int,int,char*) ;

void
FUNC_6(void)
{
 int VAR_8;

 for (VAR_8 = 0; VAR_8 <= VAR_0; VAR_8++)
  FUNC_4(&VAR_6[VAR_8]);

 FUNC_1(&VAR_5);
 FUNC_2(&VAR_4, "host_notify", &VAR_5);
 FUNC_0(&VAR_2);

 FUNC_3(&VAR_1, &VAR_3, &VAR_4, &VAR_2);

 VAR_8 = sizeof (struct host_notify_entry);
 VAR_7 =
   FUNC_5(VAR_8, (4096 * VAR_8), (16 * VAR_8), "host_notify");
}
