
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int* tcpconnect; } ;
struct connectdata {TYPE_4__* data; TYPE_3__ bits; } ;
struct FTP {int transfer; } ;
struct TYPE_6__ {struct FTP* protop; } ;
struct TYPE_5__ {scalar_t__ opt_no_body; } ;
struct TYPE_8__ {TYPE_2__ req; TYPE_1__ set; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct connectdata*,int*) ;
 scalar_t__ FUNC_2 (struct connectdata*,int ,int ) ;
 int FUNC_3 (TYPE_4__*,char*,...) ;

__attribute__((used)) static
CURLcode FUNC_4(struct connectdata *VAR_6,
                     bool *VAR_7,
                     bool *VAR_8)
{

  CURLcode VAR_9 = VAR_0;

  FUNC_0(FUNC_3(VAR_6->data, "DO phase starts\n"));

  if(VAR_6->data->set.opt_no_body) {

    struct FTP *VAR_10 = VAR_6->data->req.protop;
    VAR_10->transfer = VAR_2;
  }

  *VAR_8 = VAR_1;


  VAR_9 = FUNC_2(VAR_6, VAR_5, VAR_3);
  if(VAR_9)
    return VAR_9;


  VAR_9 = FUNC_1(VAR_6, VAR_8);

  *VAR_7 = VAR_6->bits.tcpconnect[VAR_4];

  FUNC_3(VAR_6->data, "ftp_perform ends with SECONDARY: %d\n", *VAR_7);

  if(*VAR_8)
    FUNC_0(FUNC_3(VAR_6->data, "DO phase is complete1\n"));

  return VAR_9;
}
