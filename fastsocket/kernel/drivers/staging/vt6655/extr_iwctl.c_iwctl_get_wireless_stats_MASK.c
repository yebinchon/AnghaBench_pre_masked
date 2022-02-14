
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_11__ {scalar_t__ beacon; } ;
struct TYPE_10__ {scalar_t__ misc; scalar_t__ retries; scalar_t__ fragment; scalar_t__ code; scalar_t__ nwid; } ;
struct TYPE_8__ {int qual; long level; int updated; scalar_t__ noise; } ;
struct iw_statistics {TYPE_4__ miss; TYPE_3__ discard; TYPE_1__ qual; int status; } ;
typedef scalar_t__ U32 ;
struct TYPE_9__ {int LinkQuality; scalar_t__ dwTsrErr; } ;
struct TYPE_12__ {scalar_t__ byBBType; int byCurrSQ; scalar_t__ bLinkPass; struct iw_statistics wstats; TYPE_2__ scStatistic; scalar_t__ uCurrRSSI; int eOPMode; } ;
typedef TYPE_5__* PSDevice ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_5__*,int,long*) ;
 scalar_t__ VAR_2 ;
 TYPE_5__* FUNC_1 (struct net_device*) ;

struct iw_statistics *FUNC_2(struct net_device *VAR_3)
{
 PSDevice VAR_4 = FUNC_1(VAR_3);
 long VAR_5;

 VAR_4->wstats.status = VAR_4->eOPMode;
 VAR_4->wstats.qual.qual = VAR_4->byCurrSQ;

 FUNC_0(VAR_4, (BYTE)(VAR_4->uCurrRSSI), &VAR_5);
 VAR_4->wstats.qual.level = VAR_5;

 VAR_4->wstats.qual.noise = 0;
 VAR_4->wstats.qual.updated = 1;
 VAR_4->wstats.discard.nwid = 0;
 VAR_4->wstats.discard.code = 0;
 VAR_4->wstats.discard.fragment = 0;
 VAR_4->wstats.discard.retries = (U32)VAR_4->scStatistic.dwTsrErr;
 VAR_4->wstats.discard.misc = 0;
 VAR_4->wstats.miss.beacon = 0;

 return &VAR_4->wstats;
}
