
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmb_entry {unsigned long vpn; unsigned long ppn; unsigned long flags; } ;


 int VAR_0 ;
 struct pmb_entry* FUNC_0 (int ) ;
 int VAR_1 ;
 struct pmb_entry* FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct pmb_entry*) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct pmb_entry *FUNC_5(unsigned long VAR_4, unsigned long VAR_5,
       unsigned long VAR_6)
{
 struct pmb_entry *VAR_7;

 VAR_7 = FUNC_1(VAR_2, VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_7->vpn = VAR_4;
 VAR_7->ppn = VAR_5;
 VAR_7->flags = VAR_6;

 FUNC_3(&VAR_3);
 FUNC_2(VAR_7);
 FUNC_4(&VAR_3);

 return VAR_7;
}
