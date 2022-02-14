
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdio_ops {int dummy; } ;
struct cphy {int dummy; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cphy*) ;
 int FUNC_1 (struct cphy*,struct adapter*,int,int *,struct mdio_ops const*,int,char*) ;

int FUNC_2(struct cphy *VAR_4, struct adapter *VAR_5,
   int VAR_6, const struct mdio_ops *VAR_7)
{
 FUNC_1(VAR_4, VAR_5, VAR_6, &VAR_3, VAR_7,
    VAR_0 | VAR_1 | VAR_2,
     "10GBASE-R");
 FUNC_0(VAR_4);
 return 0;
}
