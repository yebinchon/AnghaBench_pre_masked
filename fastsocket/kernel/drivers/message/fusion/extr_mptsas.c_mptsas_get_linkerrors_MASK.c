
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int phy_identifier; } ;
struct sas_phy {void* phy_reset_problem_count; void* loss_of_dword_sync_count; void* running_disparity_error_count; void* invalid_dword_count; TYPE_2__ identify; } ;
typedef int dma_addr_t ;
struct TYPE_14__ {TYPE_5__* ehdr; } ;
struct TYPE_19__ {int physAddr; int action; int timeout; scalar_t__ dir; int pageAddr; TYPE_1__ cfghdr; } ;
struct TYPE_18__ {int ExtPageLength; int PageNumber; int ExtPageType; int PageType; scalar_t__ Reserved2; scalar_t__ Reserved1; int PageVersion; } ;
struct TYPE_17__ {int pcidev; } ;
struct TYPE_16__ {int PhyResetProblemCount; int LossDwordSynchCount; int RunningDisparityErrorCount; int InvalidDwordCount; } ;
typedef TYPE_3__ SasPhyPage1_t ;
typedef TYPE_4__ MPT_ADAPTER ;
typedef TYPE_5__ ConfigExtendedPageHeader_t ;
typedef TYPE_6__ CONFIGPARMS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*) ;
 TYPE_3__* FUNC_3 (int ,int,int*) ;
 int FUNC_4 (int ,int,TYPE_3__*,int) ;
 TYPE_4__* FUNC_5 (struct sas_phy*) ;
 int FUNC_6 (struct sas_phy*) ;

__attribute__((used)) static int FUNC_7(struct sas_phy *VAR_9)
{
 MPT_ADAPTER *VAR_10 = FUNC_5(VAR_9);
 ConfigExtendedPageHeader_t VAR_11;
 CONFIGPARMS VAR_12;
 SasPhyPage1_t *VAR_13;
 dma_addr_t VAR_14;
 int VAR_15;


 if (!FUNC_6(VAR_9))
  return -VAR_0;

 VAR_11.PageVersion = VAR_7;
 VAR_11.ExtPageLength = 0;
 VAR_11.PageNumber = 1 ;
 VAR_11.Reserved1 = 0;
 VAR_11.Reserved2 = 0;
 VAR_11.PageType = VAR_6;
 VAR_11.ExtPageType = VAR_5;

 VAR_12.cfghdr.ehdr = &VAR_11;
 VAR_12.physAddr = -1;
 VAR_12.pageAddr = VAR_9->identify.phy_identifier;
 VAR_12.action = VAR_3;
 VAR_12.dir = 0;
 VAR_12.timeout = VAR_8;

 VAR_15 = FUNC_1(VAR_10, &VAR_12);
 if (VAR_15)
  return VAR_15;
 if (!VAR_11.ExtPageLength)
  return -VAR_2;

 VAR_13 = FUNC_3(VAR_10->pcidev, VAR_11.ExtPageLength * 4,
          &VAR_14);
 if (!VAR_13)
  return -VAR_1;

 VAR_12.physAddr = VAR_14;
 VAR_12.action = VAR_4;

 VAR_15 = FUNC_1(VAR_10, &VAR_12);
 if (VAR_15)
  goto out_free_consistent;

 FUNC_2(VAR_10, VAR_13);

 VAR_9->invalid_dword_count = FUNC_0(VAR_13->InvalidDwordCount);
 VAR_9->running_disparity_error_count =
  FUNC_0(VAR_13->RunningDisparityErrorCount);
 VAR_9->loss_of_dword_sync_count =
  FUNC_0(VAR_13->LossDwordSynchCount);
 VAR_9->phy_reset_problem_count =
  FUNC_0(VAR_13->PhyResetProblemCount);

 out_free_consistent:
 FUNC_4(VAR_10->pcidev, VAR_11.ExtPageLength * 4,
       VAR_13, VAR_14);
 return VAR_15;
}
