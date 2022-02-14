
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_taskfile {scalar_t__ protocol; } ;
struct ata_port {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ata_port*,struct ata_taskfile const*) ;

__attribute__((used)) static void FUNC_2(struct ata_port *VAR_2,
      const struct ata_taskfile *VAR_3)
{
 FUNC_0(VAR_3->protocol == VAR_1 || VAR_3->protocol == VAR_0);
 FUNC_1(VAR_2, VAR_3);
}
