
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pvr2_channel {TYPE_1__* stream; } ;
struct TYPE_2__ {int * user; int stream; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct pvr2_channel *VAR_0)
{
 if (!VAR_0->stream) return;
 FUNC_0(VAR_0->stream->stream);
 VAR_0->stream->user = ((void*)0);
 VAR_0->stream = ((void*)0);
}
