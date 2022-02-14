
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* rd_partdesc; } ;
struct TYPE_5__ {int nparts; int * oids; } ;
typedef TYPE_2__* Relation ;
typedef int Oid ;
typedef int List ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,char*) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_6 (int ,int ) ;
 int * FUNC_7 (int *,int ) ;

List *
FUNC_8(Oid VAR_4)
{
 Relation VAR_5 = FUNC_6(VAR_4, VAR_0);
 List *VAR_6 = VAR_2;

 int VAR_7 = 0;
 int VAR_8 = 0;

 if (!FUNC_1(VAR_4))
 {
  char *VAR_9 = FUNC_4(VAR_4);

  FUNC_2(VAR_1, (FUNC_3("\"%s\" is not a parent table", VAR_9)));
 }

 FUNC_0(VAR_5->rd_partdesc != ((void*)0));

 VAR_8 = VAR_5->rd_partdesc->nparts;
 for (VAR_7 = 0; VAR_7 < VAR_8; ++VAR_7)
 {
  VAR_6 =
   FUNC_7(VAR_6, VAR_5->rd_partdesc->oids[VAR_7]);
 }


 FUNC_5(VAR_5, VAR_3);

 return VAR_6;
}
