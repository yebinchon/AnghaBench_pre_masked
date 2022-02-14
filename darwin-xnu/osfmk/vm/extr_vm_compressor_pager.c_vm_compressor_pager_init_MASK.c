
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct compressor_pager {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int,int,char*) ;
 int FUNC_5 (int ,int ,int ) ;

void
FUNC_6(void)
{
 FUNC_1(&VAR_6);
 FUNC_2(&VAR_5, "compressor_pager", &VAR_6);
 FUNC_0(&VAR_4);

 VAR_7 = FUNC_4(sizeof (struct compressor_pager),
          10000 * sizeof (struct compressor_pager),
          8192, "compressor_pager");
 FUNC_5(VAR_7, VAR_2, VAR_0);
 FUNC_5(VAR_7, VAR_3, VAR_1);

 FUNC_3();
}
