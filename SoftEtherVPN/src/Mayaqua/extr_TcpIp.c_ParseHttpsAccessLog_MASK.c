
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int sni ;
typedef int h ;
struct TYPE_13__ {int IsSsl; int Path; int Port; int Hostname; int Method; } ;
struct TYPE_11__ {TYPE_1__* TCPHeader; } ;
struct TYPE_12__ {TYPE_2__ L4; int PayloadSize; int Payload; } ;
struct TYPE_10__ {int DstPort; } ;
typedef TYPE_3__ PKT ;
typedef TYPE_4__ HTTPLOG ;


 TYPE_4__* FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,char*,int) ;
 int VAR_0 ;
 int FUNC_3 (int ,int,char*) ;
 int FUNC_4 (TYPE_4__*,int) ;

HTTPLOG *FUNC_5(PKT *VAR_1)
{
 HTTPLOG VAR_2;
 char VAR_3[VAR_0];

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 if (FUNC_2(VAR_1->Payload, VAR_1->PayloadSize, VAR_3, sizeof(VAR_3)) == 0)
 {
  return ((void*)0);
 }

 FUNC_4(&VAR_2, sizeof(VAR_2));

 FUNC_3(VAR_2.Method, sizeof(VAR_2.Method), "SSL_Connect");
 FUNC_3(VAR_2.Hostname, sizeof(VAR_2.Hostname), VAR_3);
 VAR_2.Port = FUNC_1(VAR_1->L4.TCPHeader->DstPort);
 FUNC_3(VAR_2.Path, sizeof(VAR_2.Path), "/");
 VAR_2.IsSsl = 1;

 return FUNC_0(&VAR_2, sizeof(VAR_2));
}
