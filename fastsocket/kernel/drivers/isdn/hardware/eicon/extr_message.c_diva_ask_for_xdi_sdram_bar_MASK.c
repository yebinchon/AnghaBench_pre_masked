
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ sdram_bar; scalar_t__ Id; int (* request ) (TYPE_4__*) ;} ;
struct TYPE_12__ {scalar_t__* user; } ;
struct TYPE_9__ {scalar_t__ bar; } ;
struct TYPE_10__ {TYPE_1__ info; int Rc; scalar_t__ Req; } ;
struct TYPE_11__ {TYPE_2__ xdi_sdram_bar; } ;
typedef TYPE_3__ IDI_SYNC_REQ ;
typedef TYPE_4__ ENTITY ;
typedef TYPE_5__ DIVA_CAPI_ADAPTER ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_3 (DIVA_CAPI_ADAPTER * VAR_3,
                                        IDI_SYNC_REQ * VAR_4) {
  VAR_3->sdram_bar = 0;
  if (VAR_2 & VAR_0) {
    ENTITY * VAR_5 = (ENTITY *)VAR_4;

    VAR_5->user[0] = VAR_3->Id - 1;
    VAR_4->xdi_sdram_bar.info.bar = 0;
    VAR_4->xdi_sdram_bar.Req = 0;
    VAR_4->xdi_sdram_bar.Rc = VAR_1;

    (*(VAR_3->request))(VAR_5);

    VAR_3->sdram_bar = VAR_4->xdi_sdram_bar.info.bar;
    FUNC_0(3,FUNC_1("A(%d) SDRAM BAR = %08x", VAR_3->Id, VAR_3->sdram_bar));
  }
}
