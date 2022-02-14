
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ is_msix; } ;
struct msi_desc {TYPE_1__ msi_attrib; } ;
struct msi_attribute {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_1(struct msi_desc *VAR_0, struct msi_attribute *VAR_1,
        char *VAR_2)
{
 return FUNC_0(VAR_2, "%s\n", VAR_0->msi_attrib.is_msix ? "msix" : "msi");
}
