
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cphy*,struct adapter*,int,int *,struct mdio_ops const*,int,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct cphy*,int ,int ,int ,int) ;

int FUNC_3(struct cphy *VAR_7, struct adapter *VAR_8,
   int VAR_9, const struct mdio_ops *VAR_10)
{
 FUNC_0(VAR_7, VAR_8, VAR_9, &VAR_6, VAR_10,
    VAR_2 | VAR_3 | VAR_4 |
    VAR_5, "10GBASE-R");
 FUNC_1(125);
 return FUNC_2(VAR_7, VAR_1, VAR_0, 0,
       1 << 5);
}
