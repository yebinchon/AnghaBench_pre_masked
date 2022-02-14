
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct cxgb4_lld_info {TYPE_6__* vr; } ;
struct TYPE_14__ {scalar_t__ size; } ;
struct TYPE_12__ {scalar_t__ size; } ;
struct TYPE_11__ {scalar_t__ size; } ;
struct TYPE_10__ {scalar_t__ size; } ;
struct TYPE_9__ {scalar_t__ size; } ;
struct TYPE_8__ {scalar_t__ size; } ;
struct TYPE_13__ {TYPE_5__ ocq; TYPE_4__ cq; TYPE_3__ qp; TYPE_2__ rq; TYPE_1__ pbl; TYPE_7__ stag; } ;



__attribute__((used)) static int FUNC_0(const struct cxgb4_lld_info *VAR_0)
{
 return VAR_0->vr->stag.size > 0 && VAR_0->vr->pbl.size > 0 &&
        VAR_0->vr->rq.size > 0 && VAR_0->vr->qp.size > 0 &&
        VAR_0->vr->cq.size > 0 && VAR_0->vr->ocq.size > 0;
}
