
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_buffer {int purb; int * stream; scalar_t__ signature; } ;


 int VAR_0 ;
 int FUNC_0 (struct pvr2_buffer*,char*) ;
 int FUNC_1 (struct pvr2_buffer*) ;
 int FUNC_2 (struct pvr2_buffer*) ;
 int FUNC_3 (int ,char*,struct pvr2_buffer*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct pvr2_buffer *VAR_1)
{



 FUNC_2(VAR_1);
 FUNC_1(VAR_1);
 VAR_1->signature = 0;
 VAR_1->stream = ((void*)0);
 FUNC_4(VAR_1->purb);
 FUNC_3(VAR_0,"/*---TRACE_FLOW---*/"
     " bufferDone     %p",VAR_1);
}
