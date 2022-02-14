
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_port {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(const struct ata_port *VAR_1)
{
 return (VAR_1->flags & VAR_0) ? 4 : 2;
}
