
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint16_t ;
typedef scalar_t__ u_long ;
struct xfer_info_t {int EraseCount; int Offset; int state; } ;
struct erase_info {int len; scalar_t__ priv; int addr; int callback; TYPE_4__* mtd; } ;
struct TYPE_7__ {TYPE_4__* mtd; } ;
struct TYPE_6__ {int EraseUnitSize; } ;
struct TYPE_8__ {TYPE_2__ mbd; TYPE_1__ header; struct xfer_info_t* XferInfo; } ;
typedef TYPE_3__ partition_t ;
struct TYPE_9__ {int (* erase ) (TYPE_4__*,struct erase_info*) ;} ;


 int FUNC_0 (int,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct erase_info*) ;
 struct erase_info* FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_4__*,struct erase_info*) ;

__attribute__((used)) static int FUNC_4(partition_t *VAR_4,
        uint16_t VAR_5)
{
    int VAR_6;
    struct xfer_info_t *VAR_7;
    struct erase_info *VAR_8;

    VAR_7 = &VAR_4->XferInfo[VAR_5];
    FUNC_0(1, "ftl_cs: erasing xfer unit at 0x%x\n", VAR_7->Offset);
    VAR_7->state = VAR_2;




    VAR_8=FUNC_2(sizeof(struct erase_info), VAR_1);
    if (!VAR_8)
            return -VAR_0;

    VAR_8->mtd = VAR_4->mbd.mtd;
    VAR_8->callback = VAR_3;
    VAR_8->addr = VAR_7->Offset;
    VAR_8->len = 1 << VAR_4->header.EraseUnitSize;
    VAR_8->priv = (u_long)VAR_4;

    VAR_6 = VAR_4->mbd.mtd->erase(VAR_4->mbd.mtd, VAR_8);

    if (!VAR_6)
     VAR_7->EraseCount++;
    else
     FUNC_1(VAR_8);

    return VAR_6;
}
