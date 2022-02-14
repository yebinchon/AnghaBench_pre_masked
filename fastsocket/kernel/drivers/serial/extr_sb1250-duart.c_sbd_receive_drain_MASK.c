
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbd_port {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sbd_port*,int ) ;
 scalar_t__ FUNC_1 (struct sbd_port*) ;

__attribute__((used)) static int FUNC_2(struct sbd_port *VAR_1)
{
 int VAR_2 = 10000;

 while (FUNC_1(VAR_1) && --VAR_2)
  FUNC_0(VAR_1, VAR_0);
 return VAR_2;
}
