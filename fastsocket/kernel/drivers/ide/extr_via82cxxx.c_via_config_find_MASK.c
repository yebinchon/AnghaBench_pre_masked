
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via_isa_bridge {int flags; scalar_t__ rev_min; scalar_t__ rev_max; scalar_t__ id; } ;
struct pci_dev {scalar_t__ revision; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*) ;
 struct pci_dev* FUNC_1 (scalar_t__,scalar_t__,int *) ;
 struct via_isa_bridge* VAR_2 ;

__attribute__((used)) static struct via_isa_bridge *FUNC_2(struct pci_dev **VAR_3)
{
 struct via_isa_bridge *VAR_4;

 for (VAR_4 = VAR_2; VAR_4->id; VAR_4++)
  if ((*VAR_3 = FUNC_1(VAR_0 +
   !!(VAR_4->flags & VAR_1),
   VAR_4->id, ((void*)0)))) {

   if ((*VAR_3)->revision >= VAR_4->rev_min &&
       (*VAR_3)->revision <= VAR_4->rev_max)
    break;
   FUNC_0(*VAR_3);
  }

 return VAR_4;
}
