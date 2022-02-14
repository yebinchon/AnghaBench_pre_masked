
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ttusb_dec {TYPE_4__* audio_filter; } ;
struct TYPE_8__ {TYPE_3__* feed; } ;
struct TYPE_6__ {int ts; } ;
struct TYPE_5__ {int (* ts ) (unsigned char*,int,int *,int ,int *,int ) ;} ;
struct TYPE_7__ {TYPE_2__ feed; TYPE_1__ cb; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int,int *,int ,int *,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_1, unsigned char *VAR_2)
{
 struct ttusb_dec *VAR_3 = VAR_1;

 VAR_3->audio_filter->feed->cb.ts(VAR_2, 188, ((void*)0), 0,
           &VAR_3->audio_filter->feed->feed.ts,
           VAR_0);

 return 0;
}
