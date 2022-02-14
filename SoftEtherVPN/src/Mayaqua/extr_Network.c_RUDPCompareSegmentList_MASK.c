
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_2__ {int SeqNo; } ;
typedef TYPE_1__ RUDP_SEGMENT ;


 int FUNC_0 (int ,int ) ;

int FUNC_1(void *VAR_0, void *VAR_1)
{
 RUDP_SEGMENT *VAR_2, *VAR_3;
 UINT VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }
 VAR_2 = *((RUDP_SEGMENT **)VAR_0);
 VAR_3 = *((RUDP_SEGMENT **)VAR_1);
 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }

 VAR_4 = FUNC_0(VAR_2->SeqNo, VAR_3->SeqNo);

 return VAR_4;
}
