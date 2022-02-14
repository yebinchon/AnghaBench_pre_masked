
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zs_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct zs_port*) ;
 int FUNC_1 (struct zs_port*,int ) ;

__attribute__((used)) static int FUNC_2(struct zs_port *VAR_2)
{
 int VAR_3 = 10000;

 while ((FUNC_1(VAR_2, VAR_0) & VAR_1) && --VAR_3)
  FUNC_0(VAR_2);
 return VAR_3;
}
