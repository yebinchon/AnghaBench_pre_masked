
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_2__ {int colocationid; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef int * HeapTuple ;
typedef TYPE_1__* Form_pg_dist_colocation ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_7 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int ,int ,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ,int,int *,int const,int *) ;
 int FUNC_11 (int ) ;
 int * FUNC_12 (int ) ;

uint32
FUNC_13(int VAR_8, int VAR_9, Oid VAR_10)
{
 uint32 VAR_11 = VAR_7;
 HeapTuple VAR_12 = ((void*)0);
 SysScanDesc VAR_13;
 const int VAR_14 = 3;
 ScanKeyData VAR_15[3];
 bool VAR_16 = 1;

 Relation VAR_17 = FUNC_9(FUNC_1(), VAR_0);


 FUNC_6(&VAR_15[0], VAR_3,
    VAR_4, VAR_5, FUNC_7(VAR_8));
 FUNC_6(&VAR_15[1], VAR_2,
    VAR_4, VAR_5, FUNC_4(VAR_9));
 FUNC_6(&VAR_15[2], VAR_1,
    VAR_4, VAR_6, FUNC_5(VAR_10));

 VAR_13 = FUNC_10(VAR_17,
          FUNC_0(),
          VAR_16, ((void*)0), VAR_14, VAR_15);

 VAR_12 = FUNC_12(VAR_13);
 if (FUNC_3(VAR_12))
 {
  Form_pg_dist_colocation VAR_18 =
   (Form_pg_dist_colocation) FUNC_2(VAR_12);

  VAR_11 = VAR_18->colocationid;
 }

 FUNC_11(VAR_13);
 FUNC_8(VAR_17, VAR_0);

 return VAR_11;
}
