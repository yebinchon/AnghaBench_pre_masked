
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pstore {scalar_t__ callbacks; scalar_t__ io_client; int metadata_wq; } ;
struct dm_exception_store {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct pstore*) ;
 struct pstore* FUNC_3 (struct dm_exception_store*) ;
 int FUNC_4 (struct pstore*) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct dm_exception_store *VAR_0)
{
 struct pstore *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(VAR_1->metadata_wq);


 if (VAR_1->io_client)
  FUNC_1(VAR_1->io_client);
 FUNC_2(VAR_1);


 if (VAR_1->callbacks)
  FUNC_5(VAR_1->callbacks);

 FUNC_4(VAR_1);
}
