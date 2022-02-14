
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int filename ;
typedef int UINT ;
struct TYPE_14__ {TYPE_3__* Server; } ;
struct TYPE_13__ {int FileData; } ;
struct TYPE_12__ {TYPE_1__* Cedar; TYPE_2__* CfgRw; } ;
struct TYPE_11__ {int FileName; } ;
struct TYPE_10__ {int Bridge; } ;
typedef TYPE_3__ SERVER ;
typedef TYPE_4__ RPC_CONFIG ;
typedef int IO ;
typedef TYPE_5__ ADMIN ;


 int FUNC_0 (TYPE_5__*,int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (char*,int,char*,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

UINT FUNC_8(ADMIN *VAR_4, RPC_CONFIG *VAR_5)
{
 SERVER *VAR_6;
 IO *VAR_7;
 char VAR_8[VAR_2];

 VAR_3;

 VAR_6 = VAR_4->Server;
 if (VAR_6->CfgRw == ((void*)0))
 {
  return VAR_0;
 }


 FUNC_4(VAR_8, sizeof(VAR_8), "%s.new", VAR_6->CfgRw->FileName);

 VAR_7 = FUNC_2(VAR_8);

 FUNC_3(VAR_7, VAR_5->FileData, FUNC_7(VAR_5->FileData));

 FUNC_1(VAR_7);

 FUNC_5(VAR_6);

 FUNC_0(VAR_4, ((void*)0), "LA_SET_CONFIG");


 FUNC_6(VAR_6->Cedar->Bridge);

 return VAR_1;
}
