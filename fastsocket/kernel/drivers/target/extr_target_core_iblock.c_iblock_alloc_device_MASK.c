
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_hba {int dummy; } ;
struct se_device {int dummy; } ;
struct iblock_dev {struct se_device dev; } ;


 int VAR_0 ;
 struct iblock_dev* FUNC_0 (int,int ) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static struct se_device *FUNC_3(struct se_hba *VAR_1, const char *VAR_2)
{
 struct iblock_dev *VAR_3 = ((void*)0);

 VAR_3 = FUNC_0(sizeof(struct iblock_dev), VAR_0);
 if (!VAR_3) {
  FUNC_2("Unable to allocate struct iblock_dev\n");
  return ((void*)0);
 }

 FUNC_1( "IBLOCK: Allocated ib_dev for %s\n", VAR_2);

 return &VAR_3->dev;
}
