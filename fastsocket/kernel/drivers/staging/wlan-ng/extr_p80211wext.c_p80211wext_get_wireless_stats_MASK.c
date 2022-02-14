
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_21__ {int decrypt_err; } ;
struct TYPE_23__ {scalar_t__ beacon; } ;
struct TYPE_22__ {scalar_t__ retries; scalar_t__ fragment; scalar_t__ misc; scalar_t__ nwid; int code; } ;
struct TYPE_20__ {int updated; int noise; int level; int qual; } ;
struct iw_statistics {TYPE_8__ miss; TYPE_7__ discard; TYPE_5__ qual; scalar_t__ status; } ;
struct TYPE_24__ {scalar_t__ msdstate; int (* mlmerequest ) (TYPE_9__*,int *) ;TYPE_6__ rx; struct iw_statistics wstats; } ;
typedef TYPE_9__ wlandevice_t ;
typedef int p80211msg_t ;
struct TYPE_19__ {int data; } ;
struct TYPE_18__ {int data; } ;
struct TYPE_17__ {int data; } ;
struct TYPE_16__ {int status; int data; } ;
struct TYPE_14__ {TYPE_4__ noise; TYPE_3__ level; TYPE_2__ link; TYPE_1__ dbm; int msgcode; } ;
typedef TYPE_10__ p80211msg_lnxreq_commsquality_t ;
struct TYPE_15__ {TYPE_9__* ml_priv; } ;
typedef TYPE_11__ netdevice_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_9__*,int *) ;

struct iw_statistics *FUNC_2(netdevice_t *VAR_6)
{
 p80211msg_lnxreq_commsquality_t VAR_7;
 wlandevice_t *VAR_8 = VAR_6->ml_priv;
 struct iw_statistics *VAR_9 = &VAR_8->wstats;
 int VAR_10;


 if ((VAR_8 == ((void*)0)) || (VAR_8->msdstate != VAR_5))
  return ((void*)0);


 VAR_9->status = 0;


 VAR_7.msgcode = VAR_0;
 VAR_7.dbm.data = VAR_4;
 VAR_7.dbm.status = VAR_3;


 if (VAR_8->mlmerequest == ((void*)0))
  return ((void*)0);

 VAR_10 = VAR_8->mlmerequest(VAR_8, (p80211msg_t *) & VAR_7);

 VAR_9->qual.qual = FUNC_0(VAR_7.link.data);
 VAR_9->qual.level = VAR_7.level.data;
 VAR_9->qual.noise = VAR_7.noise.data;

 VAR_9->qual.updated = VAR_1 | VAR_2;
 VAR_9->discard.code = VAR_8->rx.decrypt_err;
 VAR_9->discard.nwid = 0;
 VAR_9->discard.misc = 0;

 VAR_9->discard.fragment = 0;
 VAR_9->discard.retries = 0;
 VAR_9->miss.beacon = 0;

 return VAR_9;
}
