
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int nProperties; unsigned int nChildren; } ;
struct TYPE_3__ {int length; char* name; } ;
typedef TYPE_1__ DeviceTreeNodeProperty ;
typedef TYPE_2__ DeviceTreeNode ;
typedef scalar_t__ DTEntry ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 scalar_t__ FUNC_0 (char*,char const*) ;

int FUNC_1(const char *VAR_3, const char *VAR_4, DTEntry *VAR_5)
{
 DeviceTreeNode *VAR_6 = (DeviceTreeNode *) (void *) VAR_2;
 unsigned int VAR_7;

 if (VAR_6->nProperties == 0) return(VAR_0);
 VAR_2 = (char *) (VAR_6 + 1);


 for (VAR_7 = 0; VAR_7 < VAR_6->nProperties; ++VAR_7) {
  DeviceTreeNodeProperty *VAR_8 = (DeviceTreeNodeProperty *) (void *) VAR_2;

  VAR_2 += sizeof (*VAR_8) + ((VAR_8->length + 3) & -4);

  if (FUNC_0 (VAR_8->name, VAR_3) == 0) {
   if (VAR_4 == ((void*)0) || FUNC_0( (char *)(VAR_8 + 1), VAR_4) == 0)
   {
    *VAR_5 = (DTEntry)VAR_6;
    return(VAR_1);
   }
  }
 }


 for (VAR_7 = 0; VAR_7 < VAR_6->nChildren; ++VAR_7)
 {
  if (FUNC_1(VAR_3, VAR_4, VAR_5) == VAR_1)
   return(VAR_1);
 }
 return(VAR_0);
}
