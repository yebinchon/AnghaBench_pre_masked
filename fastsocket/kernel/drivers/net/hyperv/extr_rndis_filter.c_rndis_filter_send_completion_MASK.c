
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rndis_filter_packet {int completion_ctx; int (* completion ) (int ) ;} ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct rndis_filter_packet *VAR_1 = VAR_0;


 VAR_1->completion(VAR_1->completion_ctx);
}
