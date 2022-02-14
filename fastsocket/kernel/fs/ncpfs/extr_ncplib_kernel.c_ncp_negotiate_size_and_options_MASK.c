
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncp_server {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct ncp_server*,int) ;
 int FUNC_2 (struct ncp_server*,int) ;
 int FUNC_3 (struct ncp_server*) ;
 int FUNC_4 (struct ncp_server*,int ) ;
 int FUNC_5 (struct ncp_server*,int) ;
 int FUNC_6 (struct ncp_server*,int) ;
 int FUNC_7 (struct ncp_server*) ;

int
FUNC_8(struct ncp_server *VAR_1,
 int VAR_2, int VAR_3, int *VAR_4, int *VAR_5) {
 int VAR_6;


 if (VAR_2 < VAR_0) VAR_2 = VAR_0;

 FUNC_3(VAR_1);
 FUNC_1(VAR_1, VAR_2);
 FUNC_2(VAR_1, VAR_3);

 if ((VAR_6 = FUNC_6(VAR_1, 0x61)) != 0)
 {
  FUNC_7(VAR_1);
  return VAR_6;
 }


 VAR_6 = FUNC_4(VAR_1, 0);
 if (VAR_6 >= VAR_0)
  VAR_2 = FUNC_0(VAR_6, VAR_2);
 *VAR_4 = VAR_2;
 *VAR_5 = FUNC_5(VAR_1, 4);

 FUNC_7(VAR_1);
 return 0;
}
