
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_port {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ata_port*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct ata_port *VAR_1)
{
 unsigned int VAR_2;
 int VAR_3 = 0;


 for (VAR_2 = 0; VAR_2 < VAR_0 - 1; VAR_2++)
  if (FUNC_0(VAR_1, VAR_2))
   VAR_3++;

 return VAR_3;
}
