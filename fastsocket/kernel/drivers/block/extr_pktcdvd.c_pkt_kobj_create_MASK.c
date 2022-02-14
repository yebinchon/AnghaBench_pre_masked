
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pktcdvd_kobj {int kobj; struct pktcdvd_device* pd; } ;
struct pktcdvd_device {int dummy; } ;
struct kobject {int dummy; } ;
struct kobj_type {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct kobj_type*,struct kobject*,char*,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 struct pktcdvd_kobj* FUNC_3 (int,int ) ;

__attribute__((used)) static struct pktcdvd_kobj* FUNC_4(struct pktcdvd_device *VAR_2,
     const char* VAR_3,
     struct kobject* VAR_4,
     struct kobj_type* VAR_5)
{
 struct pktcdvd_kobj *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return ((void*)0);
 VAR_6->pd = VAR_2;
 VAR_7 = FUNC_0(&VAR_6->kobj, VAR_5, VAR_4, "%s", VAR_3);
 if (VAR_7) {
  FUNC_1(&VAR_6->kobj);
  return ((void*)0);
 }
 FUNC_2(&VAR_6->kobj, VAR_1);
 return VAR_6;
}
