
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_5__* hdr; } ;
struct TYPE_15__ {int physAddr; int dir; int pageAddr; int action; scalar_t__ timeout; TYPE_1__ cfghdr; } ;
struct TYPE_14__ {int PageLength; int PageNumber; int PageType; scalar_t__ PageVersion; } ;
struct TYPE_12__ {TYPE_2__* fc_port_page1; } ;
struct TYPE_13__ {TYPE_3__ fc_data; } ;
struct TYPE_11__ {int pg_sz; int dma; int data; } ;
typedef TYPE_4__ MPT_ADAPTER ;
typedef TYPE_5__ ConfigPageHeader_t ;
typedef TYPE_6__ CONFIGPARMS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*,TYPE_6__*) ;

__attribute__((used)) static int
FUNC_1(MPT_ADAPTER *VAR_5, int VAR_6)
{
 ConfigPageHeader_t VAR_7;
 CONFIGPARMS VAR_8;
 int VAR_9;

 if (VAR_6 > 1)
  return -VAR_0;

 if (!(VAR_5->fc_data.fc_port_page1[VAR_6].data))
  return -VAR_0;


 VAR_7.PageVersion = 0;
 VAR_7.PageLength = 0;
 VAR_7.PageNumber = 1;
 VAR_7.PageType = VAR_4;
 VAR_8.cfghdr.hdr = &VAR_7;
 VAR_8.physAddr = -1;
 VAR_8.action = VAR_2;
 VAR_8.dir = 0;
 VAR_8.pageAddr = VAR_6;
 VAR_8.timeout = 0;

 if ((VAR_9 = FUNC_0(VAR_5, &VAR_8)) != 0)
  return VAR_9;

 if (VAR_7.PageLength == 0)
  return -VAR_1;

 if (VAR_7.PageLength*4 != VAR_5->fc_data.fc_port_page1[VAR_6].pg_sz)
  return -VAR_0;

 VAR_8.physAddr = VAR_5->fc_data.fc_port_page1[VAR_6].dma;
 VAR_8.action = VAR_3;
 VAR_8.dir = 1;

 VAR_9 = FUNC_0(VAR_5, &VAR_8);

 return VAR_9;
}
