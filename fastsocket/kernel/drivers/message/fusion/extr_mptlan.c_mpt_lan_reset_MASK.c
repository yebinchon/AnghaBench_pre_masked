
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mpt_lan_priv {int mpt_dev; int pnum; } ;
struct TYPE_2__ {scalar_t__ Reserved2; scalar_t__ MsgFlags; int PortNumber; scalar_t__ Reserved; scalar_t__ ChainOffset; int Function; } ;
typedef int MPT_FRAME_HDR ;
typedef TYPE_1__ LANResetRequest_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int *) ;
 struct mpt_lan_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_2)
{
 MPT_FRAME_HDR *VAR_3;
 LANResetRequest_t *VAR_4;
 struct mpt_lan_priv *VAR_5 = FUNC_2(VAR_2);

 VAR_3 = FUNC_0(VAR_0, VAR_5->mpt_dev);

 if (VAR_3 == ((void*)0)) {



  return -1;
 }

 VAR_4 = (LANResetRequest_t *) VAR_3;

 VAR_4->Function = VAR_1;
 VAR_4->ChainOffset = 0;
 VAR_4->Reserved = 0;
 VAR_4->PortNumber = VAR_5->pnum;
 VAR_4->MsgFlags = 0;
 VAR_4->Reserved2 = 0;

 FUNC_1(VAR_0, VAR_5->mpt_dev, VAR_3);

 return 0;
}
