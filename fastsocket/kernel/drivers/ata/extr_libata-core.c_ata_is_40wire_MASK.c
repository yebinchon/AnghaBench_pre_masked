
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_device {int horkage; int id; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ata_device *VAR_1)
{
 if (VAR_1->horkage & VAR_0)
  return FUNC_1(VAR_1->id);
 return FUNC_0(VAR_1->id);
}
