
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct parisc_device {int hw_path; TYPE_1__ dev; } ;
struct hardware_path {int mod; } ;


 int FUNC_0 (int ,struct hardware_path*) ;
 char* FUNC_1 (struct hardware_path*,char*) ;

char *FUNC_2(struct parisc_device *VAR_0, char *VAR_1)
{
 struct hardware_path VAR_2;

 FUNC_0(VAR_0->dev.parent, &VAR_2);
 VAR_2.mod = VAR_0->hw_path;
 return FUNC_1(&VAR_2, VAR_1);
}
