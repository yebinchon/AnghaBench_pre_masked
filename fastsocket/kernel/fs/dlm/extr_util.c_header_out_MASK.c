
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_header {int h_length; void* h_nodeid; void* h_lockspace; void* h_version; } ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(struct dlm_header *VAR_0)
{
 VAR_0->h_version = FUNC_1(VAR_0->h_version);
 VAR_0->h_lockspace = FUNC_1(VAR_0->h_lockspace);
 VAR_0->h_nodeid = FUNC_1(VAR_0->h_nodeid);
 VAR_0->h_length = FUNC_0(VAR_0->h_length);
}
