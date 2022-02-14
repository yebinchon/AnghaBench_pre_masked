
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ seqcycle; int seqstart; int seqmax; int seqmin; int seqincrement; } ;
typedef int Oid ;
typedef TYPE_1__* Form_pg_sequence ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 char* FUNC_2 (int ,char*,int ,int ,int ,int ,char*) ;

char *
FUNC_3(Oid VAR_1)
{
 char *VAR_2 = ((void*)0);
 char *VAR_3 = ((void*)0);
 Form_pg_sequence VAR_4 = ((void*)0);

 VAR_4 = FUNC_1(VAR_1);


 VAR_2 = FUNC_0(VAR_1);

 VAR_3 = FUNC_2(VAR_0, VAR_2,
         VAR_4->seqincrement, VAR_4->seqmin,
         VAR_4->seqmax, VAR_4->seqstart,
         VAR_4->seqcycle ? "" : "NO ");

 return VAR_3;
}
