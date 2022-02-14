
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvscsi_adapter {int dev; } ;
struct msix_entry {unsigned int vector; int member_1; int member_0; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct msix_entry*,int) ;

__attribute__((used)) static int FUNC_1(const struct pvscsi_adapter *VAR_1,
        unsigned int *VAR_2)
{
 struct msix_entry VAR_3 = { 0, VAR_0 };
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1->dev, &VAR_3, 1);
 if (VAR_4)
  return VAR_4;

 *VAR_2 = VAR_3.vector;

 return 0;
}
