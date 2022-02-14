
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int MaxFALL; int MaxCLL; } ;
struct TYPE_4__ {scalar_t__ data; } ;
typedef TYPE_1__ AVPacketSideData ;
typedef TYPE_2__ AVContentLightMetadata ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,char*,int ,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_1, AVPacketSideData* VAR_2)
{
    AVContentLightMetadata* VAR_3 = (AVContentLightMetadata*)VAR_2->data;
    FUNC_0(VAR_1, VAR_0, "Content Light Level Metadata, "
           "MaxCLL=%d, MaxFALL=%d",
           VAR_3->MaxCLL, VAR_3->MaxFALL);
}
